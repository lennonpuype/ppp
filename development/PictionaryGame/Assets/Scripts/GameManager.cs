﻿using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;

public class GameManager : MonoBehaviourPunCallbacks
{
    [Header("Game Scene UI")]
    public GameObject informPanelGameObject;
    public GameObject staticGameObject;
    public GameObject dynamicGameObject;
    public GameObject joinedPlayersUI;
    public GameObject joinedPlayersPlayerMessage;
    public GameObject joinedPlayersHostMessage;

    [Header("Player List")]
    public GameObject playerList;
    public Text playerName;

    [Header("Dynamic Elements")]
    public Text Turn;
    public Text Amount;
    public Text Score;
    public GameObject PlayerList;
    public Text Player;
    public GameObject Drawer;
    public GameObject Guesser;
    public Text DrawWord;
    public Text GuesserInput;

    public Text HelpText;

    [Header("Game Booleans (don't change on this panel - Unity)")]
    private bool gameIsStarted = false;
    private static int getHostId = PhotonNetwork.CurrentRoom.MasterClientId;
    private int playerIndex;
    private string drawerIdGlobal;

    [Header("Words")]
    public static List<string> words = new List<string>();

    private WordCollection wordCollection;
    private string randomWord = "Bunny";
    private string jsonURL = "https://www.lennonpuype.be/ppp/json/words.json";

    [Header("Drawer")]
    public GameObject spheresList;

    GameObject sphere;
    Plane planeObj;
    Vector3 startPos;

    [Header("AR")]
    public GameObject ARSession;
    public GameObject ARSessionOrigin;
    public GameObject ARPointManager;
    public GameObject ARPlaneManager;


    private void Start()
    {
        StartCoroutine(getData());
        planeObj = new Plane(Camera.main.transform.forward * -1, this.transform.position);

        ExitGames.Client.Photon.Hashtable playerScoreProp = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.PLAYER_SCORE, 0 } };
        PhotonNetwork.LocalPlayer.SetCustomProperties(playerScoreProp);

        playerIndex = getHostId;
        GameAllowed();
    }

    private void Update()
    {
        GameAllowed();

        var localId = Convert.ToString(PhotonNetwork.LocalPlayer.UserId);
        

        if (localId == drawerIdGlobal)
        {
            //Draw
            if (Input.touchCount > 0 || Input.GetMouseButton(0))
            {
                Vector3 spherePosition = new Vector3(this.transform.position.x, this.transform.position.y, 0);

                sphere = PhotonNetwork.Instantiate("Sphere", spherePosition, Quaternion.identity);
                sphere.transform.parent = spheresList.transform;

                ARSession.SetActive(false);
                ARSessionOrigin.SetActive(false);
                ARPointManager.SetActive(false);
                ARPlaneManager.SetActive(false);
            }
        }
        else
        {
            //AR
            ARSession.SetActive(true);
            ARSessionOrigin.SetActive(true);
            ARPointManager.SetActive(true);
            ARPlaneManager.SetActive(true);
        }
    }

    private void gameStarted()
    {
        
        loadGameUI();
        if (!gameIsStarted)
        {
           
            startNewRound();
            gameIsStarted = true;
        }
    }

    private void startNewRound()
    {
        Debug.Log("A new round has started!");
        //updatePlayerList();

        var players = PhotonNetwork.PlayerList;
        playerIndex = getHostId - 1;

        var drawer = players[playerIndex];
        
        var localId = Convert.ToString(PhotonNetwork.LocalPlayer.UserId);
        var drawerId = Convert.ToString(drawer.UserId);
        var drawerIdGlobal = drawerId;

        //HelpText.text = "Drawer ID: " + localId + "User ID: " + drawerId;

        if (localId == drawerId)
        {
            randomWord = loadRandomWord();
            HelpText.text = "Im a drawer";
            //DrawerView
            Turn.text = "It is your turn";
            DrawWord.text = "Draw a " + randomWord;
            Drawer.SetActive(true);
            Guesser.SetActive(false);
        }
        else
        {
            randomWord = loadRandomWord();
            HelpText.text = "Im a guesser";
            //GuesserView
            Turn.text = drawer.NickName + " is the drawer";
            Drawer.SetActive(false);
            Guesser.SetActive(true);            
        }

        //Set the amount text
        if(PhotonNetwork.CurrentRoom.PlayerCount > 1)
        {
            Amount.text = PhotonNetwork.CurrentRoom.PlayerCount + " people are in the game";
        }
        else
        {
            Amount.text = PhotonNetwork.CurrentRoom.PlayerCount + " person is in te game";
        }
    }

    public void GuessTheWord()
    {
        
        //Get the word from the input
        var word = GuesserInput.text;

        //Check if the word matches with the current random word
        if (word == randomWord)
        {
            int prevPoints = 0;
            var points = PhotonNetwork.LocalPlayer.CustomProperties["Player_Score"];

            if (PhotonNetwork.LocalPlayer.CustomProperties["Player_Score"] == null)
            {
                prevPoints = 0;
            }

            var score = prevPoints + Convert.ToDouble(points);
            score += 50;

            ExitGames.Client.Photon.Hashtable playerScoreProp = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.PLAYER_SCORE, score } };
            PhotonNetwork.LocalPlayer.SetCustomProperties(playerScoreProp);

            Debug.Log(PhotonNetwork.LocalPlayer.CustomProperties["Player_Score"]);


            Score.text = Convert.ToString(score);
            
        }
        else
        {
            GuesserInput.text = "";
            //Foutmelding
            //

            int prevPoints = 0;
            var points = PhotonNetwork.LocalPlayer.CustomProperties["Player_Score"];

            if (PhotonNetwork.LocalPlayer.CustomProperties["Player_Score"] == null)
            {
                prevPoints = 0;
            }

            var score = prevPoints + Convert.ToDouble(points);
            score -= 2;

            ExitGames.Client.Photon.Hashtable playerScoreProp = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.PLAYER_SCORE, score } };
            PhotonNetwork.LocalPlayer.SetCustomProperties(playerScoreProp);

            Debug.Log(PhotonNetwork.LocalPlayer.CustomProperties["Player_Score"]);


            Score.text = Convert.ToString(score);
           
        }

    }

    private void GameAllowed()
    {
        if (PhotonNetwork.CurrentRoom.PlayerCount < 2)
        {
            //Debug.Log("Not Allowed");
            informPanelGameObject.SetActive(true);
        }
        else
        {
            //Debug.Log("Allowed");
            informPanelGameObject.SetActive(false);
            gameStarted();
        }
    }


    private void loadGameUI()
    {
        //UI Fixed
        joinedPlayersUI.SetActive(false);
        informPanelGameObject.SetActive(false);
        staticGameObject.SetActive(true);
        dynamicGameObject.SetActive(true);
    }

    public void leaveRoom()
    {
        PhotonNetwork.LeaveRoom();
        SceneLoader.Instance.LoadScene("LobbyScene");
    }

    private void updatePlayerList()
    {
        var players = PhotonNetwork.CurrentRoom.Players;

        foreach (var player in players)
        {
            playerName.text = player.Value.NickName + " " + player.Value.CustomProperties["Player_Score"];

            Text playerNameClone = Instantiate(playerName);
            playerNameClone.transform.parent = playerList.transform;
            playerNameClone.transform.localPosition = new Vector3(0, 0, 0);
            playerNameClone.gameObject.SetActive(true);
        }

        playerList = null;
    }

    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        GameAllowed();
    }

    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        GameAllowed();
    }

    [ContextMenu("Load Words")]
    IEnumerator getData()
    {
        Debug.Log("The word is loading, please wait");
        WWW getTheSite = new WWW(jsonURL);
        yield return getTheSite;

        if (getTheSite.error == null)
        {
            processJsonData(getTheSite.text);
        }
        else
        {
            Debug.Log("Please connect to the internet");
        }
    }

    private void processJsonData(string url)
    {
        WordCollection wordCollection = JsonUtility.FromJson<WordCollection>(url);

        for (int i = 0; i < wordCollection.words.Length; i++)
        {
            words.Add(wordCollection.words[i].word);
            Debug.Log(wordCollection.words[i].word);
        }
    }

    private string loadRandomWord()
    {
        var randomNumber = UnityEngine.Random.Range(0, words.Count);
        return words[randomNumber];
    }

}

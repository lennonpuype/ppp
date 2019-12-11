using System;
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

    [Header("WinnerUI")]
    public GameObject WinnerUI;
    public Text WinnerText;

    

    [Header("Game Booleans (don't change on this panel - Unity)")]
    private bool gameIsStarted = false;
    private static int getHostId = PhotonNetwork.CurrentRoom.MasterClientId;
    private int playerIndex;
    private string drawerIdGlobal;
    private bool thereIsAWinner = false;

    [Header("Words")]
    public static List<string> words = new List<string>();

    private WordCollection wordCollection;
    //private string randomWord = "Bunny";
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
        WinnerUI.SetActive(false);

        StartCoroutine(getData());
        planeObj = new Plane(Camera.main.transform.forward * -1, this.transform.position);

        //Set player score standard to 0
        ExitGames.Client.Photon.Hashtable playerScoreProp = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.PLAYER_SCORE, 0 } };
        PhotonNetwork.LocalPlayer.SetCustomProperties(playerScoreProp);

        //Set the goalscore of the current game
        ExitGames.Client.Photon.Hashtable goalScoreProp = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.GOAL_SCORE, 100 } };
        PhotonNetwork.CurrentRoom.SetCustomProperties(goalScoreProp);

        playerIndex = getHostId;
        GameAllowed();
    }

    private void Update()
    {
        GameAllowed();

        if (drawerIdGlobal != null)
        {
            //Draw
            Vector3 temp = Input.mousePosition;
            temp.z = 10f;
            this.transform.position = Camera.main.ScreenToWorldPoint(temp);

            ARSession.SetActive(false);
            ARSessionOrigin.SetActive(false);
            ARPointManager.SetActive(false);
            ARPlaneManager.SetActive(false);

            if (Input.touchCount > 0 || Input.GetMouseButton(0))
            {
                Vector3 spherePosition = new Vector3(this.transform.position.x, this.transform.position.y, 0);

                sphere = PhotonNetwork.Instantiate("Sphere", spherePosition, Quaternion.identity);
                sphere.transform.parent = spheresList.transform;

                
            }
            //Debug.Log("You are the drawer");
        }
        else
        {
            //AR
            ARSession.SetActive(true);
            ARSessionOrigin.SetActive(true);
            ARPointManager.SetActive(true);
            ARPlaneManager.SetActive(true);
            //Debug.Log("You are not the drawer");
        }

        var isThereAWinner = Convert.ToBoolean(PhotonNetwork.CurrentRoom.CustomProperties["Is_There_A_Winner"]);
        Debug.Log(isThereAWinner);

        if (isThereAWinner)
        {
            WinnerUI.SetActive(true);
            string winner = Convert.ToString(PhotonNetwork.CurrentRoom.CustomProperties["Winner"]);
            WinnerText.text = winner;
        }
        else
        {
            WinnerUI.SetActive(false);
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
        ExitGames.Client.Photon.Hashtable isWinnerProp = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.IS_THERE_A_WINNER, "false" } };
        PhotonNetwork.CurrentRoom.SetCustomProperties(isWinnerProp);
        //WinnerUI.SetActive(false);
        Debug.Log("A new round has started!");
        //updatePlayerList();

        var players = PhotonNetwork.PlayerList;
        playerIndex = getHostId - 1;

        var drawer = players[playerIndex];
        
        var localId = Convert.ToString(PhotonNetwork.LocalPlayer.UserId);
        var drawerId = Convert.ToString(drawer.UserId);
        drawerIdGlobal = drawerId;

        var randomWordForRoom = loadRandomWord();

        //Random Word for everyone
        ExitGames.Client.Photon.Hashtable randomWordProp = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.RANDOM_WORD, randomWordForRoom } };
        PhotonNetwork.CurrentRoom.SetCustomProperties(randomWordProp);

        var randomWord = PhotonNetwork.CurrentRoom.CustomProperties["Random_Word"];

        if (localId == drawerId)
        {
            //DrawerView
            Turn.text = "It is your turn";
            DrawWord.text = "Draw a " + randomWord;
            Drawer.SetActive(true);
            Guesser.SetActive(false);
        }
        else
        {
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
        var randomWord = Convert.ToString(PhotonNetwork.CurrentRoom.CustomProperties["Random_Word"]);
        HelpText.text = word + " " + randomWord;
        Debug.Log(word + " " + randomWord);
        var goal = Convert.ToDouble(PhotonNetwork.CurrentRoom.CustomProperties["Goal_Score"]);

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

            Debug.Log(score + " " + goal);

            if (score == goal)
            {
                Debug.Log("We have a winner");
                ExitGames.Client.Photon.Hashtable winnerProp = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.WINNER, PhotonNetwork.LocalPlayer.NickName } };
                PhotonNetwork.CurrentRoom.SetCustomProperties(winnerProp);

                //Random Word for everyone
                ExitGames.Client.Photon.Hashtable isWinnerProp = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.IS_THERE_A_WINNER, "true" } };
                PhotonNetwork.CurrentRoom.SetCustomProperties(isWinnerProp);
                //thereIsAWinner = true;
            }

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
            

            if (score <= 0)
            {
                Debug.Log("Can't go lower");
            }
            else
            {
                score -= 2;

                ExitGames.Client.Photon.Hashtable playerScoreProp = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.PLAYER_SCORE, score } };
                PhotonNetwork.LocalPlayer.SetCustomProperties(playerScoreProp);

                Debug.Log(PhotonNetwork.LocalPlayer.CustomProperties["Player_Score"]);


                Score.text = Convert.ToString(score);
            }

            
           
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

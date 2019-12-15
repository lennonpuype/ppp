using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
using UnityEditor;
using System.Text;
using DentedPixel;
using UnityEngine.XR.ARFoundation;

public class GameManager : MonoBehaviourPunCallbacks
{
    [Header("Game Scene UI")]
    public GameObject informPanelGameObject;
    public GameObject staticGameObject;
    public GameObject dynamicGameObject;
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
    public Text playerNameField;
    public GameObject Drawer;
    public GameObject Guesser;
    public Text DrawWord;
    public Text GuesserInput;
    public InputField GuesserInputField;
    public GameObject ErrorBox;
    public Text ErrorMessage;
    public Text HelpText;
    public GameObject ARButton;

    [Header("WinnerUI")]
    public GameObject WinnerUI;
    public Text WinnerText;

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

    [Header("DrawAnimations")]
    public GameObject DrawAnimation;

    [Header("Game Booleans (don't change on this panel - Unity)")]
    private bool gameIsStarted = false;
    private static int getHostId = PhotonNetwork.CurrentRoom.MasterClientId;
    private int playerIndex;
    private string drawerIdGlobal;
    private bool thereIsAWinner = false;
    private string globalWord;
    List<Text> playerNames = new List<Text>();
    private bool playerListActive = false;
    private bool animationStarted = true;
    List<GameObject> spheresArray = new List<GameObject>();

    //[Header("Timer")]
    //private int timeAmount = 45;
    //private static Timer timer;
    //public GameObject TimerBar;

    private void Start()
    {
        WinnerUI.SetActive(false);
        ErrorBox.SetActive(false);
        

        StartCoroutine(getData());
        planeObj = new Plane(Camera.main.transform.forward * -1, this.transform.position);

        //Set player score standard to 0
        ExitGames.Client.Photon.Hashtable playerScoreProp = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.PLAYER_SCORE, 0 } };
        PhotonNetwork.LocalPlayer.SetCustomProperties(playerScoreProp);

        //Set the goalscore of the current game
        ExitGames.Client.Photon.Hashtable goalScoreProp = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.GOAL_SCORE, 250 } };
        PhotonNetwork.CurrentRoom.SetCustomProperties(goalScoreProp);

        //Set Drawer
        ExitGames.Client.Photon.Hashtable newDrawer = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.DRAWER, 0 } };
        PhotonNetwork.CurrentRoom.SetCustomProperties(newDrawer);

        //The winner is false when starting
        ExitGames.Client.Photon.Hashtable isWinnerProp = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.IS_THERE_A_WINNER, "false" } };
        PhotonNetwork.CurrentRoom.SetCustomProperties(isWinnerProp);

        playerIndex = getHostId;
        GameAllowed();
    }

    private void Update()
    {
        

        GameAllowed();

        updatePlayerList();

        if (gameIsStarted)
        {
            onlyLoadOnceOnStateChange();
            var drawerInitId = Convert.ToInt16(PhotonNetwork.CurrentRoom.CustomProperties["Drawer"]);

            var players = PhotonNetwork.PlayerList;
            var drawer = players[drawerInitId];

            var localId = Convert.ToString(PhotonNetwork.LocalPlayer.UserId);
            var drawerId = Convert.ToString(drawer.UserId);

            var randomWord = PhotonNetwork.CurrentRoom.CustomProperties["Random_Word"];
            globalWord = Convert.ToString(randomWord);

            if (localId == drawerId)
            {
                ARSession.SetActive(false);
                ARSessionOrigin.SetActive(false);
                ARPointManager.SetActive(false);
                ARPlaneManager.SetActive(false);

                Turn.text = "It is your turn to draw";
                DrawWord.text = "Draw a " + globalWord;
                Drawer.SetActive(true);
                Guesser.SetActive(false);

                //Draw
                Vector3 temp = Input.mousePosition;
                temp.z = 0.73f;
                this.transform.position = Camera.main.ScreenToWorldPoint(temp);

                if (Input.touchCount > 0 || Input.GetMouseButton(0))
                {
                    Vector3 spherePosition = new Vector3(this.transform.position.x, this.transform.position.y, 0.73f);

                    HelpText.text = Convert.ToString(spherePosition);

                    sphere = PhotonNetwork.Instantiate("Sphere", spherePosition, Quaternion.identity);
                    sphere.transform.parent = spheresList.transform;
                    spheresArray.Add(sphere);

                    if (spheresList.transform.childCount >= PhotonNetwork.MAX_VIEW_IDS - 300)
                    {
                        var getFirstView = spheresList.transform.GetChild(0).gameObject;
                        PhotonNetwork.Destroy(getFirstView);
                    }
                }
            }
            else
            {
                //AR
                ARSession.SetActive(true);
                ARSessionOrigin.SetActive(true);
                ARPointManager.SetActive(true);
                ARPlaneManager.SetActive(true);
                ARButton.SetActive(true);

                Turn.text = drawer.NickName + " is the drawer";
                Drawer.SetActive(false);
                Guesser.SetActive(true);
            }

            var isThereAWinner = Convert.ToBoolean(PhotonNetwork.CurrentRoom.CustomProperties["Is_There_A_Winner"]);
            //Debug.Log(isThereAWinner);
            if (isThereAWinner)
            {
                WinnerUI.SetActive(true);
                string winner = Convert.ToString(PhotonNetwork.CurrentRoom.CustomProperties["Winner"]);
                WinnerText.text = "Congratulations \n" + winner;
            }
            else
            {
                WinnerUI.SetActive(false);
            }

            
        }
    }

    public void resetARView()
    {
        ARSession arSession = ARSession.GetComponent<ARSession>();
        arSession.Reset();
    }

    private void onlyLoadOnceOnStateChange()
    {
        var isThereADrawerChange = Convert.ToBoolean(PhotonNetwork.CurrentRoom.CustomProperties["Is_There_A_Drawer_Change"]);
        
        if (isThereADrawerChange)
        {
            var players = PhotonNetwork.PlayerList;
            var drawer = Convert.ToInt16(PhotonNetwork.CurrentRoom.CustomProperties["Drawer"]);

            var localId = PhotonNetwork.LocalPlayer.ActorNumber;

            //TimerBar.transform.localScale = new Vector3(0, 1, 1);

            Debug.Log(localId + " " + drawer);
            //timer.Enabled = false;

            if (localId == drawer)
            {
                Debug.Log("Destroy Objects of drawer");
                PhotonNetwork.DestroyPlayerObjects(drawer);
            }
                if (drawer >= players.Length-1)
            {
                startNewRound(0);
                spheresList = null;
            }
            else
            {
                startNewRound(drawer + 1);
                spheresList = null;
            }

            ExitGames.Client.Photon.Hashtable isDrawerChange = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.IS_THERE_A_DRAWER_CHANGE, "false" } };
            PhotonNetwork.CurrentRoom.SetCustomProperties(isDrawerChange);
        }
    }

   

    private void gameStarted()
    {
        loadGameUI();
        if (!gameIsStarted)
        {
            startNewRound(Convert.ToInt16(PhotonNetwork.CurrentRoom.CustomProperties["Drawer"]));
            gameIsStarted = true;
        }
    }

    private void startNewRound(int drawerInitId)
    {
        var randomWordForRoom = loadRandomWord();

        //Random Word for everyone
        ExitGames.Client.Photon.Hashtable randomWordProp = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.RANDOM_WORD, randomWordForRoom } };
        PhotonNetwork.CurrentRoom.SetCustomProperties(randomWordProp);

        ExitGames.Client.Photon.Hashtable newDrawer = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.DRAWER, drawerInitId } };
        PhotonNetwork.CurrentRoom.SetCustomProperties(newDrawer);

        ErrorBox.SetActive(false);

        //Set drawer
        ExitGames.Client.Photon.Hashtable drawerProp = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.DRAWER, drawerInitId } };
        PhotonNetwork.CurrentRoom.SetCustomProperties(drawerProp);
        //Debug.Log("A new round has started!");

        var localId = PhotonNetwork.LocalPlayer.ActorNumber - 1;
        var drawer = Convert.ToInt16(PhotonNetwork.CurrentRoom.CustomProperties["Drawer"]);
        var drawerId = drawer;

        Debug.Log(localId + " " + drawerId);

        
        //if(localId != drawerId)
        //{
        //    timer = new Timer(timeAmount * 1000);
        //    timer.Elapsed += OnTimedEvent;
        //    timer.Enabled = true;

        //    LeanTween.scaleX(TimerBar, 1, timeAmount);
        //}    

        



        //Set the amount text
        if (PhotonNetwork.CurrentRoom.PlayerCount > 1)
        {
            Amount.text = PhotonNetwork.CurrentRoom.PlayerCount + " people are in the game";
        }
        else
        {
            Amount.text = PhotonNetwork.CurrentRoom.PlayerCount + " person is in te game";
        }
    }


    //private void OnTimedEvent(System.Object source, ElapsedEventArgs e)
    //{
    //    Debug.Log("End round!");
    //    ExitGames.Client.Photon.Hashtable isDrawerChange = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.IS_THERE_A_DRAWER_CHANGE, "true" } };
    //    PhotonNetwork.CurrentRoom.SetCustomProperties(isDrawerChange);
    //}

    public void GuessTheWord()
    {
        //Get the word from the input
        var word = GuesserInput.text.ToLower();
        var randomWord = Convert.ToString(PhotonNetwork.CurrentRoom.CustomProperties["Random_Word"]).ToLower();
        HelpText.text = word + " " + randomWord;
        Debug.Log(word + " " + randomWord);
        var goal = Convert.ToDouble(PhotonNetwork.CurrentRoom.CustomProperties["Goal_Score"]);

        //Check if the word matches with the current random word
        if (word == randomWord)
        {
            ErrorBox.SetActive(false);

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

            Score.text = Convert.ToString(score);

            var drawer = Convert.ToInt16(PhotonNetwork.CurrentRoom.CustomProperties["Drawer"]);

            ExitGames.Client.Photon.Hashtable isDrawerChange = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.IS_THERE_A_DRAWER_CHANGE, "true" } };
            PhotonNetwork.CurrentRoom.SetCustomProperties(isDrawerChange);

            
            //startNewRound(drawer + 1);

            if (score == goal)
            {
                //Debug.Log("We have a winner");
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
            ErrorBox.SetActive(true);

            GuesserInputField.Select();
            GuesserInputField.text = "";

            //Foutmelding
            var drawerId = Convert.ToInt16(PhotonNetwork.CurrentRoom.CustomProperties["Drawer"]);
            var drawer = PhotonNetwork.PlayerList[drawerId];
            List<string> ErrorMessages = new List<string>();
            ErrorMessages.Add("Nope, that's not the word!");
            ErrorMessages.Add("Oh god, is " + drawer.NickName + " drawing so bad?");
            ErrorMessages.Add("Try another word");
            ErrorMessages.Add("Nope, that's not");
            ErrorMessages.Add("Try harder");

            var randomErrorIndex = UnityEngine.Random.Range(0, ErrorMessages.Count);

            ErrorBox.SetActive(true);
            ErrorMessage.text = ErrorMessages[randomErrorIndex];

            int prevPoints = 0;
            var points = PhotonNetwork.LocalPlayer.CustomProperties["Player_Score"];

            if (PhotonNetwork.LocalPlayer.CustomProperties["Player_Score"] == null)
            {
                prevPoints = 0;
            }

            var score = prevPoints + Convert.ToDouble(points);
            
            if (score <= 0)
            {
                //Debug.Log("Can't go lower");
            }
            else
            {
                score -= 2;
                
                ExitGames.Client.Photon.Hashtable playerScoreProp = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.PLAYER_SCORE, score } };
                PhotonNetwork.LocalPlayer.SetCustomProperties(playerScoreProp);

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

        var listOfPlayers = new StringBuilder();

        foreach (var player in players)
        {
            listOfPlayers.Append(player.Value.NickName + " " + player.Value.CustomProperties["Player_Score"] + "\n");
        }

        playerNameField.text = listOfPlayers.ToString();
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
        //Debug.Log("The word is loading, please wait");
        WWW getTheSite = new WWW(jsonURL);
        yield return getTheSite;

        if (getTheSite.error == null)
        {
            processJsonData(getTheSite.text);
        }
        else
        {
            //Debug.Log("Please connect to the internet");
        }
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        ExitGames.Client.Photon.Hashtable isDisconnected = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.DISCONNECTED, "true" } };
        PhotonNetwork.LocalPlayer.SetCustomProperties(isDisconnected);
        SceneLoader.Instance.LoadScene("LobbyScene");
    }

    private void processJsonData(string url)
    {
        WordCollection wordCollection = JsonUtility.FromJson<WordCollection>(url);

        for (int i = 0; i < wordCollection.words.Length; i++)
        {
            words.Add(wordCollection.words[i].word);
            //Debug.Log(wordCollection.words[i].word);
        }
    }

    private string loadRandomWord()
    {
        var randomNumber = UnityEngine.Random.Range(0, words.Count);
        return words[randomNumber];
    }

  

}

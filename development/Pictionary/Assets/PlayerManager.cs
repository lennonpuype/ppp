using System;
using System.Collections.Generic;
using System.IO; 
using UnityEngine;
using UnityEngine.UI;

public class PlayerManager : Bolt.EntityBehaviour<ICustomPlayerState>
{
    public GameObject drawerBottomField;
    public GameObject guesserBottomField;
    public Text wordSpace;

    public GameObject hostLeaveButtton;
    public GameObject playerLeaveButtton;

    public GameObject GameScene;
    public GameObject NameScene;

    public GameObject participantList;
    public Text participant;

    public Text drawerInfo;
    public Text playerAmountText;
    public Text scoreText;

    public Text guess;
    public Text goalText;

    public Text playerName;

    public GameObject pointer;

    private WordCollection wordCollection;

    private string randomWord = "";

    [SerializeField]
    private string wordPath;


    private int playerAmount = 0;
    private Color gold = new Color32(184, 139, 86, 255);

    private string nameOfPlayer = "None";

    public override void Attached()
    {
        
        state.Name = "Mimi";
        state.Points = 0;
        if (BoltNetwork.IsServer)
        {
            state.Rights = "host";
        }
        else
        {
            state.Rights = "player";
        }
        
        state.Type = "guesser";

        state.AddCallback("Name", nameCallback);

        goalText.text = "Score "+ PlayerPrefs.GetInt("GameGoal") +" points to win the game";
    }

    public void nameCallback()
    {
        nameOfPlayer = state.Name;
        PlayerPrefs.SetString("NewPlayerName", nameOfPlayer);
    }

    public override void SimulateOwner()
    {
        var playerNameStatic = PlayerPrefs.GetString("PlayerName");
        state.Name = playerNameStatic;
        GameScene.gameObject.SetActive(true);
        NameScene.gameObject.SetActive(false);

        scoreText.text = state.Points.ToString();


        if (state.Rights == "host")
        {
            hostLeaveButtton.gameObject.SetActive(true);
            playerLeaveButtton.gameObject.SetActive(false);
        }
        else if (state.Rights == "player")
        {
            hostLeaveButtton.gameObject.SetActive(false);
            playerLeaveButtton.gameObject.SetActive(true);
        }

        if (state.Type == "drawer")
        {
            drawerBottomField.gameObject.SetActive(true);
            //wordSpace.text = "Draw a " + randomWord;
            drawerInfo.text = "It is your turn!";
            pointer.gameObject.SetActive(true);
        }
        else
        {
            guesserBottomField.gameObject.SetActive(true);
            drawerInfo.text = "It is " + state.Name + "'s turn to draw!";
        }

        if (playerAmount == 1)
        {
            playerAmountText.text = "There is " + playerAmount + " player in the game";
        }
        else
        {
            playerAmountText.text = "There are " + playerAmount + " players in the game";
        }



        if (string.IsNullOrEmpty(guess.text))
        {
            Debug.Log("Please fill in something");
        }
        else
        {
            if (guess.text == state.Guess)
            {
                randomWord = loadRandomWord();
                //Guesser +50 Points
            }
            else
            {
                //Change Drawer
            }
        }


    }

    [ContextMenu("Load Words")]
    private string loadRandomWord()
    {
        using (StreamReader stream = new StreamReader(wordPath))
        {
            string json = stream.ReadToEnd();
            wordCollection = JsonUtility.FromJson<WordCollection>(json);
        }

        System.Random random = new System.Random();
        var randomNumber = random.Next(wordCollection.words.Length);


        return wordCollection.words[randomNumber].word;
    }
}

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

    public GameObject participantList;
    public Text participant;

    public Text drawerInfo;
    public Text playerAmountText;
    public Text scoreText;

    public GameObject pointer;

    private WordCollection wordCollection;

    [SerializeField]
    private string wordPath;
    private int playerAmount = 0;
    private Color gold = new Color32(184, 139, 86, 255);

    public override void Attached()
    {
        state.Name = "Mimi";
        state.Points = 0;
        state.Rights = "host";
        state.Type = "guesser";
    }

    void Start()
    {
        //var players = new List<Player>();

        //Player player = new Player("Lennon", 0, "host", "guesser");
        //Player player2 = new Player("Guest", 200, "player", "drawer");
        //players.Add(player);
        //players.Add(player2);

        //var activePlayer = player;

        //for (int i = 0; i < players.Count; i++)
        //{
        //    Text participantClone = BoltNetwork.Instantiate(BoltPrefabs.);
        //    participantClone.transform.parent = participantList.transform;
        //    participantClone.transform.localPosition = new Vector3(0, 0, 0);
        //    participantClone.gameObject.SetActive(true);
        //    participantClone.text = players[i].name + ": " + players[i].score;

        //    playerAmount = players.Count;

        //    if (players[i].rights == "host")
        //    {
        //        participantClone.color = gold;
        //        participantClone.fontSize = 40;
        //    }
        //}
        
        scoreText.text = state.Points.ToString();
        var randomWord = loadRandomWord();
        Debug.Log(randomWord);

        if (state.Rights == "host")
        {
            hostLeaveButtton.gameObject.SetActive(true);
        }
        else if (state.Rights == "player")
        {

            playerLeaveButtton.gameObject.SetActive(true);
        }

        if (state.Type == "drawer")
        {
            drawerBottomField.gameObject.SetActive(true);
            wordSpace.text = "Draw a " + randomWord;
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

       
    }

     
   

    [ContextMenu("Load Questions")]
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

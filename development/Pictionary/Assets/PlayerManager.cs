using System;
using System.Collections.Generic;
using System.IO; 
using UnityEngine;
using UnityEngine.UI;

public class PlayerManager : MonoBehaviour
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

    private WordCollection wordCollection;

    [SerializeField]
    private string wordPath;
    private int playerAmount = 0;

    void Start()
    {
        var players = new List<Player>();

        Player player = new Player("Lennon", 0, "host", "guesser");
        Player player2 = new Player("Guest", 200, "player", "drawer");
        players.Add(player);
        players.Add(player2);

        var activePlayer = player2;

        for (int i = 0; i < players.Count; i++)
        {
            Text participantClone = Instantiate(participant);
            participantClone.transform.parent = participantList.transform;
            participantClone.transform.localPosition = new Vector3(0, 0, 0);
            participantClone.gameObject.SetActive(true);
            participantClone.text = players[i].name + ": " + players[i].score;

            playerAmount = players.Count;
        }

        scoreText.text = activePlayer.score.ToString();
        var randomWord = loadRandomWord();

        if (activePlayer.rights == "host")
        {
            hostLeaveButtton.gameObject.SetActive(true);
        }
        else if (activePlayer.rights == "player")
        {

            playerLeaveButtton.gameObject.SetActive(true);
        }

        if (activePlayer.type == "drawer")
        {
            drawerBottomField.gameObject.SetActive(true);
            wordSpace.text = "Draw a " + randomWord;
            drawerInfo.text = "It is your turn!";
        }
        else
        {
            guesserBottomField.gameObject.SetActive(true);
            drawerInfo.text = "It is " + activePlayer.name + "'s turn to draw!";
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

using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerManager : MonoBehaviour
{
    public GameObject drawerBottomField;
    public GameObject guesserBottomField;

    public GameObject hostLeaveButtton;
    public GameObject playerLeaveButtton;

    public GameObject participantList;
    public Text participant;

    public Text drawerInfo;
    public Text playerAmountText;
    public Text scoreText;

    private int playerAmount = 0;

    void Start()
    {
        var players = new List<Player>();

        Player player = new Player("Lennon", 0, "host", "guesser");
        Player player2 = new Player("Guest", 200, "player", "drawer");
        players.Add(player);
        players.Add(player2);

        var activePlayer = player;

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

        /*
        if(guessRight){
            player.score+=50;
        }
         */
    }
}

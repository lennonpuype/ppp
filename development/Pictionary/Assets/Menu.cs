using System;
using UnityEngine.SceneManagement;
using UdpKit;
using UnityEngine;
using UnityEngine.UI;

using Bolt.Matchmaking;
using System.Collections.Generic;

public class Menu : Bolt.GlobalEventListener
{
    public Button joinGameButtonPrefab;
    public GameObject createbtns;
    public Text matchNameField;
    public Text errormessage;
    public GameObject errorMessageObject;
    public Text gameName;
    public GameObject loading;
    public GameObject serverList;

    private List<Button> joinServerButtons = new List<Button>();

    private string lobbyName = "";

    public void StartServer()
    {
        PlayerPrefs.SetString("PlayerName", matchNameField.text);

        lobbyName = PlayerPrefs.GetString("PlayerName");

        BoltLauncher.StartServer();
    }

    public void checkForStartServer()
    {
        Debug.Log(matchNameField.text);
        if (!string.IsNullOrEmpty(matchNameField.text))
        {
            Debug.Log("Validation Okay!");
            StartServer();
        }
        else
        {
            Debug.Log("Please enter your name!");
            errorMessageObject.gameObject.SetActive(true);
            errormessage.text = "Please enter your name!";
        }
    }

    public void StartClient()
    {
        BoltLauncher.StartClient();

        Scene currentScene = SceneManager.GetActiveScene();

        if (currentScene.name == "GameScene")
        {
            loading.gameObject.SetActive(false);
        }
    }

    public override void BoltStartDone()
    {
        if (BoltNetwork.IsServer)
        {   
            Debug.Log(lobbyName);
            BoltNetwork.SetServerInfo(lobbyName, null);
            BoltNetwork.LoadScene("GameScene");
        }
    }

    // called when a room is created or destroyed, also every few seconds
    public override void SessionListUpdated(Map<Guid, UdpSession> sessionList)
    {
        ClearSessions();
        foreach (var session in sessionList)
        {
            UdpSession photonSession = session.Value as UdpSession;

            gameName.text = photonSession.HostName;
            Button joinGameButtonClone = Instantiate(joinGameButtonPrefab);
            joinGameButtonClone.transform.parent = createbtns.transform;
            joinGameButtonClone.transform.localPosition = new Vector3(0, 0, 0);
            joinGameButtonClone.gameObject.SetActive(true);

            

            joinGameButtonClone.onClick.AddListener(() => JoinGame(photonSession));

            joinServerButtons.Add(joinGameButtonClone);
           
        }
    }

    private void JoinGame(UdpSession photonSession)
    {
        BoltNetwork.Connect(photonSession);
    }

    private void ClearSessions()
    {
        print("Clearsessions called");
        foreach(Button button in joinServerButtons)
        {
            Destroy(button.gameObject);
        }

        joinServerButtons.Clear();
    }

    public void shutdownBolt()
    {
        BoltLauncher.Shutdown();
    }

    //HOST
    public void openCreator()
    {
        SceneManager.LoadScene("CreatorScene");
    }

    public void openHostName()
    {
        SceneManager.LoadScene("HostNameScene");
    }

    //JOIN
    public void openPlayerName()
    {
        SceneManager.LoadScene("PlayerNameScene");
    }

   

    public void openFinder()
    {
        SceneManager.LoadScene("FindGameScene");
    }

    public void openMenu()
    {
        SceneManager.LoadScene("StartScene");
        shutdownBolt();
    }
}
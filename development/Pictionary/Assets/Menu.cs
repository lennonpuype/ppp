
using System.Collections;
using System;
using UnityEngine.SceneManagement;
using UdpKit;
using UnityEngine;
using UnityEngine.SceneManagement;

[BoltGlobalBehaviour]
public class Menu : Bolt.GlobalEventListener
{
    public void StartServer()
    {
        BoltLauncher.StartServer();
    }

    public void StartClient()
    {
        BoltLauncher.StartClient();
    }

    public override void BoltStartDone()
    {
        if (BoltNetwork.IsServer)
        {
            string matchName = "Test Match";

            BoltNetwork.SetServerInfo(matchName, null);
            BoltNetwork.LoadScene("GameScene");
        }
    }

    public void openCreator()
    {
        SceneManager.LoadScene("CreatorScene");
    }

    public void openHostName()
    {
        SceneManager.LoadScene("HostNameScene");
    }

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
    }

    public override void SessionListUpdated(Map<Guid, UdpSession> sessionList)
    {
        foreach(var session in sessionList)
        {
            UdpSession photonSession = session.Value as UdpSession;

            if (photonSession.Source == UdpSessionSource.Photon)
            {
                BoltNetwork.Connect(photonSession);
            }
        }
    }

}
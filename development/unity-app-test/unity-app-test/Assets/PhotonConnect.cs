using System.Collections;
using System.Collections.Generic;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

public class PhotonConnect : MonoBehaviour
{
    public GameObject sectionView1, sectionView2, sectionView3;

    public static void connectToPhoton()
    {
        PhotonNetwork.ConnectUsingSettings(true);
        Debug.Log("Connecting to photon...");
    }

    private static void OnConnectedToMaster()
    {
        PhotonNetwork.JoinLobby(TypedLobby.Default);
        Debug.Log("We are connected to master");
    }

    private void OnJoinedLobby()
    {
        sectionView1.SetActive(false);
        sectionView2.SetActive(true);
        Debug.Log("On Joined Lobby");
    }

    private void OnDisconnectedFromPhoton()
    {
        if (sectionView1.active)
        {
            sectionView1.SetActive(false);
        }

        if (sectionView2.active)
        {
            sectionView2.SetActive(false);
        }

        sectionView3.SetActive(true);

        Debug.Log("On Joined Lobby");
    }

    private void onFailedToConnectToPhoton()
    {
        Debug.Log("Disconnect from photon services");
    }

}

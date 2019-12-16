using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.SceneManagement;

public class RoomListingMenu : MonoBehaviourPunCallbacks
{
    public GameObject gameButtonList;
    public Button gameButton;
    public Text gameText;
    public Text roomsAvailable;


    public override void OnRoomListUpdate(List<RoomInfo> roomList)
    {
        foreach (RoomInfo room in roomList)
        {
            
            if (!room.RemovedFromList)
            {
                gameText.text = room.Name;

                Button joinGameButtonClone = Instantiate(gameButton) as Button;
               
                joinGameButtonClone.transform.parent = gameButtonList.transform;
                joinGameButtonClone.transform.localPosition = new Vector3(0, 0, 0);
                joinGameButtonClone.gameObject.SetActive(true);

                joinGameButtonClone.onClick.AddListener(() => PhotonNetwork.JoinRoom(room.Name));
            }
            else
            {
                Debug.Log("Room deleted");

                ExitGames.Client.Photon.Hashtable resetJoinList = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.RESET_JOIN_LIST, true } };
                PhotonNetwork.LocalPlayer.SetCustomProperties(resetJoinList);

                SceneManager.LoadSceneAsync("LobbyScene");
                
            }
        }

        if (roomList.Count == 0)
        {
            roomsAvailable.gameObject.SetActive(true);
            roomsAvailable.text = "There are no available rooms to show yet";
        }
        else
        {
            roomsAvailable.gameObject.SetActive(false);
        }
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        ExitGames.Client.Photon.Hashtable isDisconnected = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.DISCONNECTED, "true" } };
        PhotonNetwork.LocalPlayer.SetCustomProperties(isDisconnected);
        SceneLoader.Instance.LoadScene("LobbyScene");
    }
}
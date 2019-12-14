using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;

public class RoomListingMenu : MonoBehaviourPunCallbacks
{
    public GameObject gameButtonList;
    public Button gameButton;
    public Text gameText;
    public InputField friendInput;
    public GameObject friendButtonList;

    private void Update()
    {
        
        var friendName = friendInput.text;

        if (!string.IsNullOrEmpty(friendName))
        {
            
            gameButtonList.SetActive(false);
            friendButtonList.SetActive(true);
            var roomList = PhotonNetwork.GetCustomRoomList(null, PhotonNetwork.CurrentRoom.Players[Random.Range(0, PhotonNetwork.CurrentRoom.PlayerCount)].NickName);
            Debug.Log(roomList);
        }
        else
        {
            gameButtonList.SetActive(true);
            friendButtonList.SetActive(false);
        }
    }
    

    public override void OnRoomListUpdate(List<RoomInfo> roomList)
    {

        foreach (RoomInfo room in roomList)
        {
            if (!room.RemovedFromList)
            {
                gameText.text = room.Name;

                Button joinGameButtonClone = Instantiate(gameButton);
                joinGameButtonClone.transform.parent = gameButtonList.transform;
                joinGameButtonClone.transform.localPosition = new Vector3(0, 0, 0);
                joinGameButtonClone.gameObject.SetActive(true);

                joinGameButtonClone.onClick.AddListener(() => PhotonNetwork.JoinRoom(room.Name));
            }
            else
            {
                Debug.Log("Room deleted");
            }
        }

        if (roomList.Count == 0)
        {
            Debug.Log("There are no rooms available");
        }
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        ExitGames.Client.Photon.Hashtable isDisconnected = new ExitGames.Client.Photon.Hashtable { { MultiPlayerGame.DISCONNECTED, "true" } };
        PhotonNetwork.LocalPlayer.SetCustomProperties(isDisconnected);
        SceneLoader.Instance.LoadScene("LobbyScene");
    }
}

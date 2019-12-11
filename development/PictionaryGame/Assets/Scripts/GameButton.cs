using UnityEngine;
using UnityEngine.UI;
using Photon.Realtime;
using Photon.Pun;

public class GameButton : MonoBehaviour
{

    [SerializeField]
    private Text text;

    public RoomInfo RoomInfo { get; private set; }

    public void SetRoomInfo(RoomInfo roomInfo)
    {
        RoomInfo = roomInfo;
        text.text = roomInfo.MaxPlayers + ", " + roomInfo.Name;
    }
    
    public void OnClickButton()
    {
        PhotonNetwork.JoinRoom(RoomInfo.Name);
    }
}

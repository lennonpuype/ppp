using System.Collections;
using UnityEngine;
using System;
using UnityEngine.UI;

public class checkIfConnectedToNetwork : MonoBehaviour
{
    public Text connectionStatus;
    public GameObject nextBtn;
    public GameObject notConnectedImg;

    void Update()
    {
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            nextBtn.SetActive(false);
            notConnectedImg.SetActive(true);
            connectionStatus.gameObject.SetActive(true);
            connectionStatus.text = "Check your internet connection";
            connectionStatus.color = new Color(248f / 255f, 78f / 255f, 29f / 255f);
        }
        else
        {
            nextBtn.SetActive(true);
            notConnectedImg.SetActive(false);
            connectionStatus.gameObject.SetActive(false);
            connectionStatus.text = "Connected to internet";
            connectionStatus.color = new Color(115f / 255f, 204f / 255f, 115f / 255f);
        }
    }
}

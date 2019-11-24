using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Net;
using System.Net.Sockets;

public class NameTransfer : MonoBehaviour
{
	public string theName;
	public GameObject inputField;
	public GameObject textDisplay;

    public void StoreName()
	{
		theName = inputField.GetComponent<Text>().text;
		textDisplay.GetComponent<Text>().text = "Welcome " + theName + " to the game";


        
        Console.WriteLine(Dns.GetHostEntry("localhost").AddressList[0]);
        //try
        //{
        //    //Socket Listener
        //    IPAddress ip = Dns.GetHostEntry("localhost").AddressList[0];
        //    TcpListener server = new TcpListener(ip, 8080);
        //    TcpClient client = default(TcpClient);

        //    server.Start();
        //    Console.WriteLine("Server Started");
        //    Console.Read();
        //}
        //catch (Exception e)
        //{
        //    Console.WriteLine(e.ToString());
        //    Console.Read();
        //}

    }
}

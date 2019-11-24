using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.Networking.Match;

public class MyLobby : NetworkLobbyManager
{
    //public GameObject MatchId;
    //public GameObject MatchText;
    // Start is called before the first frame update
    void Start()
    {
        MMStart();
        //MMListMatches();
    }

    void MMStart()
    {
        Debug.Log("@ MMStart");

        this.StartMatchMaker();
        MMCreateMatch();
    }

    void MMCreateMatch()
    {
        Debug.Log("@ MMCreateMatch");
        this.matchMaker.CreateMatch("MM", 15, true, "", "", "", 0, 0, OnMatchCreate);
    }

    public override void OnMatchCreate(bool success, string extendedInfo, MatchInfo matchInfo)
    {
        Debug.Log("@ OnMatchCreate");
        base.OnMatchCreate(success, extendedInfo, matchInfo);

        if (!success)
        {
            Debug.Log("Failed to create match: " + extendedInfo);
        }
        else
        {
            Debug.Log("Successfully created match: " + matchInfo.networkId);
            //this.matchMaker.ListMatches(0, 1, "", true, 0, 0, OnMatchList);
            this.SetMatchHost(matchInfo.networkId.ToString(), 7777, true);
        }
    }

    //public override void OnMatchList(bool success, string extendedInfo, List<MatchInfoSnapshot> matchList)
    //{
    //    base.OnMatchList(success, extendedInfo, matchList);
        
    //    for(int i = 0; i < matchList.Count; i++)
    //    {
    //        //MatchId.GetComponent<Text>().text = "Welcome " + theName + " to the game";
    //        Debug.Log(matchList[i].networkId);
    //    }
    //}

    //void MMListMatches()
    //{
    //    Debug.Log("@ MMListMatches");

    //    this.matchMaker.ListMatches(0, 20, "", true, 0, 0, OnMatchList);
    //}

    //public override void OnMatchList(bool success, string extendedInfo, List<MatchInfoSnapshot> matchList)
    //{
    //    Debug.Log("@ OnMatchList");
    //    base.OnMatchList(success, extendedInfo, matchList);

    //    if (!success)
    //    {
    //        Debug.Log("List falsed: " + extendedInfo);
    //    }
    //    else
    //    {


    //        //int index = 0;

    //        //while (index < matchList.Count)
    //        //{
    //        //    try
    //        //    {
    //        //        index++;
    //        //        Debug.Log("Successfully listed matches match " + index + ": " + matchList[index]);
    //        //    }
    //        //    catch
    //        //    {
    //        //        Debug.Log("Woops");
    //        //    }

    //        //}


    //        try
    //        {
    //            for (int index = 0; index < matchList.Count; index++)
    //            {
    //                Debug.Log("Successfully listed matches match " + index + ": " + matchList[index]);

    //            }
    //        }
    //        catch
    //        {
    //            Debug.Log("Out of range");
    //        }


    //    }
    //}

    //void MMJoinmatch(MatchInfoSnapshot match)
    //{
    //    Debug.Log("@ MMJoinmatch" + match);
    //    this.matchMaker.JoinMatch(match.networkId, NetworkAnimator., "", "", 0, 0, OnMatchJoined);

    //}

    //public override void OnMatchJoined(bool success, string extendedInfo, MatchInfo matchInfo)
    //{
    //    Debug.Log("@ OnMatchJoined");

    //    base.OnMatchJoined(success, extendedInfo, matchInfo);

    //    if (!success)
    //    {
    //        Debug.Log("Failed to join match: " + extendedInfo);
    //    }
    //    else
    //    {
    //        //Success
    //        Debug.Log("Successfully joined match: " + matchInfo.networkId);
    //    }
    //}


}

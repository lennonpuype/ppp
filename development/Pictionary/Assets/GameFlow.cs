using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class GameFlow : Bolt.EntityBehaviour<ICustomGameState>
{
    

    public override void Attached()
    {
        state.Goal = PlayerPrefs.GetInt("Goal");
        state.Difficulty = PlayerPrefs.GetString("Difficulty");

        PlayerPrefs.SetInt("GameGoal", state.Goal);
        PlayerPrefs.SetString("GameDifficulty", state.Difficulty);
    }

    public override void SimulateOwner()
    {
        var newPlayer = PlayerPrefs.GetString("NewPlayerName");
    }

    
}

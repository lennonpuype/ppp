using System;
using UnityEngine;
using UnityEngine.UI;

public class PlayerScore : Bolt.EntityBehaviour<ICustomPlayerState>
{
	public Text playerScore;
    public Transform score;

	//Nodig om te communiceren tussen data uit SimulateOwner Method en de State data
	public override void Attached()
	{
		state.SetTransforms(state.PlayerScore, score);
        //Hier zeggen we dat we de transform willen gebruiken van de state
		//1. Toegang krijgen tot state uit assets
		//2. Toegang krijgen tot transform van de gameobject (uit SimulateOwner die is geupdatet)
	}

	//Update
	public override void SimulateOwner()
	{
        Debug.Log("test");
        var newScore = Convert.ToDouble(score);

        if (Input.GetKey(KeyCode.Q))
        {
            newScore++;
            Debug.Log(newScore);
        }
    }
}

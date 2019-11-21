using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneSwitch : MonoBehaviour
{
	public void SwitchToStartScene()
	{
		SceneManager.LoadScene(0);
	}

	public void SwitchToGameScene()
	{
		SceneManager.LoadScene(1);
	}

	public void SwitchToJoinScene()
	{
		SceneManager.LoadScene(2);
	}
}

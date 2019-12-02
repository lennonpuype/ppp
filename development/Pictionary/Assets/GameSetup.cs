using UnityEngine;
using UnityEngine.UI;

public class GameSetup : MonoBehaviour
{
    public Button easy;
    public Button normal;
    public Button hard;

    public Sprite easyActive;
    public Sprite easyInactive;
    public Sprite normalActive;
    public Sprite normalInactive;
    public Sprite hardActive;
    public Sprite hardInactive;

    void Start()
    {
        PlayerPrefs.SetInt("Goal", 400);
    }
    public void selectEasy()
	{
		PlayerPrefs.SetInt("Goal", 400);
        PlayerPrefs.SetString("Difficulty", "Easy");
        easy.GetComponent<Image>().sprite = easyActive;
        normal.GetComponent<Image>().sprite = normalInactive;
        hard.GetComponent<Image>().sprite = hardInactive;
    }

    public void selectNormal()
    {
        PlayerPrefs.SetInt("Goal", 650);
        PlayerPrefs.SetString("Difficulty", "Normal");
        easy.GetComponent<Image>().sprite = easyInactive;
        normal.GetComponent<Image>().sprite = normalActive;
        hard.GetComponent<Image>().sprite = hardInactive;
    }

    public void selectHard()
	{
		PlayerPrefs.SetInt("Goal", 1200);
        PlayerPrefs.SetString("Difficulty", "Hard");
        easy.GetComponent<Image>().sprite = easyInactive;
        normal.GetComponent<Image>().sprite = normalInactive;
        hard.GetComponent<Image>().sprite = hardActive;
    }
}

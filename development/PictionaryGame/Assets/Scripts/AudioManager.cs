using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    public AudioSource buttonAudioSource;
    public AudioClip buttonAudioClip;

    public AudioSource emptyFieldAudioSource;
    public AudioClip emptyFieldAudioClip;

    public AudioSource goodAudioSource;
    public AudioClip goodAudioClip;

    public AudioSource wrongAudioSource;
    public AudioClip wrongAudioClip;

    public AudioSource loseAudioSource;
    public AudioClip loseAudioClip;

    public AudioSource winAudioSource;
    public AudioClip winAudioClip;

    public void playButtonClick()
    {
        Debug.Log("Button Audio");
        buttonAudioSource.clip = buttonAudioClip;
        buttonAudioSource.Play();
    }

    public void playEmptyFieldSound()
    {
        Debug.Log("Empty Audio");
        emptyFieldAudioSource.clip = emptyFieldAudioClip;
        emptyFieldAudioSource.Play();
    }

    public void playGoodSound()
    {
        Debug.Log("Good Audio");
        goodAudioSource.clip = goodAudioClip;
        goodAudioSource.Play();
    }

    public void playWrongSound()
    {
        Debug.Log("Wrong Audio");
        wrongAudioSource.clip = wrongAudioClip;
        wrongAudioSource.Play();
    }

    public void playLoseSound()
    {
        Debug.Log("Lose Audio");
        loseAudioSource.clip = loseAudioClip;
        loseAudioSource.Play();
    }

    public void playWinSound()
    {
        Debug.Log("Play Audio");
        winAudioSource.clip = winAudioClip;
        winAudioSource.Play();
    }
}

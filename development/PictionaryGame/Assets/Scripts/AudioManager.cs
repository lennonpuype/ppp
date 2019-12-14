using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    public AudioSource buttonAudioSource;
    public AudioClip buttonAudioClip;

    public void playButtonClick()
    {
        buttonAudioSource.clip = buttonAudioClip;
        buttonAudioSource.Play();
    }
}

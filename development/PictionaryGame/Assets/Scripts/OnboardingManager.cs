using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OnboardingManager : MonoBehaviour
{
    public GameObject ui_Onboarding;
    public GameObject Onboarding1;
    public GameObject Onboarding2;
    public GameObject Onboarding3;
    public GameObject Onboarding4;
    public GameObject ui_Login;

    public void completeOnboarding()
    {
        PlayerPrefs.SetInt("FirstTimePlaying", 1);
        PlayerPrefs.Save();

        ui_Onboarding.SetActive(false);
        ui_Login.SetActive(true);
    }

    public void goToOnboarding1()
    {
        Onboarding1.SetActive(true);
        Onboarding2.SetActive(false);
        Onboarding3.SetActive(false);
        Onboarding4.SetActive(false);
    }

    public void goToOnboarding2()
    {
        Onboarding1.SetActive(false);
        Onboarding2.SetActive(true);
        Onboarding3.SetActive(false);
        Onboarding4.SetActive(false);
    }

    public void goToOnboarding3()
    {
        Onboarding1.SetActive(false);
        Onboarding2.SetActive(false);
        Onboarding3.SetActive(true);
        Onboarding4.SetActive(false);
    }

    public void goToOnboarding4()
    {
        Onboarding1.SetActive(false);
        Onboarding2.SetActive(false);
        Onboarding3.SetActive(false);
        Onboarding4.SetActive(true);
    }
}

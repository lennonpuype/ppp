using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class ToggleAR : MonoBehaviour
{
    public ARPlaneManager planeManager;
    public ARPointCloudManager pointCloudManager;


    public void OnValueChanged(bool isOn)
    {
        VisualizePlanes(isOn);
        VisualizePoints(isOn);
    }

    void VisualizePlanes(bool active)
    {
        planeManager.enabled = active;
        foreach (ARPlane plane in planeManager.trackables)
        {
            plane.gameObject.SetActive(false);
        }
    }

    void VisualizePoints(bool active)
    {
        planeManager.enabled = active;
        foreach (ARPointCloud point in pointCloudManager.trackables)
        {
            point.gameObject.SetActive(active);
        }
    }
}

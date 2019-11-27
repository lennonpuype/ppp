using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.Experimental.XR;
using System;

public class ARTapToPlaceObject : Bolt.EntityBehaviour<ICustomCubeState>
{
    public GameObject objectToPlace;
    public GameObject placementIndicator;

    private ARSessionOrigin arOrigin;
    private Pose placementPose;
    private bool placementPoseIsValid = false;

    private Vector3 cubePosition = Vector3.zero;

    public override void Attached()
    {
        state.SetTransforms(state.CubeTransform, gameObject.transform);

    }

    public override void SimulateOwner()
    {

    }

    void Start()
    {
        arOrigin = FindObjectOfType<ARSessionOrigin>();
    }

    private void Update()
    {
        UpdatePlacementPose();
        UpdatePlacementIndicator();

        //PlaceObject
        if (placementPoseIsValid && Input.touchCount > 0)
        {
            PlaceObject();  
        }
    }

    private void PlaceObject()
    {
        Debug.Log("Placed Object");
        Instantiate(objectToPlace, placementPose.position, placementPose.rotation);
        Debug.Log(placementPose.position);
        cubePosition = placementPose.position;
    }

    private void UpdatePlacementIndicator()
    {
        if (placementPoseIsValid)
        {
            placementIndicator.SetActive(true);
            placementIndicator.transform.SetPositionAndRotation(placementPose.position, placementPose.rotation);
        }
        else
        {
            placementIndicator.SetActive(false);
        }
    }

    private void UpdatePlacementPose()
    {
        var screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
        var hits = new List<ARRaycastHit>();

        arOrigin.Raycast(screenCenter, hits, TrackableType.Planes);

        placementPoseIsValid = hits.Count > 0;
        if (placementPoseIsValid)
        {
            placementPose = hits[0].pose;

            var cameraForward = Camera.current.transform.forward;
            var cameraBearing = new Vector3(cameraForward.x, 0, cameraForward.z).normalized;
            placementPose.rotation = Quaternion.LookRotation(cameraBearing);
        }
    }

   
}

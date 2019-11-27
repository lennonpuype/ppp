using UnityEngine;

public class ObjectToBolt : Bolt.EntityBehaviour<ICustomCubeState>
{
	//Nodig om te communiceren tussen data uit SimulateOwner Method en de State data
	public override void Attached()
	{
		state.SetTransforms(state.CubeTransform, gameObject.transform);
	}

	//Update
	public override void SimulateOwner()
	{
        ARTapToPlaceObject ARObject = new ARTapToPlaceObject();
        var cubePosition = ARObject.cubePosition;

        Debug.Log(cubePosition);
    }
}

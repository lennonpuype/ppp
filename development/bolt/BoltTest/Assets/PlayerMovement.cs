using UnityEngine;

public class PlayerMovement : Bolt.EntityBehaviour<ICustomCubeState>
{
    public override void Attached()
    {
        state.SetTransforms(state.CubeTransform, gameObject.transform);
    }

    public override void SimulateOwner()
    {
        var speed = 4f;
        var movement = Vector3.zero;

        if (Input.GetKey(KeyCode.Q))
        {
            movement.x -= 1f;
        }

        if (Input.GetKey(KeyCode.D))
        {
            movement.x += 1f;
        }

        if (Input.GetKey(KeyCode.Z))
        {
            movement.z += 1f;
        }

        if (Input.GetKey(KeyCode.S))
        {
            movement.z -= 1f;
        }

        if(movement != Vector3.zero)
        {
            transform.position = transform.position + (movement.normalized * speed * BoltNetwork.FrameDeltaTime);
        }
    }
}

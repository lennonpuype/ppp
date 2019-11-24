using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class RandomizePosition : NetworkBehaviour
{
    [SerializeField]
    private Transform _child;

    public override void OnStartLocalPlayer()
    {
        base.OnStartLocalPlayer();
        StartCoroutine(__randomizePosition());
    }

    private IEnumerator __randomizePosition()
    {
        WaitForSeconds wait = new WaitForSeconds(1f);
        Vector3 startPosition = transform.position;

        while (true)
        {
            transform.position = startPosition + returnRandom();
            _child.localPosition = returnRandom();
            yield return wait;
        }
    }

    private Vector3 returnRandom()
    {
        return new Vector3(
            Random.Range(-4f, 4f),
            Random.Range(-4f, 4f),
            0f);
    }
}

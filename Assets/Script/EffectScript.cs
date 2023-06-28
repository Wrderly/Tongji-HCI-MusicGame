using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EffectScript : MonoBehaviour
{
    private void OnEnable()
    {
        Destroy(gameObject, 0.333f);
    }
}

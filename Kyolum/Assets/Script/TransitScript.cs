using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TransitScript : MonoBehaviour
{
    public float nowTime = 0.0f;
    public float maxTime = 1.0f;
    public float speed;
    public bool needDestroy = true;

    private void Start()
    {
        //原代码
        //speed = 1920.0f;
        //新代码
        //speed = Screen.currentResolution.width / (maxTime - nowTime);
        speed = 1.0f / (maxTime - nowTime);
    }

    void Update()
    {
        if (DataTransfer.transitAble)
        {
            //transform.Translate(speed * Time.deltaTime * 2 * nowTime / maxTime, 0, 0);
            //transform.Translate(speed * Time.deltaTime * 3 * (float)Math.Pow(nowTime / maxTime, 2), 0, 0);

            transform.Translate(speed * Time.deltaTime * 2 * nowTime / maxTime * Screen.width, 0, 0);
            nowTime += Time.deltaTime;

            if (nowTime >= maxTime && needDestroy)
            {
                Destroy(gameObject);
            }
        }
    }
}

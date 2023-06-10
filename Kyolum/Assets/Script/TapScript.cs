using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TapScript : MonoBehaviour
{
    bool add = true, remove = true;
    float myTime = -1;

    void Update()
    {
        myTime += DataTransfer.myDeltaTime;
        transform.Translate(0, 0, -15 * DataTransfer.myDeltaTime);
        if (add && myTime > -0.06f)
        {
            DataTransfer.tapJudgeList.Add(this);
            add = false;
        }
        else if (remove && myTime > 0.06f)
        {
            DataTransfer.tapJudgeList.Remove(this);
            remove = false;
            Miss();
        }
    }

    public bool JudgeFunction(float hitPosition)
    {
        float x = System.Math.Abs(transform.position.x - hitPosition);
        if (x < 1)
        {
            DataTransfer.tapJudgeList.Remove(this);
            DataTransfer.controller.JudgeNote(myTime);
            DataTransfer.controller.GenerateEffect(myTime, transform.position.x);
            Destroy(gameObject);
            return true;
        }
        return false;
    }

    void Miss()
    {
        DataTransfer.tapJudgeList.Remove(this);
        DataTransfer.controller.MissNote();
        Destroy(gameObject);
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DragScript : MonoBehaviour
{
    bool add = true, remove = true;
    float myTime = -1;

    void Update()
    {
        myTime += DataTransfer.myDeltaTime;
        transform.Translate(0, 0, -15 * DataTransfer.myDeltaTime);
        if (add && myTime > -0.03f)
        {
            DataTransfer.dragJudgeList.Add(this);
            add = false;
        }
        else if (remove && myTime > 0.03f)
        {
            DataTransfer.dragJudgeList.Remove(this);
            remove = false;
            Miss();
        }
    }

    public bool JudgeFunction(float hitPosition)
    {
        float x = System.Math.Abs(transform.position.x - hitPosition);
        if (x < 1)
        {
            DataTransfer.dragJudgeList.Remove(this);
            DataTransfer.controller.JudgeNote(myTime);
            DataTransfer.controller.GenerateEffect(myTime, transform.position.x);
            Destroy(gameObject);
            return true;
        }
        return false;
    }

    void Miss()
    {
        DataTransfer.dragJudgeList.Remove(this);
        DataTransfer.controller.MissNote();
        Destroy(gameObject);
    }
}

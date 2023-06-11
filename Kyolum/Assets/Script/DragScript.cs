using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//音符类型Drag
public class DragScript : MonoBehaviour
{
    bool addFlag = true, removeFlag = true;
    float nowTime = -1 / DataTransfer.speedScale;

    void Update()
    {
        nowTime += DataTransfer.myDeltaTime;
        transform.Translate(0, 0, -15 * DataTransfer.myDeltaTime * DataTransfer.speedScale);
        if (addFlag && nowTime > -0.08f)
        {
            DataTransfer.dragJudgeList.Add(this);//加入判定列表
            addFlag = false;
        }
        else if (removeFlag && nowTime > 0.08f)
        {
            DataTransfer.dragJudgeList.Remove(this);//移出判定列表
            removeFlag = false;
            Miss();
        }
    }

    public bool Judge(float hitPosition)
    {
        float x = System.Math.Abs(transform.position.x - hitPosition);
        if (x < 1)
        {
            DataTransfer.dragJudgeList.Remove(this);
            DataTransfer.controller.JudgeNote(nowTime);
            DataTransfer.controller.GenerateEffect(nowTime, transform.position.x);
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

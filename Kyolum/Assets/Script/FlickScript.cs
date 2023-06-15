using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//音符类型Flick
public class FlickScript : MonoBehaviour
{
    bool addFlag = true, removeFlag = true;
    float nowTime = -1 / DataTransfer.speedScale;

    void Update()
    {
        nowTime += DataTransfer.deltaTime;
        transform.Translate(0, 0, -15 * DataTransfer.deltaTime * DataTransfer.speedScale);
        if (addFlag && nowTime > -0.12f)
        {
            DataTransfer.flickJudgeList.Add(this);//加入判定列表
            addFlag = false;
        }
        else if (removeFlag && nowTime > 0.12f)
        {
            DataTransfer.flickJudgeList.Remove(this);//移出判定列表
            removeFlag = false;
            Miss();
        }
    }

    public bool Judge(float hitPosition)
    {
        float x = System.Math.Abs(transform.position.x - hitPosition);
        if (x < 1)
        {
            DataTransfer.flickJudgeList.Remove(this);
            DataTransfer.controller.GeneratePerfectEffect(transform.position.x);
            DataTransfer.controller.JudgeScore(nowTime, 2);
            Destroy(gameObject);
            return true;
        }
        return false;
    }

    void Miss()
    {
        DataTransfer.flickJudgeList.Remove(this);
        DataTransfer.controller.MissNote();
        Destroy(gameObject);
    }
}

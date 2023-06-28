using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//��������Tap
public class TapScript : MonoBehaviour
{
    bool addFlag = true, removeFlag = true;
    float nowTime = -1 / DataTransfer.speedScale;

    void Update()
    {
        nowTime += DataTransfer.deltaTime;
        transform.Translate(0, 0, -15 * DataTransfer.deltaTime * DataTransfer.speedScale);
        if (addFlag && nowTime > -0.12f)
        {
            DataTransfer.tapJudgeList.Add(this);//�����ж��б�
            addFlag = false;
        }
        else if (removeFlag && nowTime > 0.12f)
        {
            DataTransfer.tapJudgeList.Remove(this);//�Ƴ��ж��б�
            removeFlag = false;
            Miss();
        }
    }

    public bool Judge(float hitPosition)
    {
        float x = System.Math.Abs(transform.position.x - hitPosition);
        if (x < 1)
        {
            DataTransfer.tapJudgeList.Remove(this);
            DataTransfer.controller.GenerateEffect(nowTime, transform.position.x);
            DataTransfer.controller.JudgeScore(nowTime, 1);
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

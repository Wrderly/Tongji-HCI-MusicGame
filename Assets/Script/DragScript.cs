using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//��������Drag
public class DragScript : MonoBehaviour
{
    bool addFlag = true, removeFlag = true;
    float nowTime = -1 / DataTransfer.speedScale;

    void Update()
    {
        nowTime += DataTransfer.deltaTime;
        transform.Translate(0, 0, -15 * DataTransfer.deltaTime * DataTransfer.speedScale);
        if (addFlag && nowTime > -0.06f)
        {
            DataTransfer.dragJudgeList.Add(this);//�����ж��б�
            addFlag = false;
        }
        else if (removeFlag && nowTime > 0.06f)
        {
            DataTransfer.dragJudgeList.Remove(this);//�Ƴ��ж��б�
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
            DataTransfer.controller.GeneratePerfectEffect(transform.position.x);
            DataTransfer.controller.JudgeScore(nowTime, 3);
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
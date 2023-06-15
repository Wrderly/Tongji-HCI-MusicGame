using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//音符类型Hold
public class HoldScript : MonoBehaviour
{
    SpriteRenderer mySprite;

    bool addFlag = true, removeFlag = true, holdingFlag = false;
    float nowTime = -1 / DataTransfer.speedScale, holdTime, holdingTime = 0, hitTime;

    private void OnEnable()
    {
        mySprite = gameObject.GetComponentInChildren<SpriteRenderer>();
        holdTime = DataTransfer.holdTime;
        transform.localScale = new Vector3(1, 1, 7.5f * holdTime * DataTransfer.speedScale);
        transform.Translate(0, 0, 7.5f * holdTime);
    }

    void Update()
    {
        nowTime += DataTransfer.deltaTime;
        transform.Translate(0, 0, -15 * DataTransfer.deltaTime * DataTransfer.speedScale);
        if (addFlag && nowTime > -0.12f)
        {
            DataTransfer.holdHeadJudge.Add(this);//加入判定列表
            addFlag = false;
        }
        else if (removeFlag && nowTime > 0.12f)
        {
            DataTransfer.holdHeadJudge.Remove(this);//移出判定列表
            removeFlag = false;
            Miss();
        }
    }

    public bool HeadJudge(float hitPosition)
    {
        float x = System.Math.Abs(transform.position.x - hitPosition);
        if (x < 1)//按到
        {
            removeFlag = false;
            DataTransfer.holdHeadJudge.Remove(this);
            DataTransfer.holdingJudgeList.Add(this);
            holdingFlag = true;
            hitTime = nowTime;
            StartCoroutine("HoldingTimer");
            return true;
        }
        return false;
    }

    public bool HoldingJudge(float hitPosition)
    {
        float x = System.Math.Abs(transform.position.x - hitPosition);
        if(x < 1)
        {
            holdingFlag = true;
            return true;
        }
        return false;
    }

    IEnumerator HoldingTimer()
    {
        float effectCd = 0.31f;//长条的特效的cd
        while (holdingFlag)
        {
            holdingTime += DataTransfer.deltaTime;           
            if(effectCd > 0.3f)
            {
                DataTransfer.controller.GenerateHoldingEffect(hitTime, transform.position.x);
                effectCd -= 0.3f;
            }
            effectCd += Time.deltaTime;
            holdingFlag = false;
            transform.localScale = new Vector3(1, 1, 7.5f * (holdTime - holdingTime) * DataTransfer.speedScale);
            transform.Translate(0, 0, 7.5f * DataTransfer.deltaTime);
            if(holdingTime >= holdTime - 0.05f)
            {
                DataTransfer.holdingJudgeList.Remove(this);
                DataTransfer.controller.GenerateEffect(hitTime, transform.position.x);  
                DataTransfer.controller.JudgeScore(hitTime, 4);              
                Destroy(gameObject, holdTime);
                break;
            }
            yield return 0;
        }
        if(holdingTime < holdTime - 0.05f)
        {
            Miss();
        }
    }

    void Miss()
    {
        DataTransfer.holdHeadJudge.Remove(this);
        DataTransfer.holdingJudgeList.Remove(this);
        DataTransfer.controller.MissNote();
        mySprite.color = new Color(1, 1, 1, 0.3f);
        Destroy(gameObject, holdTime);
    }
}

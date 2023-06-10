using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HoldScript : MonoBehaviour
{
    SpriteRenderer mySprite;

    bool add = true, remove = true, holding = false;
    float myTime = -1, holdTime, holdingTime = 0, hitTime;

    private void OnEnable()
    {
        mySprite = gameObject.GetComponentInChildren<SpriteRenderer>();
        holdTime = DataTransfer.holdTime;
        transform.localScale = new Vector3(1, 1, 7.5f * holdTime);
        transform.Translate(0, 0, 7.5f * holdTime);
    }

    void Update()
    {
        myTime += DataTransfer.myDeltaTime;
        transform.Translate(0, 0, -15 * DataTransfer.myDeltaTime);
        if (add && myTime > -0.06f)
        {
            DataTransfer.holdHeadJudge.Add(this);
            add = false;
        }
        else if (remove && myTime > 0.06f)
        {
            DataTransfer.holdHeadJudge.Remove(this);
            remove = false;
            Miss();
        }
    }

    public bool HeadJudge(float hitPosition)
    {
        float x = System.Math.Abs(transform.position.x - hitPosition);
        if (x < 1)
        {
            remove = false;
            DataTransfer.holdHeadJudge.Remove(this);
            DataTransfer.holdingJudgeList.Add(this);
            holding = true;
            hitTime = myTime;
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
            holding = true;
            return true;
        }
        return false;
    }

    IEnumerator HoldingTimer()
    {
        float cd = 0.31f;
        while (holding)
        {
            holdingTime += DataTransfer.myDeltaTime;           
            if(cd > 0.3f)
            {
                DataTransfer.controller.GenerateHoldingEffect(hitTime, transform.position.x);
                cd -= 0.3f;
            }
            cd += Time.deltaTime;
            holding = false;
            transform.localScale = new Vector3(1, 1, 7.5f * (holdTime - holdingTime));
            transform.Translate(0, 0, 7.5f * DataTransfer.myDeltaTime);
            if(holdingTime > holdTime)
            {
                DataTransfer.holdingJudgeList.Remove(this);
                DataTransfer.controller.JudgeNote(hitTime);
                DataTransfer.controller.GenerateEffect(hitTime, transform.position.x);                
                Destroy(gameObject, holdTime);
                break;
            }
            yield return 0;
        }
        if(holdingTime < holdTime)
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

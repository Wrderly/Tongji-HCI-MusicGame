using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchScript : MonoBehaviour
{
    List<float> tap = new List<float>();
    List<float> flick = new List<float>();
    List<float> touch = new List<float>();
    List<float> lastTouch = new List<float>();

    List<GameObject> touchPositionLine = new List<GameObject>();
    public GameObject line;

    void Update()
    {
        ClearTouchData();
        GetTouchData();
        //MouseInputDebug();  //打包时一定要注释掉
        ShowTouchPosition();
        JudgeNote();
    }

    void ClearTouchData()
    {
        lastTouch.Clear();
        foreach (float a in lastTouch)
        {
            touch.Add(a);
        }
        touch.Clear();
        tap.Clear();
        flick.Clear();
    }

    void GetTouchData()
    {
        foreach (Touch finger in Input.touches)
        {
            Ray ray = Camera.main.ScreenPointToRay(finger.position);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                if (finger.phase == TouchPhase.Began)
                {
                    tap.Add(hit.point.x);
                }
                touch.Add(hit.point.x);
                if (!lastTouch.Contains(hit.point.x) && finger.phase == TouchPhase.Moved)
                {
                    flick.Add(hit.point.x);
                }
            }
        }
    }

    void MouseInputDebug()
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit))
        {
            if (Input.GetMouseButtonDown(0))
            {
                tap.Add(hit.point.x);
            }
            if (Input.GetMouseButton(0))
            {
                touch.Add(hit.point.x);
            }
            if (!lastTouch.Contains(hit.point.x) && Input.GetMouseButton(0))
            {
                flick.Add(hit.point.x);
            }
        }
    }

    void ShowTouchPosition()
    {
        for (int i = 0; i < touch.Count; i++)
        {
            if (i == touchPositionLine.Count)
            {
                GameObject obj = Instantiate(line, new Vector3(0, 0, 7), Quaternion.identity);
                touchPositionLine.Add(obj);
            }
            Vector3 transPosition = touchPositionLine[i].transform.position;
            transPosition.x = touch[i];
            touchPositionLine[i].transform.position = transPosition;
        }
        for (int i = touch.Count; i < touchPositionLine.Count;)
        {
            Destroy(touchPositionLine[i]);
            touchPositionLine.RemoveAt(i);
        }
    }

    void JudgeNote()
    {
        for (int i = 0; i < DataTransfer.tapJudgeList.Count; i++)
        {
            for (int n = 0; n < tap.Count; n++)
            {                
                if (DataTransfer.tapJudgeList[i].JudgeFunction(tap[n]))
                {
                    tap.RemoveAt(n);
                }
                
            }
        }
        for (int i = 0; i < DataTransfer.flickJudgeList.Count; i++)
        {
            for (int n = 0; n < flick.Count; n++)
            {
                if (DataTransfer.flickJudgeList[i].JudgeFunction(flick[n]))
                {
                    flick.RemoveAt(n);
                }

            }
        }
        for (int i = 0; i < DataTransfer.dragJudgeList.Count; i++)
        {
            for (int n = 0; n < touch.Count; n++)
            {
                if (DataTransfer.dragJudgeList[i].JudgeFunction(touch[n]))
                {
                    touch.RemoveAt(n);
                }

            }
        }
        for (int i = 0; i < DataTransfer.holdHeadJudge.Count; i++)
        {
            for (int n = 0; n < tap.Count; n++)
            {
                if (DataTransfer.holdHeadJudge[i].HeadJudge(tap[n]))
                {
                    tap.RemoveAt(n);
                }               
                
            }
        }
        for (int i = 0; i < DataTransfer.holdingJudgeList.Count; i++)
        {
            for (int n = 0; n < touch.Count; n++)
            {
                if (DataTransfer.holdingJudgeList[i].HoldingJudge(touch[n]))
                {
                    touch.RemoveAt(n);
                }
            }
        }
    }
}

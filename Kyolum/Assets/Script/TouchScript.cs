using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchScript : MonoBehaviour
{
    List<float> tap = new List<float>();//这两个记录不同类型的触屏
    List<float> flick = new List<float>();
    List<float> touch = new List<float>();//记录触屏
    List<float> lastTouch = new List<float>();//记录上一次触屏

    List<GameObject> touchLine = new List<GameObject>();
    public GameObject line;

    void Update()
    {
        ClearTouchData();
        GetTouchData();
        MouseInputDebug();
        ShowTouchPosition();
        JudgeNote();
    }

    void ClearTouchData()
    {
        lastTouch.Clear();//清空旧数据
        foreach (float a in touch)
        {
            lastTouch.Add(a);//保存上一次点击数据
        }
        touch.Clear();//清空旧数据
        tap.Clear();//清空旧数据
        flick.Clear();//清空旧数据
    }

    //获取触摸数据
    void GetTouchData()
    {
        foreach (Touch finger in Input.touches)
        {
            Ray ray = Camera.main.ScreenPointToRay(finger.position);//发射射线进行检测
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))//碰撞
            {
                if (finger.phase == TouchPhase.Began)
                {
                    tap.Add(hit.point.x);//点击
                }
                touch.Add(hit.point.x);//触屏
                if (!lastTouch.Contains(hit.point.x) && finger.phase == TouchPhase.Moved)
                {
                    flick.Add(hit.point.x);//滑动
                }
            }
        }
    }

    //鼠标点击模拟触屏
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

    //触摸指示
    void ShowTouchPosition()
    {
        for (int i = 0; i < touch.Count; i++)//遍历手指触摸
        {
            if (i == touchLine.Count)//创建新线 创建新线后 touch.Count也会增加，保证不动原本的线
            {
                GameObject lineObj = Instantiate(line, new Vector3(0, 0, 7), Quaternion.identity);
                touchLine.Add(lineObj);
            }
            Vector3 transPosition = touchLine[i].transform.position;//设置位置
            transPosition.x = touch[i];//根据手指触点设置坐标
            touchLine[i].transform.position = transPosition;//设置坐标
        }
        for (int i = touch.Count; i < touchLine.Count;)//手指离开才销毁
        {
            Destroy(touchLine[i]);
            touchLine.RemoveAt(i);
        }
    }

    void JudgeList(List<float> pointList, Func<float, bool> judgeFunction)
    {
        for (int n = 0; n < pointList.Count; n++)
        {
            if (judgeFunction(pointList[n]))
            {
                pointList.RemoveAt(n);
                break;
            }
        }
    }

    void JudgeNote()
    {
        for (int i = DataTransfer.tapJudgeList.Count - 1; i >= 0; i--)
        {
            JudgeList(tap, DataTransfer.tapJudgeList[i].Judge);
        }
        for (int i = DataTransfer.flickJudgeList.Count - 1; i >= 0; i--)
        {
            JudgeList(flick, DataTransfer.flickJudgeList[i].Judge);
        }
        for (int i = DataTransfer.dragJudgeList.Count - 1; i >= 0; i--)
        {
            JudgeList(touch, DataTransfer.dragJudgeList[i].Judge);
        }
        for (int i = DataTransfer.holdHeadJudge.Count - 1; i >= 0; i--)
        {
            JudgeList(tap, DataTransfer.holdHeadJudge[i].HeadJudge);
        }
        for (int i = DataTransfer.holdingJudgeList.Count - 1; i >= 0; i--)
        {
            JudgeList(touch, DataTransfer.holdingJudgeList[i].HoldingJudge);
        }
    }
}

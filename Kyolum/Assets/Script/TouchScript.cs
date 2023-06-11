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
        //MouseInputDebug();
        ShowTouchPosition();
        JudgeNote();
    }

    void ClearTouchData()
    {
        lastTouch.Clear();//清空旧数据
        foreach (float a in lastTouch)
        {
            touch.Add(a);//保存上一次点击数据
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
            if (i == touchLine.Count)//创建新线
            {
                GameObject lineObj = Instantiate(line, new Vector3(0, 0, 7), Quaternion.identity);
                touchLine.Add(lineObj);
            }
            Vector3 transPosition = touchLine[i].transform.position;//设置位置
            transPosition.x = touch[i];//根据手指触点设置坐标
            touchLine[i].transform.position = transPosition;//设置坐标
        }
        for (int i = touch.Count; i < touchLine.Count;)//生成了线才销毁线
        {
            Destroy(touchLine[i]);
            touchLine.RemoveAt(i);
        }
    }

    void JudgeNote()
    {
        //按不同的音符类型分别进行判别
        for (int i = 0; i < DataTransfer.tapJudgeList.Count; i++)
        {
            for (int j = 0; j < tap.Count; j++)
            {                
                if (DataTransfer.tapJudgeList[i].Judge(tap[j]))
                {
                    tap.RemoveAt(j);
                }
                
            }
        }
        for (int i = 0; i < DataTransfer.flickJudgeList.Count; i++)
        {
            for (int j = 0; j < flick.Count; j++)
            {
                if (DataTransfer.flickJudgeList[i].Judge(flick[j]))
                {
                    flick.RemoveAt(j);
                }

            }
        }
        for (int i = 0; i < DataTransfer.dragJudgeList.Count; i++)
        {
            for (int j = 0; j < touch.Count; j++)
            {
                if (DataTransfer.dragJudgeList[i].Judge(touch[j]))
                {
                    touch.RemoveAt(j);
                }

            }
        }
        for (int i = 0; i < DataTransfer.holdHeadJudge.Count; i++)
        {
            for (int j = 0; j < tap.Count; j++)
            {
                if (DataTransfer.holdHeadJudge[i].HeadJudge(tap[j]))
                {
                    tap.RemoveAt(j);
                }               
                
            }
        }
        for (int i = 0; i < DataTransfer.holdingJudgeList.Count; i++)
        {
            for (int j = 0; j < touch.Count; j++)
            {
                if (DataTransfer.holdingJudgeList[i].HoldingJudge(touch[j]))
                {
                    touch.RemoveAt(j);
                }
            }
        }
    }
}

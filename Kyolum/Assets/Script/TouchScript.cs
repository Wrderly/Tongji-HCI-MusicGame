using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchScript : MonoBehaviour
{
    List<float> tap = new List<float>();//��������¼��ͬ���͵Ĵ���
    List<float> flick = new List<float>();
    List<float> touch = new List<float>();//��¼����
    List<float> lastTouch = new List<float>();//��¼��һ�δ���

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
        lastTouch.Clear();//��վ�����
        foreach (float a in touch)
        {
            lastTouch.Add(a);//������һ�ε������
        }
        touch.Clear();//��վ�����
        tap.Clear();//��վ�����
        flick.Clear();//��վ�����
    }

    //��ȡ��������
    void GetTouchData()
    {
        foreach (Touch finger in Input.touches)
        {
            Ray ray = Camera.main.ScreenPointToRay(finger.position);//�������߽��м��
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))//��ײ
            {
                if (finger.phase == TouchPhase.Began)
                {
                    tap.Add(hit.point.x);//���
                }
                touch.Add(hit.point.x);//����
                if (!lastTouch.Contains(hit.point.x) && finger.phase == TouchPhase.Moved)
                {
                    flick.Add(hit.point.x);//����
                }
            }
        }
    }

    //�����ģ�ⴥ��
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

    //����ָʾ
    void ShowTouchPosition()
    {
        for (int i = 0; i < touch.Count; i++)//������ָ����
        {
            if (i == touchLine.Count)//�������� �������ߺ� touch.CountҲ�����ӣ���֤����ԭ������
            {
                GameObject lineObj = Instantiate(line, new Vector3(0, 0, 7), Quaternion.identity);
                touchLine.Add(lineObj);
            }
            Vector3 transPosition = touchLine[i].transform.position;//����λ��
            transPosition.x = touch[i];//������ָ������������
            touchLine[i].transform.position = transPosition;//��������
        }
        for (int i = touch.Count; i < touchLine.Count;)//��ָ�뿪������
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

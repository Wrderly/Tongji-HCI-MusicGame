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
        //MouseInputDebug();
        ShowTouchPosition();
        JudgeNote();
    }

    void ClearTouchData()
    {
        lastTouch.Clear();//��վ�����
        foreach (float a in lastTouch)
        {
            touch.Add(a);//������һ�ε������
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
            if (i == touchLine.Count)//��������
            {
                GameObject lineObj = Instantiate(line, new Vector3(0, 0, 7), Quaternion.identity);
                touchLine.Add(lineObj);
            }
            Vector3 transPosition = touchLine[i].transform.position;//����λ��
            transPosition.x = touch[i];//������ָ������������
            touchLine[i].transform.position = transPosition;//��������
        }
        for (int i = touch.Count; i < touchLine.Count;)//�������߲�������
        {
            Destroy(touchLine[i]);
            touchLine.RemoveAt(i);
        }
    }

    void JudgeNote()
    {
        //����ͬ���������ͷֱ�����б�
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

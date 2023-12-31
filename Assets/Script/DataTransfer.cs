using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataTransfer : MonoBehaviour
{
    //保存公共数据
    static public float holdTime;
    static public float deltaTime;
    static public GameController controller;
    static public float speedScale = 1.0f;
    static public bool transitAble = false;
    //static public int TAP = 1;

    static public List<TapScript> tapJudgeList = new List<TapScript>();
    static public List<FlickScript> flickJudgeList = new List<FlickScript>();
    static public List<DragScript> dragJudgeList = new List<DragScript>();
    static public List<HoldScript> holdHeadJudge = new List<HoldScript>();
    static public List<HoldScript> holdingJudgeList = new List<HoldScript>();
}

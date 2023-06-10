using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataTransfer : MonoBehaviour
{
    static public float holdTime;
    static public float myDeltaTime;
    static public GameController controller;

    static public List<TapScript> tapJudgeList = new List<TapScript>();
    static public List<FlickScript> flickJudgeList = new List<FlickScript>();
    static public List<DragScript> dragJudgeList = new List<DragScript>();
    static public List<HoldScript> holdHeadJudge = new List<HoldScript>();
    static public List<HoldScript> holdingJudgeList = new List<HoldScript>();
}

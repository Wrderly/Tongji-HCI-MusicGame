using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour
{
    public AudioSource musicPlayer;
    public TextAsset chart;
    public GameObject tap, flick, drag, hold;
    public GameObject perfectEffect, greatEffect;
    public Text score, hitCount, endScore, perfectHitCount, goodHitCount, missHitCount;
    public Button pause, continueGame, quit, endQuit;
    public GameObject pauseBackGround, gameEndBackground, promptLine;

    float myTime = -1;//初始计时 为了使音符经过1秒下落后正好到达判定

    float[] timeStamps;//记录音符判定触发时间
    int[] noteQuatity;//记录音符数量
    List<float> noteType = new List<float>(), notePosition = new List<float>(), noteHoldTime = new List<float>();
    int index = 0;//记录谱面进度
    float nowScore = 0, totalScore;//记录分数
    int hits = 0;//记录连击数
    int perfectHit = 0, goodHit = 0, missHit = 0;

    bool isPlaying, gameStart = false;

    void Awake()
    {
        DataTransfer.controller = this;//设定游戏控制器
        //DataTransfer.comboNum = 0;
        hitCount.gameObject.SetActive(false);
        musicPlayer.Pause();//先设定暂停音乐 倒计时结束后再播放
        StartCoroutine("GameStart");
        LoadChart();//加载谱
        isPlaying = true;
        pause.onClick.AddListener(PauseGame);//暂停按钮的事件绑定
        continueGame.onClick.AddListener(ContinueGame);//继续按钮的事件绑定
        quit.onClick.AddListener(QuitGame);//退出按钮的事件绑定
        endQuit.onClick.AddListener(QuitGame);//退出按钮的事件绑定
    }

    void Update()
    {
        if (isPlaying)//正在游戏
        {
            myTime += Time.deltaTime;//增加计时器
            DataTransfer.myDeltaTime = Time.deltaTime;//记一帧时间
        }
        if (gameStart && !musicPlayer.isPlaying)//游戏已开始且英语结束
        {
            StartCoroutine("GameEnd");
        }
        //生成音符
        if (myTime > timeStamps[index])//达到生成音符的时间
        {
            for(int i = 0; i < noteQuatity[index]; i++)//遍历音符数量
            {
                switch (noteType[0])//判断音符类型
                {
                    case 1:
                        {
                            Instantiate(tap, new Vector3(notePosition[0], 0, 15), Quaternion.identity);
                            break;
                        }
                    case 2:
                        {
                            Instantiate(flick, new Vector3(notePosition[0], 0, 15), Quaternion.identity);
                            break;
                        }
                    case 3:
                        {
                            Instantiate(drag, new Vector3(notePosition[0], 0, 15), Quaternion.identity);
                            break;
                        }
                    case 4:
                        {
                            DataTransfer.holdTime = noteHoldTime[0];//对于长条音符 记录按压时长
                            noteHoldTime.RemoveAt(0);
                            Instantiate(hold, new Vector3(notePosition[0], 0, 15), Quaternion.identity);
                            break;
                        }
                }
                noteType.RemoveAt(0);//移除以判断数据
                notePosition.RemoveAt(0);//移除以判断数据
            }
            index++;
        }
    }

    IEnumerator GameStart()
    {
        yield return new WaitForSeconds(2);//等待2秒
        musicPlayer.Play();//播放音乐
        gameStart = true;//置游戏开始为真
    }

    IEnumerator GameEnd()
    {
        yield return new WaitForSeconds(2);
        EndGameShow();
        //SceneManager.LoadScene(0);
    }

    void LoadChart()
    {
        string[] everyLine = chart.text.Split('\n');//按行分割谱
        timeStamps = new float[everyLine.Length];
        noteQuatity = new int[everyLine.Length];
        for (int i = 0; i < everyLine.Length; i++)
        {
            string[] everyPart = everyLine[i].Split(';');//对于每一行 分割音符
            string[] timePart = everyPart[0].Split(',');//对于音符 分割出触发时间与位置
            timeStamps[i] = Convert.ToSingle(timePart[0]);//保存时间
            noteQuatity[i] = Convert.ToInt32(timePart[1]);//保存位置
            string[] notePart = everyPart[1].Split(' ');//取音符的描述
            for(int n = 0; n < notePart.Length; n++)
            {
                string[] noteData = notePart[n].Split(',');//分割每个描述
                if(noteData.Length == 2)//根据描述判定不同音符类型
                {
                    noteType.Add(Convert.ToSingle(noteData[0]));
                    notePosition.Add(Convert.ToSingle(noteData[1]));
                }
                else if(noteData.Length == 3)
                {
                    noteType.Add(Convert.ToSingle(noteData[0]));
                    notePosition.Add(Convert.ToSingle(noteData[1]));
                    noteHoldTime.Add(Convert.ToSingle(noteData[2]));
                }
            }
        }
        totalScore = 2 * noteType.Count;
    }

    public void JudgeNote(float hitTime)
    {
        hitTime = Math.Abs(hitTime);
        if(hitTime < 0.03f)
        {
            nowScore += 2;
            perfectHit++;
            //promptLine.
            //ShakeScript.Shake();
            //shake.Shake();
        }
        else
        {
            nowScore++;
            goodHit++;
            //shake.Shake();
        }
        int s = Convert.ToInt32(1000000 * (nowScore / totalScore));
        score.text = s.ToString();
        hits++;
        if(hits > 2)//连击
        {
            hitCount.gameObject.SetActive(true);//显示连击数
        }
        hitCount.text = hits.ToString();
    }

    public void MissNote()
    {
        hits = 0;
        missHit++;
        hitCount.gameObject.SetActive(false);
    }

    public void GenerateEffect(float hitTime, float xPosition)
    {
        //显示触发特效 按触发评分设置不同特效
        if (Math.Abs(hitTime) < 0.03f)
        {
            Instantiate(perfectEffect, new Vector3(xPosition, 0, 0), Quaternion.identity);
        }
        else if(hitTime > 0.03f)
        {
            Instantiate(greatEffect, new Vector3(xPosition, 0, -0.2f), Quaternion.identity);
        }
        else if(hitTime < -0.03f)
        {
            Instantiate(greatEffect, new Vector3(xPosition, 0, 0.3f), Quaternion.identity);
        }
    }

    public void GenerateHoldingEffect(float hitTime, float xPosition)
    {
        hitTime = Math.Abs(hitTime);
        if(hitTime < 0.03f)
        {
            Instantiate(perfectEffect, new Vector3(xPosition, 0, 0), Quaternion.identity);
        }
        else
        {
            Instantiate(greatEffect, new Vector3(xPosition, 0, 0), Quaternion.identity);
        }
    }

    void PauseGame()
    {
        gameStart = false;
        isPlaying = false;
        musicPlayer.Pause();
        pause.gameObject.SetActive(false);
        pauseBackGround.SetActive(true);
        DataTransfer.myDeltaTime = 0;
    }

    void ContinueGame()
    {
        gameStart = true;
        isPlaying = true;
        musicPlayer.Play();
        pause.gameObject.SetActive(true);
        pauseBackGround.SetActive(false);
    }

    void EndGameShow()
    {
        gameStart = false;
        isPlaying = false;
        musicPlayer.Pause();
        //pause.gameObject.SetActive(false);
        gameEndBackground.SetActive(true);
        int s = Convert.ToInt32(1000000 * (nowScore / totalScore));
        endScore.text = s.ToString();
        perfectHitCount.text = perfectHit.ToString();
        goodHitCount.text = goodHit.ToString();
        missHitCount.text = missHit.ToString();
        DataTransfer.myDeltaTime = 0;
    }

    void QuitGame()
    {
        SceneManager.LoadScene(0);
    }
}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour
{
    public AudioSource musicPlayer;
    public VideoPlayer videoPlayer;
    public TextAsset chart;
    public GameObject tap, flick, drag, hold;
    public GameObject perfectEffect, greatEffect;
    //public GameObject transit;
    public Text score, hitCount, endScore, perfectHitCount, goodHitCount, missHitCount;
    public Button pause, continueGame, quit, endQuit;
    public GameObject pauseBackGround, gameEndBackground, promptLine;

    float myTime = -2 + 1 / DataTransfer.speedScale;//��ʼ��ʱ Ϊ��ʹ��������ָ������������õ����ж�

    float[] timeStamps;//��¼�����ж�����ʱ��
    int[] noteQuatity;//��¼��������
    List<float> noteType = new List<float>(), notePosition = new List<float>(), noteHoldTime = new List<float>();
    int index = 0;//��¼�������
    float nowScore = 0, totalScore;//��¼����
    int hits = 0;//��¼������
    int perfectHit = 0, goodHit = 0, missHit = 0;

    bool isPlaying, gameStart = false;

    void Awake()
    {
        DataTransfer.controller = this;//�趨��Ϸ������
        //DataTransfer.comboNum = 0;
        hitCount.gameObject.SetActive(false);
        musicPlayer.Pause();//���趨��ͣ���� ����ʱ�������ٲ���
        //videoPlayer.Pause();
        videoPlayer.Play();
        StartCoroutine("GameStart");
        LoadChart();//������
        isPlaying = true;
        pause.onClick.AddListener(PauseGame);//��ͣ��ť���¼���
        continueGame.onClick.AddListener(ContinueGame);//������ť���¼���
        quit.onClick.AddListener(QuitGame);//�˳���ť���¼���
        endQuit.onClick.AddListener(QuitGame);//�˳���ť���¼���
    }

    void Update()
    {
        if (isPlaying)//������Ϸ
        {
            myTime += Time.deltaTime;//���Ӽ�ʱ��
            DataTransfer.deltaTime = Time.deltaTime;//��һ֡ʱ��
        }
        if (gameStart && !musicPlayer.isPlaying)//��Ϸ�ѿ�ʼ�����ֽ���
        {
            StartCoroutine("GameEnd");
        }
        //��������
        if (index < timeStamps.Length && myTime > timeStamps[index])//�ﵽ����������ʱ��
        {
            for(int i = 0; i < noteQuatity[index]; i++)//������������
            {
                switch (noteType[0])//�ж���������
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
                            DataTransfer.holdTime = noteHoldTime[0];//���ڳ������� ��¼��ѹʱ��
                            noteHoldTime.RemoveAt(0);
                            Instantiate(hold, new Vector3(notePosition[0], 0, 15), Quaternion.identity);
                            break;
                        }
                }
                noteType.RemoveAt(0);//�Ƴ����ж�����
                notePosition.RemoveAt(0);//�Ƴ����ж�����
            }
            index++;
        }
    }

    IEnumerator GameStart()
    {
        yield return new WaitForSeconds(2);//�ȴ�2��
        //videoPlayer.Play();
        musicPlayer.Play();//��������
        gameStart = true;//����Ϸ��ʼΪ��
    }

    IEnumerator GameEnd()
    {
        yield return new WaitForSeconds(2);
        EndGameShow();
        //SceneManager.LoadScene(0);
    }

    void LoadChart()
    {
        string[] everyLine = chart.text.Split('\n');//���зָ���
        timeStamps = new float[everyLine.Length];
        noteQuatity = new int[everyLine.Length];
        for (int i = 0; i < everyLine.Length; i++)
        {
            string[] everyPart = everyLine[i].Split(';');//����ÿһ�� �ָ�����
            string[] timePart = everyPart[0].Split(',');//�������� �ָ������ʱ��������
            timeStamps[i] = Convert.ToSingle(timePart[0]);//����ʱ��
            noteQuatity[i] = Convert.ToInt32(timePart[1]);//��������
            string[] notePart = everyPart[1].Split(' ');//ȡ����������
            for(int n = 0; n < notePart.Length; n++)
            {
                string[] noteData = notePart[n].Split(',');//�ָ�ÿ������
                if(noteData.Length == 2)//�����������治ͬ��������
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

    public void JudgeScore(float hitTime, int type)
    {
        hitTime = Math.Abs(hitTime);
        if (type == 3 || type == 2)
        {
            nowScore += 2;
            perfectHit++;
        }
        else
        {
            if (hitTime <= 0.08f)
            {
                nowScore += 2;
                perfectHit++;
            }
            else
            {
                nowScore++;
                goodHit++;
            }
        }
        int s = Convert.ToInt32(1000000 * (nowScore / totalScore));
        score.text = s.ToString();
        hits++;
        if(hits > 2)//����
        {
            hitCount.gameObject.SetActive(true);//��ʾ������
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
        //��ʾ������Ч �������������ò�ͬ��Ч
        if (Math.Abs(hitTime) <= 0.08f)
        {
            Instantiate(perfectEffect, new Vector3(xPosition, 0, 0), Quaternion.identity);
        }
        else if(hitTime > 0.08f)
        {
            Instantiate(greatEffect, new Vector3(xPosition, 0, -0.2f), Quaternion.identity);
        }
        else if(hitTime < -0.08f)
        {
            Instantiate(greatEffect, new Vector3(xPosition, 0, 0.3f), Quaternion.identity);
        }
    }

    public void GeneratePerfectEffect(float xPosition)
    {
        //�����㶨Ϊperfect
        Instantiate(perfectEffect, new Vector3(xPosition, 0, 0), Quaternion.identity);
    }

    public void GenerateHoldingEffect(float hitTime, float xPosition)
    {
        hitTime = Math.Abs(hitTime);
        if(hitTime <= 0.08f)
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
        videoPlayer.Pause();
        pause.gameObject.SetActive(false);
        pauseBackGround.SetActive(true);
        DataTransfer.deltaTime = 0;
    }

    void ContinueGame()
    {
        gameStart = true;
        isPlaying = true;
        musicPlayer.Play();
        videoPlayer.Play();
        pause.gameObject.SetActive(true);
        pauseBackGround.SetActive(false);
    }

    void EndGameShow()
    {
        gameStart = false;
        isPlaying = false;
        musicPlayer.Pause();
        videoPlayer.Pause();
        //pause.gameObject.SetActive(false);
        gameEndBackground.SetActive(true);
        int s = Convert.ToInt32(1000000 * (nowScore / totalScore));
        endScore.text = s.ToString();
        perfectHitCount.text = perfectHit.ToString();
        goodHitCount.text = goodHit.ToString();
        missHitCount.text = missHit.ToString();
        DataTransfer.deltaTime = 0;
    }

    void QuitGame()
    {
        DataTransfer.transitAble = false;
        SceneManager.LoadScene(0);
    }
}
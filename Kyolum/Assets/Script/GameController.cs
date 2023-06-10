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
    public Text score, hitCount;
    public Button pause, continueGame, quit;
    public GameObject pauseBackGround;

    float myTime = -1;

    float[] timeStamps;
    int[] noteQuatity;
    List<float> noteType = new List<float>(), notePosition = new List<float>(), noteHoldTime = new List<float>();
    int index = 0;
    float nowScore = 0, totalScore;
    int hits = 0;

    bool isPlaying, gameStart = false;

    void Awake()
    {
        DataTransfer.controller = this;
        musicPlayer.Pause();
        StartCoroutine("GameStart");
        LoadChart();
        isPlaying = true;
        pause.onClick.AddListener(PauseGame);
        continueGame.onClick.AddListener(ContinueGame);
        quit.onClick.AddListener(QuitGame);
    }

    void Update()
    {
        if (isPlaying)
        {
            myTime += Time.deltaTime;
            DataTransfer.myDeltaTime = Time.deltaTime;
        }
        if (gameStart && !musicPlayer.isPlaying)
        {
            StartCoroutine("GameEnd");
        }
        if (myTime > timeStamps[index])
        {
            for(int i = 0; i < noteQuatity[index]; i++)
            {
                switch (noteType[0])
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
                            DataTransfer.holdTime = noteHoldTime[0];
                            noteHoldTime.RemoveAt(0);
                            Instantiate(hold, new Vector3(notePosition[0], 0, 15), Quaternion.identity);
                            break;
                        }
                }
                noteType.RemoveAt(0);
                notePosition.RemoveAt(0);
            }
            index++;
        }
    }

    IEnumerator GameStart()
    {
        yield return new WaitForSeconds(2);
        musicPlayer.Play();
        gameStart = true;
    }

    IEnumerator GameEnd()
    {
        yield return new WaitForSeconds(2);
        SceneManager.LoadScene(0);
    }

    void LoadChart()
    {
        string[] everyLine = chart.text.Split('\n');
        timeStamps = new float[everyLine.Length];
        noteQuatity = new int[everyLine.Length];
        for (int i = 0; i < everyLine.Length; i++)
        {
            string[] everyPart = everyLine[i].Split(';');
            string[] timePart = everyPart[0].Split(',');
            timeStamps[i] = Convert.ToSingle(timePart[0]);
            noteQuatity[i] = Convert.ToInt32(timePart[1]);
            string[] notePart = everyPart[1].Split(' ');
            for(int n = 0; n < notePart.Length; n++)
            {
                string[] noteData = notePart[n].Split(',');
                if(noteData.Length == 2)
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
        }
        else
        {
            nowScore++;
        }
        int s = Convert.ToInt32(1000000 * (nowScore / totalScore));
        score.text = s.ToString();
        hits++;
        if(hits > 2)
        {
            hitCount.gameObject.SetActive(true);
        }
        hitCount.text = hits.ToString();
    }

    public void MissNote()
    {
        hits = 0;
        hitCount.gameObject.SetActive(false);
    }

    public void GenerateEffect(float hitTime, float xPosition)
    {
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

    void QuitGame()
    {
        SceneManager.LoadScene(0);
    }
}

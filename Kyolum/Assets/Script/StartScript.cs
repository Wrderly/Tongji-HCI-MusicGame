using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class StartScript : MonoBehaviour
{
    public Button start, quit;
    void Start()
    {
        start.onClick.AddListener(StartGame);
        quit.onClick.AddListener(QuitGame);
    }

    void StartGame()
    {
        SceneManager.LoadScene(1);
    }


    void QuitGame()
    {
        Application.Quit();
    }
}

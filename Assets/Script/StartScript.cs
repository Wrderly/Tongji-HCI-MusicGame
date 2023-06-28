using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class StartScript : MonoBehaviour
{
    public Button start, quit;
    //public GameObject panelPrefab;
    void Start()
    {
        //DataTransfer.deltaTime = Time.deltaTime;
        start.onClick.AddListener(StartGame);
        quit.onClick.AddListener(QuitGame);
    }

    void StartGame()
    {
        DataTransfer.transitAble = true;
        StartCoroutine(LoadSceneAsync2(2));
    }

    private IEnumerator LoadSceneAsync2(int sceneID)
    {
        yield return new WaitForSeconds(1);
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(sceneID);

        while (!asyncLoad.isDone)
        {
            yield return null;
        }
    }

    /**
    public void CreatePanel()
    {
        GameObject panel = Instantiate(panelPrefab);
    }
    /**/

    public void LoadScene(int sceneID)
    {
        StartCoroutine(LoadSceneAsync(sceneID));
    }

    private IEnumerator LoadSceneAsync(int sceneID)
    {
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(sceneID);
        while (!asyncLoad.isDone)
        {
            yield return null;
        }
    }


    void QuitGame()
    {
        Application.Quit();
    }
}

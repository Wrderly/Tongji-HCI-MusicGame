using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadScript : MonoBehaviour
{
    void Start()
    {
        LoadScene(1);
    }

    public void LoadScene(int sceneID)
    {
        //StartCoroutine(Wait());
        StartCoroutine(LoadSceneAsync(sceneID));
    }

    private IEnumerator LoadSceneAsync(int sceneID)
    {
        //yield return new WaitForSeconds(1);
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(sceneID);

        while (!asyncLoad.isDone)
        {
            yield return null;
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class restoreGame : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void restoreLevel() {

		if (PlayerPrefs.GetInt ("Level") > 1) {
			LevelManager.LevelCount = PlayerPrefs.GetInt ("Level");
			LevelManager.force = PlayerPrefs.GetFloat ("Force");
			SceneManager.LoadScene ("level0" + LevelManager.LevelCount);
		} else {
			SceneManager.LoadScene("level01");
		}
	}
}

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

		print ("Current user level: " + PlayerPrefs.GetInt("Level"));
		print ("Current level force: " + PlayerPrefs.GetFloat("Force"));
		if (PlayerPrefs.GetInt ("Level") > 1) {
			print ("Player prefs level: " + PlayerPrefs.GetInt ("Level"));
			LevelManager.LevelCount = PlayerPrefs.GetInt ("Level");
			print ("LevelManager count: " + LevelManager.LevelCount);
			print ("Player prefs force: " + PlayerPrefs.GetFloat ("Force"));
			LevelManager.force = PlayerPrefs.GetFloat ("Force");
			print ("Force from levelManager: " + LevelManager.force);
			print ("welcome to level 0" + LevelManager.LevelCount);
			SceneManager.LoadScene ("level0" + LevelManager.LevelCount);
		} else {
			print ("No existe nivel guardado en player prefs");
			SceneManager.LoadScene("level01");
		}
	}
}

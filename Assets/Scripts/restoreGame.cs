using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class restoreGame : MonoBehaviour {

	public void restoreLevel() {

		if (PlayerPrefs.GetInt ("Level") > 1) {
			LevelManager.LevelCount = PlayerPrefs.GetInt ("Level");
			LevelManager.force = PlayerPrefs.GetFloat ("Force");
			if (LevelManager.LevelCount <= 9) {
				SceneManager.LoadScene ("level0" + LevelManager.LevelCount);
			} 
			else {
				SceneManager.LoadScene ("level" + LevelManager.LevelCount);
			}
		} else {
			SceneManager.LoadScene("level01");
		}
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelObject : MonoBehaviour {
	private AudioSource resetLevelAudio;

	void Start () {
		int count = 6;
		if (LevelManager.explosions.Count == 0) {
			
			for (int i = 1; i <= count; i++)
			{
				LevelManager.explosions.Add ("explosion0" + i, false);
			}
			LevelManager.explosions.Add ("playOuch", false);
			LevelManager.explosions.Add ("resetLevel", false);
		} 
		else {
			for (int i = 1; i <= count; i++)
			{
				LevelManager.explosions["explosion0" + i] = false;
			}
			resetLevelAudio = GetComponent<AudioSource> ();
			resetLevelAudio.enabled = true;
			if (LevelManager.explosions["playOuch"]) {
				resetLevelAudio.Play ();
				LevelManager.explosions["playOuch"] = false;
			}
		}
		PlayerPrefs.SetInt("Level", LevelManager.LevelCount);
		PlayerPrefs.SetFloat("Force", LevelManager.force);
	}

	void Update () {
		if (LevelManager.explosions["resetLevel"]) { 
			LevelManager.explosions["resetLevel"] = false;
			LevelManager.explosions["playOuch"] = true;
			SceneManager.LoadScene (SceneManager.GetActiveScene ().buildIndex);
		}
	}
}

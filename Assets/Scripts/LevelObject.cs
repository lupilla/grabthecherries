using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelObject : MonoBehaviour {
	private AudioSource resetLevelAudio;
	// Use this for initialization
	void Start () {
		if (LevelManager.explosions.Count == 0) {
			LevelManager.explosions.Add ("explosion01", false);
			LevelManager.explosions.Add ("explosion02", false);
			LevelManager.explosions.Add ("explosion03", false);
			LevelManager.explosions.Add ("explosion04", false);
			LevelManager.explosions.Add ("explosion05", false);
			LevelManager.explosions.Add ("explosion06", false);
			LevelManager.explosions.Add ("playOuch", false);
			LevelManager.explosions.Add ("resetLevel", false);	
		} 
		else {
			print (LevelManager.LevelCount);
			LevelManager.explosions["explosion01"] = false;
			LevelManager.explosions["explosion02"] = false;
			LevelManager.explosions["explosion03"] = false;
			LevelManager.explosions["explosion04"] = false;
			LevelManager.explosions["explosion05"] = false;
			LevelManager.explosions["explosion06"] = false;
			resetLevelAudio = GetComponent<AudioSource> ();
			resetLevelAudio.enabled = true;
			if (LevelManager.explosions["playOuch"]) {
				resetLevelAudio.Play ();
				LevelManager.explosions["playOuch"] = false;
			}
		}
		PlayerPrefs.SetInt("Level", LevelManager.LevelCount);
		PlayerPrefs.SetFloat("Force", LevelManager.force);

		print ("Current user level: " + PlayerPrefs.GetInt("Level"));
		print ("Current level force: " + PlayerPrefs.GetFloat("Force"));
	}
	
	// Update is called once per frame
	void Update () {
		if (LevelManager.explosions["resetLevel"]) { 
			LevelManager.explosions["resetLevel"] = false;
			LevelManager.explosions["playOuch"] = true;
			SceneManager.LoadScene (SceneManager.GetActiveScene ().buildIndex);
		}
	}
}

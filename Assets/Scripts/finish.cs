using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class finish : MonoBehaviour {
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerEnter (Collider coll) {
		print (LevelManager.LevelCount);
		print ("You rock!!!");
		if (LevelManager.LevelCount < LevelManager.totalLevels) {
			print ("total levels: " + LevelManager.totalLevels);
			LevelManager.LevelCount++;
			//LevelManager.force+=10.0f;
			//print ("level force: " + LevelManager.force);
		} else {
			LevelManager.LevelCount = 1;
		}
		Destroy (gameObject);
		StartCoroutine(FadeScene());
		if (LevelManager.LevelCount <= 9) {
			SceneManager.LoadScene ("level0" + LevelManager.LevelCount);
		} 
		else {
			SceneManager.LoadScene ("level" + LevelManager.LevelCount);
		}
	}

	IEnumerator FadeScene()
	{
		float fadeTime = Camera.main.GetComponent<Fading>().StartFade(1);
		yield return new WaitForSeconds(fadeTime);

	}
}


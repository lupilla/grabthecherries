using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadLevel : MonoBehaviour {

	public void LoadStage()  {
		print ("welcome to level 01");
		SceneManager.LoadScene("level01");
	}

	public void LoadHowToPlay()  {
		print ("Instructions");
		SceneManager.LoadScene("howToPlay");
	}
}

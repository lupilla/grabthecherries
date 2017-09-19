using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Explosion : MonoBehaviour {
	public string explosionString;
	private ParticleSystem explosion;

	void Start () {
		explosion = GetComponent<ParticleSystem>();
	}

	void Update () {
		if (LevelManager.explosions[explosionString]) {
			print (explosionString);
			print (LevelManager.explosions [explosionString]);
			explosion.Play();
			LevelManager.explosions[explosionString] = false;
		}
	}
}

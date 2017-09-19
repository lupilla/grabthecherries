using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Box : MonoBehaviour
{
	private GameObject boxGameObject;
	public string box;
	public AudioClip getStar;
	public string stringExplosion;
	private AudioSource boxAudio;
	private bool flag = true;

	void Start ()
	{
		boxGameObject = GameObject.FindGameObjectWithTag(box);
		boxAudio = GetComponent<AudioSource> ();
		boxAudio.enabled = true;
	}

	void OnTriggerEnter (Collider coll)
	{
		if (flag) {
			Destroy (boxGameObject);
			flag = false;
			LevelManager.explosions [stringExplosion] = true;
			boxAudio.PlayOneShot (getStar);
			Destroy (gameObject, getStar.length);
		}
	}
}

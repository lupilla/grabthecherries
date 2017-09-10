using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class move : MonoBehaviour {
	//public float speed;
	private Rigidbody _rigidbody;
	private AudioSource audio;
	//public float jumpValue;

	// Use this for initialization
	void Start () {
		_rigidbody = GetComponent<Rigidbody> ();
		audio = GetComponent<AudioSource> ();
	}
	
	// Update is called once per frame
	void Update () {
	}

	void FixedUpdate() {
		_rigidbody.AddForce (new Vector3(Input.GetAxis("Horizontal"),0.0f, Input.GetAxis("Vertical")) * LevelManager.force);
		_rigidbody.AddForce (new Vector3(Input.acceleration.x,0.0f, Input.acceleration.y) *  LevelManager.force);
	}

	void OnCollisionEnter(Collision collision)
	{		
		if (collision.relativeVelocity.magnitude > 2) {
			audio.Play ();
		}
	}
}

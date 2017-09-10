using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class changeBoxes : MonoBehaviour {
	public string tagObjects;
	private GameObject bombGameObject;
	// Use this for initialization
	void Start ()
	{
		bombGameObject = GameObject.FindGameObjectWithTag(tagObjects);
	}

	// Update is called once per frame
	void Update ()
	{
	}

	void OnTriggerEnter (Collider coll)
	{
		bombGameObject.transform.position = new Vector3 (-0.5f, 0.5f, 10.85f);
	}
}

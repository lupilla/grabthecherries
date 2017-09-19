using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class changeBoxes : MonoBehaviour {
	public string tagObjects;
	private GameObject bombGameObject;

	void Start ()
	{
		bombGameObject = GameObject.FindGameObjectWithTag(tagObjects);
	}

	void OnTriggerEnter (Collider coll)
	{
		bombGameObject.transform.position = new Vector3 (-0.5f, 0.5f, 10.85f);
	}
}

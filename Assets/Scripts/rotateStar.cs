﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rotateStar : MonoBehaviour {
	public float rotSpeed;


	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		transform.Rotate(0, rotSpeed * Time.deltaTime, 0, Space.World);
	}


}

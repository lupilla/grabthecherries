using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bomb : MonoBehaviour
{
	void OnTriggerEnter (Collider coll)
	{
		Destroy (gameObject);
		LevelManager.explosions["resetLevel"] = true;
	}
}

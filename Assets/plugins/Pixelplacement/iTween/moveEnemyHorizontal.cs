using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class moveEnemyHorizontal : MonoBehaviour {

	public float time;
	public float axisPosition;

	IEnumerator Start () {
		yield return new WaitForSeconds(2.0f);
		Vector3 position = transform.position;
		while (true) {
			iTween.MoveTo(this.gameObject, iTween.Hash("time", time, "x", position.x - axisPosition));
			yield return new WaitForSeconds(time);
			iTween.MoveTo(this.gameObject, iTween.Hash("time", time, "x", position.x + axisPosition));
			yield return new WaitForSeconds(time);
			//		
		}
	}
}

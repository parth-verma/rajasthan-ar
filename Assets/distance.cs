using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class distance : MonoBehaviour {

	public Text distanceText;

	// Use this for initialization
	void Start () {
		distanceText.enabled = true;
	}
	
	// Update is called once per frame
	void Update () {
		Vector3 heading = transform.position - GetComponent<Camera>().transform.position;
		float distance = Vector3.Dot(heading, GetComponent<Camera>().transform.forward);
		distanceText.text = distance.ToString();

	}
}

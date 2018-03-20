using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class onload : MonoBehaviour {

	// Use this for initialization
	void Start () {
		GetComponent<Text> ().text = argClass.language;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}

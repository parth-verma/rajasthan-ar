using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class menuStart : LocalizationHelper {

	private GameObject dropdown;
	public void changemenuscene()
	{
		dropdown = GameObject.FindGameObjectWithTag ("Dropdown");
		argClass.language = dropdown.GetComponent<Dropdown>().options [dropdown.GetComponent<Dropdown>().value].text;
		Debug.Log ("lahsf");
		Application.LoadLevel ("ar_scene");
	}


	 
}

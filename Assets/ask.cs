using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ask : MonoBehaviour {

	public AudioSource prev_src;
	public AudioClip a1,a2;
	public static  Vector3 orgPos;

	// Use this for initialization
	public void  run(){
		
			prev_src.Pause ();
		argClass.play = false;
		AudioSource a = GetComponent<AudioSource> ();
		if (!a.isPlaying) {
			

			a.Play ();
			new WaitForSeconds (a.clip.length+3);
			a.clip = a2;
			a.Play ();
			new WaitForSeconds (a.clip.length+4);
			a.clip = null;

		}
		argClass.play = true;
		prev_src.Play ();
	}
	void  Start () {
		orgPos = transform.position;
		transform.position = new Vector3 (10000, 10000, 10000);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}

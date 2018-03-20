using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test1 : MonoBehaviour {
	public AudioClip m_AudioClipen,m_AudioCliphi;
	AudioSource m_MyAudioSource;
	// Use this for initialization
	void Start () {
		m_MyAudioSource = GetComponent<AudioSource>();
		if (argClass.language == "English") {
			m_MyAudioSource.clip = m_AudioClipen;

		}
		else{
			m_MyAudioSource.clip = m_AudioCliphi;
			}
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}

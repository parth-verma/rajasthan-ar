using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;

public class AugmentedScript : MonoBehaviour
{

	public double  lat,log;
	private float startx,starty;
	private double curx, cury;
	private float originalLatitude;
	private float originalLongitude;
	private double currentLongitude;
	private double currentLatitude;

//	private GameObject distanceTextObject;
	private double distance;

	private bool setOriginalValues = true;

	private Vector3 targetPosition;
	private Vector3 originalPosition;

	private float speed = .5f;

	IEnumerator GetCoordinates()
	{
		//while true so this function keeps running once started.
		while (true) {
			// check if user has location service enabled
			if (!Input.location.isEnabledByUser)
				yield break;

			// Start service before querying location
			Input.location.Start (1f,.1f);

			// Wait until service initializes
			int maxWait = 20;
			while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0) {
				yield return new WaitForSeconds (1);
				maxWait--;
			}

			// Service didn't initialize in 20 seconds
			if (maxWait < 1) {
				print ("Timed out");
				yield break;
			}

			// Connection has failed
			if (Input.location.status == LocationServiceStatus.Failed) {
				print ("Unable to determine device location");
				yield break;
			} else {
				// Access granted and location value could be retrieved
				print ("Location: " + Input.location.lastData.latitude + " " + Input.location.lastData.longitude + " " + Input.location.lastData.altitude + " " + Input.location.lastData.horizontalAccuracy + " " + Input.location.lastData.timestamp);

				//if original value has not yet been set save coordinates of player on app start
				if (setOriginalValues) {
					originalLatitude = Input.location.lastData.latitude;
					originalLongitude = Input.location.lastData.longitude;
					setOriginalValues = false;
				}

				//overwrite current lat and lon everytime
				currentLatitude = Input.location.lastData.latitude;
				currentLongitude = Input.location.lastData.longitude;

				//calculate the distance between where the player was when the app started and where they are now.
				Calc (originalLatitude, originalLongitude, currentLatitude, currentLongitude);

			}
			Input.location.Stop();
		}
	}

	//calculates distance between two sets of coordinates, taking into account the curvature of the earth.
	public void Calc(float lat1, float lon1, double lat2, double lon2)
	{

		 // Radius of earth in KM
		float R = 6378.137f;
		var dLat = lat2 * Math.PI / 180 - lat1 * Math.PI / 180;
		var dLon = lon2 * Math.PI / 180 - lon1 * Math.PI / 180;
		var a = Math.Sin (dLat / 2) * Math.Sin (dLat / 2);

		// +
//			Math.Cos(lat1 * Math.PI / 180) * Math.Cos(lat2 * Math.PI / 180) *
//			Math.Sin(dLon / 2) * Math.Sin(dLon / 2);
		var c = 2 * Math.Atan2(Math.Sqrt(a), Math.Sqrt(1 - a));

		distance = R * c*1000;
		float transformx = (float)distance;
		a = Math.Sin (dLon / 2) * Math.Sin (dLon / 2);

		// +
		//			Math.Cos(lat1 * Math.PI / 180) * Math.Cos(lat2 * Math.PI / 180) *
		//			Math.Sin(dLon / 2) * Math.Sin(dLon / 2);
		c = 2 * Math.Atan2(Math.Sqrt(a), Math.Sqrt(1 - a));
		distance = R * c*1000;
		float transformy = (float)distance;
//		distance = distance * 1000f; // meters
		//set the distance text on the canvas
//		distanceTextObject.GetComponent<Text> ().text = "Distance: " + distance;
		//convert distance from double to float
		float distanceFloat = (float)distance;
		curx = ((lat2 / 180 * Math.PI) * R )* 1000;
		cury = ((lon2 / 180 * Math.PI) * R )*1000;
//		distanceTextObject.GetComponent<Text> ().text = "\ny:" + transformy.ToString () + "\nx:" + transformx.ToString ();
		targetPosition = new Vector3 (transformx, transform.position.y, transformy);
		//set the target position of the ufo, this is where we lerp to in the update function

		//distance was multiplied by 12 so I didn't have to walk that far to get the UFO to show up closer

	}

	void Start(){
		//get distance text reference
//		distanceTextObject = GameObject.FindGameObjectWithTag ("distancetext");
		//start GetCoordinate() function 
		StartCoroutine ("GetCoordinates");
		float R = 6378.137f;
		startx = (((float)lat / 180 * Mathf.PI) * R )* 1000;
		starty = (((float)log / 180 * Mathf.PI) * R )*1000;
		//initialize target and original position
		new WaitWhile(()=>currentLatitude==0 && currentLongitude==0);
		transform.position = new Vector3((float)startx,transform.position.y,(float)starty) - new Vector3((float)curx,0,(float)cury);
		originalPosition = transform.position;
//		originalPosition = transform.position;

	}

	void Update(){
		//linearly interpolate from current position to target position
//		Vector3 targetPosition = new Vector3(startx,transform.position.y,starty) - new Vector3(curx,0,cury);
		transform.position = Vector3.Lerp(originalPosition, targetPosition, speed);

		originalPosition = targetPosition;
		//rotate by 1 degree about the y axis every frame
//		transform.eulerAngles += new Vector3 (0, 1f, 0);

	}
}

using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class ButtonBehaviours : MonoBehaviour {

	void changeCanvasProperty(GameObject yourCanvas, bool disable) {
		if (!disable)
			yourCanvas.SetActive(false);
		else
			yourCanvas.SetActive(true);
	}
}
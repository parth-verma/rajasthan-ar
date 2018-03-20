using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

/// <summary>
/// Localization drop down example.
/// </summary>
public class LocalizationHelper : MonoBehaviour
{
	
    [Tooltip("The drop down box to populate with flags")]
    public Dropdown dropDown;

    [Tooltip("The flags of the languages that our game supports")]
    public string[] flags;

    /// <summary>
    /// Start this instance!
    /// </summary>
    void Start()
    {
        // Clear any existing options, just in case
        dropDown.ClearOptions();

        // Create the option list
        List<Dropdown.OptionData> flagItems = new List<Dropdown.OptionData>();

        // Loop through each sprite
        foreach (var flag in flags)
        {
            // Try and find the '.' in the sprite's name. This is used as a delimiter
            // between the country code and the name of the language
            string flagName = flag;
            // Add the option to the list
            var flagOption = new Dropdown.OptionData(flagName);
            flagItems.Add(flagOption);
        }

        // Add the options to the drop down box
        dropDown.AddOptions(flagItems);
    }
   
}

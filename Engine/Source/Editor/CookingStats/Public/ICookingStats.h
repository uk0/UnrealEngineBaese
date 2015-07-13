// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once

class ICookingStats
{
public:

	/** Virtual destructor*/
	virtual ~ICookingStats() {}


	/**
	* AddRunTag
	* Add a tag and associate it with this run of the editor
	* this is for storing global information from this run
	*
	* @param Tag tag which we want to keep
	* @param Value for this tag FString() if we just want to store the tag
	*/
	virtual void AddRunTag(const FName& Tag, const FString& Value) =0;

	/**
	 * AddTag
	 * add a tag to a key, the tags will be saved out with the key
	 * tags can be timing information or anything
	 *
	 * @param Key key to add the tag to
	 * @param Tag tag to add to the key
	 */
	virtual void AddTag(const FName& Key, const FName& Tag) = 0;

	/**
	* AddTag
	* add a tag to a key, the tags will be saved out with the key
	* tags can be timing information or anything
	*
	* @param Key key to add the tag to
	* @param Tag tag to add to the key
	*/
	virtual void AddTagValue(const FName& Key, const FName& Tag, const FString& Value) = 0;

	/**
	 * SaveStatsAsCSV
	 * Save stats in a CSV file
	 * 
	 * @param Filename file name to save comma delimited stats to 
	 * @return true if succeeded
	 */
	virtual bool SaveStatsAsCSV(const FString& Filename) = 0;
};



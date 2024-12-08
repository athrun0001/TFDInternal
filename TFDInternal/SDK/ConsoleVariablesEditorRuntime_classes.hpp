#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConsoleVariablesEditorRuntime

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "ConsoleVariablesEditorRuntime_structs.hpp"


namespace SDK
{

// Class ConsoleVariablesEditorRuntime.ConsoleVariablesAsset
// 0x0028 (0x0050 - 0x0028)
class UConsoleVariablesAsset final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 VariableCollectionDescription;                     // 0x0030(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FConsoleVariablesEditorAssetSaveData> SavedCommands;                                     // 0x0040(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	void AddOrSetConsoleObjectSavedData(const struct FConsoleVariablesEditorAssetSaveData& InData);
	void CopyFrom(const class UConsoleVariablesAsset* InAssetToCopy);
	bool RemoveConsoleVariable(const class FString& InCommandString);
	void ReplaceSavedCommands(const TArray<struct FConsoleVariablesEditorAssetSaveData>& Replacement);
	void SetVariableCollectionDescription(const class FString& InVariableCollectionDescription);

	void ExecuteSavedCommands(class UObject* WorldContextObject, bool bOnlyIncludeChecked) const;
	bool FindSavedDataByCommandString(const class FString& InCommandString, struct FConsoleVariablesEditorAssetSaveData* OutValue, const ESearchCase SearchCase) const;
	const TArray<struct FConsoleVariablesEditorAssetSaveData> GetSavedCommands() const;
	class FString GetSavedCommandsAsCommaSeparatedString(bool bOnlyIncludeChecked) const;
	TArray<class FString> GetSavedCommandsAsStringArray(bool bOnlyIncludeChecked) const;
	int32 GetSavedCommandsCount() const;
	class FString GetVariableCollectionDescription() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConsoleVariablesAsset">();
	}
	static class UConsoleVariablesAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConsoleVariablesAsset>();
	}
};

}


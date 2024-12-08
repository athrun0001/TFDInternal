#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Level_PreviewActor_LevelInstance_4

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Level_PreviewActor_LevelInstance_4.Level_PreviewActor_C
// 0x0010 (0x0260 - 0x0250)
class ALevel_PreviewActor_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_CharacterPreviewStageInventory_C*   BP_CharacterPreviewStageInventory_4_ExecuteUbergraph_Level_PreviewActor_RefProperty; // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Level_PreviewActor(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Level_PreviewActor_C">();
	}
	static class ALevel_PreviewActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALevel_PreviewActor_C>();
	}
};

}


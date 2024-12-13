#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_Viessa_Active04

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Skill_SpawnPreviewBase_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_Viessa_Active04.Skill_Viessa_Active04_C
// 0x0050 (0x03F8 - 0x03A8)
class USkill_Viessa_Active04_C final : public USkill_SpawnPreviewBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Skill_Viessa_Active04_C;            // 0x03A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        AOECreationDistance;                               // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  Forwarding_Operation_Tags;                         // 0x03B8(0x0020)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	struct FVector                                SpawnLocation;                                     // 0x03D8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E4[0x4];                                      // 0x03E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1AbilityTask_PlayMontageAndWait*      SetupMontageTask;                                  // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 SetupUpperBodyLayer;                               // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Spawn_Impl(const struct FVector& SpawnLocation_0);
	void OnEventReceived_6A105ED84674738EB104548BD67BF1F1(const struct FM1AbilityEvent& Event);
	void OnEventReceived_20C8E777464885DE6C11ADBA74A53C1F(const struct FM1AbilityEvent& Event);
	void OnCompleted_6A105ED84674738EB104548BD67BF1F1(const struct FM1AbilityEvent& Event);
	void OnCompleted_20C8E777464885DE6C11ADBA74A53C1F(const struct FM1AbilityEvent& Event);
	void OnBlendOut_6A105ED84674738EB104548BD67BF1F1(const struct FM1AbilityEvent& Event);
	void OnBlendOut_20C8E777464885DE6C11ADBA74A53C1F(const struct FM1AbilityEvent& Event);
	void ExecuteUbergraph_Skill_Viessa_Active04(int32 EntryPoint);
	void BP_OnDeactivated(bool bCancelled);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_Viessa_Active04_C">();
	}
	static class USkill_Viessa_Active04_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_Viessa_Active04_C>();
	}
};

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_Gley_Active01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_Gley_Active01.Skill_Gley_Active01_C
// 0x0030 (0x0368 - 0x0338)
class USkill_Gley_Active01_C final : public UM1SkillAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                           EnterBerserkAnim;                                  // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           LeaveBerserkAnim;                                  // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityId                           BerserkStatusEffectId;                             // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UM1AbilityTask_LocalWaitInput*          InputTask;                                         // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ServerLeaveBerserk();
	void ProcessLeaveBerserk();
	void OnInput_0F00A703411DA47A5747F49EA77BB051();
	void OnFunctionalTest();
	void OnEventReceived_D35C23A34345F1837530B9A925AC8F60(const struct FM1AbilityEvent& Event);
	void OnEventReceived_01A113B5491FA31DEC0FA38F3D2B6BFC(const struct FM1AbilityEvent& Event);
	void OnCompleted_D35C23A34345F1837530B9A925AC8F60(const struct FM1AbilityEvent& Event);
	void OnCompleted_01A113B5491FA31DEC0FA38F3D2B6BFC(const struct FM1AbilityEvent& Event);
	void OnBlendOut_D35C23A34345F1837530B9A925AC8F60(const struct FM1AbilityEvent& Event);
	void OnBlendOut_01A113B5491FA31DEC0FA38F3D2B6BFC(const struct FM1AbilityEvent& Event);
	void NetMulticastLeaveBerserk();
	void ExecuteUbergraph_Skill_Gley_Active01(int32 EntryPoint);
	void Clear();
	void BP_OnDeactivated(bool bCancelled);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_Gley_Active01_C">();
	}
	static class USkill_Gley_Active01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_Gley_Active01_C>();
	}
};

}


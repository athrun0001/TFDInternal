#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatusEffect_Gley_RequiemBerserk

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass StatusEffect_Gley_RequiemBerserk.StatusEffect_Gley_RequiemBerserk_C
// 0x0008 (0x0388 - 0x0380)
class UStatusEffect_Gley_RequiemBerserk_C final : public UM1SimpleStatusEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_StatusEffect_Gley_RequiemBerserk(int32 EntryPoint);
	void BP_OnDeactivated(bool bCancelled);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatusEffect_Gley_RequiemBerserk_C">();
	}
	static class UStatusEffect_Gley_RequiemBerserk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatusEffect_Gley_RequiemBerserk_C>();
	}
};

}


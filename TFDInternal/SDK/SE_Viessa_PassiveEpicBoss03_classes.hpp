#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_Viessa_PassiveEpicBoss03

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SimpleStatusEffect_VFXPlay_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SE_Viessa_PassiveEpicBoss03.SE_Viessa_PassiveEpicBoss03_C
// 0x0010 (0x03B8 - 0x03A8)
class USE_Viessa_PassiveEpicBoss03_C final : public USimpleStatusEffect_VFXPlay_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_SE_Viessa_PassiveEpicBoss03_C;      // 0x03A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Rate;                                              // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SE_Viessa_PassiveEpicBoss03(int32 EntryPoint);
	void BP_OnDeactivated(bool bCancelled);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SE_Viessa_PassiveEpicBoss03_C">();
	}
	static class USE_Viessa_PassiveEpicBoss03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USE_Viessa_PassiveEpicBoss03_C>();
	}
};

}


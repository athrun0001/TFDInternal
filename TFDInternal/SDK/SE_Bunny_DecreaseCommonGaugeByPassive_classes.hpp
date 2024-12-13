#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_Bunny_DecreaseCommonGaugeByPassive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SE_Bunny_GaugeDeltaByMaxRatio_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SE_Bunny_DecreaseCommonGaugeByPassive.SE_Bunny_DecreaseCommonGaugeByPassive_C
// 0x0010 (0x0380 - 0x0370)
class USE_Bunny_DecreaseCommonGaugeByPassive_C final : public USE_Bunny_GaugeDeltaByMaxRatio_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_SE_Bunny_DecreaseCommonGaugeByPassive_C; // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UM1DataVisualFX*                        DischargeVFX;                                      // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SE_Bunny_DecreaseCommonGaugeByPassive(int32 EntryPoint);
	void BP_OnDeactivated(bool bCancelled);
	void BP_OnActivated();

	void CanPerformTick(bool* bCanApply) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SE_Bunny_DecreaseCommonGaugeByPassive_C">();
	}
	static class USE_Bunny_DecreaseCommonGaugeByPassive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USE_Bunny_DecreaseCommonGaugeByPassive_C>();
	}
};

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_Bunny_IncreaseCommonGaugeByJoyride

#include "Basic.hpp"

#include "SE_Bunny_IncreaseCommonGaugeBase_classes.hpp"
#include "Engine_structs.hpp"
#include "M1_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass SE_Bunny_IncreaseCommonGaugeByJoyride.SE_Bunny_IncreaseCommonGaugeByJoyride_C
// 0x0010 (0x0370 - 0x0360)
class USE_Bunny_IncreaseCommonGaugeByJoyride_C final : public USE_Bunny_IncreaseCommonGaugeBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_SE_Bunny_IncreaseCommonGaugeByJoyride_C; // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UM1DataVisualFX*                        TrailVFX;                                          // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash)

public:
	void OnActiveTick(float DeltaSeconds);
	void ExecuteUbergraph_SE_Bunny_IncreaseCommonGaugeByJoyride(int32 EntryPoint);
	void BP_OnDeactivated(bool bCancelled);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SE_Bunny_IncreaseCommonGaugeByJoyride_C">();
	}
	static class USE_Bunny_IncreaseCommonGaugeByJoyride_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USE_Bunny_IncreaseCommonGaugeByJoyride_C>();
	}
};

}

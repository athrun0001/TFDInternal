#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DespawnMaterialManipulator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DespawnMaterialManipulator.BP_DespawnMaterialManipulator_C
// 0x0010 (0x0120 - 0x0110)
class UBP_DespawnMaterialManipulator_C final : public UM1DespawnMaterialManipulator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0110(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        DefaultDuration;                                   // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetDuration(double* Duration_0);
	void ExecuteUbergraph_BP_DespawnMaterialManipulator(int32 EntryPoint);
	void BP_UpdateOverTime(float InElapsedTime);
	void BP_Init();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DespawnMaterialManipulator_C">();
	}
	static class UBP_DespawnMaterialManipulator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DespawnMaterialManipulator_C>();
	}
};

}


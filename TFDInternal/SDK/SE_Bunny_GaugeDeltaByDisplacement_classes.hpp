#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_Bunny_GaugeDeltaByDisplacement

#include "Basic.hpp"

#include "SE_Bunny_GaugeDeltaBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SE_Bunny_GaugeDeltaByDisplacement.SE_Bunny_GaugeDeltaByDisplacement_C
// 0x0008 (0x0360 - 0x0358)
class USE_Bunny_GaugeDeltaByDisplacement_C : public USE_Bunny_GaugeDeltaBase_C
{
public:
	double                                        RatePerMeter;                                      // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetTickRate(double* TickRate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SE_Bunny_GaugeDeltaByDisplacement_C">();
	}
	static class USE_Bunny_GaugeDeltaByDisplacement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USE_Bunny_GaugeDeltaByDisplacement_C>();
	}
};

}

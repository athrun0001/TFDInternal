#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatusEffect_Stun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SimpleStatusEffect_VFXPlay_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass StatusEffect_Stun.StatusEffect_Stun_C
// 0x0008 (0x03B0 - 0x03A8)
class UStatusEffect_Stun_C final : public USimpleStatusEffect_VFXPlay_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_StatusEffect_Stun_C;                // 0x03A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_StatusEffect_Stun(int32 EntryPoint);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatusEffect_Stun_C">();
	}
	static class UStatusEffect_Stun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatusEffect_Stun_C>();
	}
};

}

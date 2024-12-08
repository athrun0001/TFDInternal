#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimpleStatusEffect_VFXPlay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SimpleStatusEffect_VFXPlay.SimpleStatusEffect_VFXPlay_C
// 0x0028 (0x03A8 - 0x0380)
class USimpleStatusEffect_VFXPlay_C : public UM1SimpleStatusEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UM1DataVisualFX*                        VFXAsset;                                          // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          SFXAsset;                                          // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          SFXAsset_Deactive;                                 // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          SFXAsset_Period;                                   // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SimpleStatusEffect_VFXPlay(int32 EntryPoint);
	void BP_OnPeriod();
	void BP_OnDeactivated(bool bCancelled);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SimpleStatusEffect_VFXPlay_C">();
	}
	static class USimpleStatusEffect_VFXPlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleStatusEffect_VFXPlay_C>();
	}
};

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_RevivalLimit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_RevivalLimit.UI_Mission_RevivalLimit_C
// 0x0020 (0x0728 - 0x0708)
class UUI_Mission_RevivalLimit_C final : public UM1UIMissionRetriableTask
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_OpenClose;                                  // 0x0710(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           M1TextBlock;                                       // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Set_Sub_Type(uint8 InSubType);
	void SequenceEvent__ENTRYPOINTUI_Mission_RevivalLimit();
	void Finished_D86FE00844AB51B6EDAF13B8133A1A27();
	void ExecuteUbergraph_UI_Mission_RevivalLimit(int32 EntryPoint);
	void Construct();
	void BP_widget_playAkEvent();
	void BP_SetMessageType(EM1UIMissionTaskMessageType InType);
	void BP_PlayMissionRetriableTaskAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_RevivalLimit_C">();
	}
	static class UUI_Mission_RevivalLimit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_RevivalLimit_C>();
	}
};

}

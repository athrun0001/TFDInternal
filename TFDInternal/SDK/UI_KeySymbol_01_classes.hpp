#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_KeySymbol_01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_KeySymbol_01.UI_KeySymbol_01_C
// 0x0040 (0x07A0 - 0x0760)
class UUI_KeySymbol_01_C : public UM1UIKeySymbol
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0760(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Start;                                      // 0x0768(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ANIM_HoldingStart;                                 // 0x0770(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Anchor;                                      // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               P_Key;                                             // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Panel_HoldingProgress;                             // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Widget_HoldingProgress;                            // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Dummy_ShowProgress;                                // 0x0798(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_ChangeDimmedUI(const bool InDimmed);
	void BP_ChangeProgressUI(const bool InStart, const float InDuration);
	void BP_SetProgressUI(const bool bUseProgress);
	void ExecuteUbergraph_UI_KeySymbol_01(int32 EntryPoint);
	void KeySymbol_Change02(EM1ButtonUIType EM1Button);
	void PreConstruct(bool IsDesignTime);
	void ResetProgress();
	void SequenceEvent_0();
	void SequenceEvent__ENTRYPOINTUI_KeySymbol_01();
	void UISetKeyColor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_KeySymbol_01_C">();
	}
	static class UUI_KeySymbol_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_KeySymbol_01_C>();
	}
};

}


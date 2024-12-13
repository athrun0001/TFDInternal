#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_KeyButton_Chatting

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_KeyButton_Chatting.UI_KeyButton_Chatting_C
// 0x0018 (0x0908 - 0x08F0)
class UUI_KeyButton_Chatting_C final : public UM1UIKeyButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               Panel_SizeBox;                                     // 0x08F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowText;                                         // 0x0900(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetTextureAndOpacity(class UImage* Target, class UTexture* PaperTexture, double Opacity);
	void SetTextColor(const struct FSlateColor& KeyText, const struct FSlateColor& ButtonText);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_KeyButton_Chatting(int32 EntryPoint);
	void BP_ChangeDimmedUI(const bool InDimmed);
	void BP_ChangeButtonUI(EM1ButtonUIType InType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_KeyButton_Chatting_C">();
	}
	static class UUI_KeyButton_Chatting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_KeyButton_Chatting_C>();
	}
};

}


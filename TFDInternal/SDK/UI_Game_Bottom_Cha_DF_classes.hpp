#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_Bottom_Cha_DF

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Game_Bottom_Cha_DF.UI_Game_Bottom_Cha_DF_C
// 0x0030 (0x0738 - 0x0708)
class UUI_Game_Bottom_Cha_DF_C final : public UM1UIWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UI_ANIM_Open;                                      // 0x0710(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UM1TextBlock*                           Text001;                                           // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                            In_Color_and_Opacity;                              // 0x0720(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void SetAmount(double InValue);
	void ExecuteUbergraph_UI_Game_Bottom_Cha_DF(int32 EntryPoint);
	void CustomEvent_0();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Game_Bottom_Cha_DF_C">();
	}
	static class UUI_Game_Bottom_Cha_DF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Game_Bottom_Cha_DF_C>();
	}
};

}

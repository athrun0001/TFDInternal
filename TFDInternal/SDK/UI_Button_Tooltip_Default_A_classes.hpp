#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Button_Tooltip_Default_A

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Button_Tooltip_Default_A.UI_Button_Tooltip_Default_A_C
// 0x0028 (0x0750 - 0x0728)
class UUI_Button_Tooltip_Default_A_C : public UM1UIButtonDetails
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0728(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0730(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USpacer*                                Spacer_40;                                         // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_Back_002_C*                    UI_Deco_Back_002;                                  // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Description_Hidden;                                // 0x0748(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Title_Hidden;                                      // 0x0749(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetText(const class FString& InUIKey);
	void PreConstruct(bool IsDesignTime);
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);
	void ExecuteUbergraph_UI_Button_Tooltip_Default_A(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Button_Tooltip_Default_A_C">();
	}
	static class UUI_Button_Tooltip_Default_A_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Button_Tooltip_Default_A_C>();
	}
};

}

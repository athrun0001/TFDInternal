#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemIconOnly

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "M1Data_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ItemIconOnly.UI_ItemIconOnly_C
// 0x0048 (0x0750 - 0x0708)
class UUI_ItemIconOnly_C final : public UM1UIWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ImageIcon;                                         // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemIconOnly_Rune_C*                RuneFrame;                                         // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleIcon;                                         // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherIcon;                                      // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EM1ItemType                                   DummyPreview;                                      // 0x0730(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRuneFrameView;                                   // 0x0731(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsScaleToFitX;                                     // 0x0732(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_733[0x1];                                      // 0x0733(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              IconSize_Default;                                  // 0x0734(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              IconSize_Square;                                   // 0x073C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              IconSize_WeaponBig;                                // 0x0744(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ShowEquippedIcon(class UM1UIDataItemInfo* InItemInfo);
	void SetUIItemIconType(class UM1UIDataItemInfo* UIData_0, EM1ItemIconType IconType);
	void SetUIIconStretch(bool NewParam);
	void SetUIIconScaleFit(bool ScaleToFitX);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_ItemIconOnly(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ItemIconOnly_C">();
	}
	static class UUI_ItemIconOnly_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ItemIconOnly_C>();
	}
};

}


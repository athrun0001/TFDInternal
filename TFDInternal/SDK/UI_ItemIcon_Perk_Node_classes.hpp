#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemIcon_Perk_Node

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ItemIcon_Perk_Node.UI_ItemIcon_Perk_Node_C
// 0x0048 (0x0750 - 0x0708)
class UUI_ItemIcon_Perk_Node_C final : public UM1UIItemLevelIcon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                        BG;                                                // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Fill;                                              // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Fill_Enchant;                                      // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Fill_1;                                      // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Fill_ef;                                     // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Fill_ef_Ench;                                // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Fill_Ench;                                   // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetFill(bool Fill_0);
	void SetEnchantPreview(bool InEnchantPreview);
	void SetBgStyle(bool ViewBgDeco);
	void Set_Effect(bool ViewEffect);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_ItemIcon_Perk_Node(int32 EntryPoint);
	void Construct();
	void BP_TurnOn(const bool bIsMaxLevel);
	void BP_TurnOff();
	void BP_ShowGlowingEffect(const bool bShow);
	void SetSize(const struct FVector2D& Size);
	void SetMax(bool Max);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ItemIcon_Perk_Node_C">();
	}
	static class UUI_ItemIcon_Perk_Node_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ItemIcon_Perk_Node_C>();
	}
};

}


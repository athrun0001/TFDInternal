#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PerkList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_PerkList.UI_PerkList_C
// 0x0038 (0x0750 - 0x0718)
class UUI_PerkList_C final : public UM1UIPerkList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0718(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               P_PerkList;                                        // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Perk_Panel;                                        // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_PerkListItem_C*                     UI_PerkListItem_00;                                // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         IconSize;                                          // 0x0738(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                UI_PerkListPadding;                                // 0x073C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void SetPerkItemSize();
	void SetPanelAlign();
	void SetDataImpl(class UM1UIData* InData);
	void PreConstruct(bool IsDesignTime);
	void PerkWidgetOffIfHasNoPerk(class UM1UIData* InData);
	void ExecuteUbergraph_UI_PerkList(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_PerkList_C">();
	}
	static class UUI_PerkList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_PerkList_C>();
	}
};

}


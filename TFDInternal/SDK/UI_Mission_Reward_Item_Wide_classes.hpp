#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Reward_Item_Wide

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"
#include "M1_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Reward_Item_Wide.UI_Mission_Reward_Item_Wide_C
// 0x0068 (0x09A8 - 0x0940)
class UUI_Mission_Reward_Item_Wide_C final : public UM1UIMissionRewardItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0940(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_ItemProbability;                            // 0x0948(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ArcheType;                                   // 0x0950(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ElementalType;                               // 0x0958(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_RoundType;                                   // 0x0960(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_RuneType;                                    // 0x0968(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Panel_Arche;                                       // 0x0970(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Panel_Elemental;                                   // 0x0978(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Panel_Rune;                                        // 0x0980(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_ArcheType;                                      // 0x0988(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_ElementalType;                                  // 0x0990(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_RoundType;                                      // 0x0998(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_Rune;                                           // 0x09A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Mission_Reward_Item_Wide(int32 EntryPoint);
	void BP_SetRuneDetails(EM1RuneClassType InClassType);
	void BP_SetReactorDetails(EM1ElementalDamageChannel InElementalType, EM1SkillArcheType InArcheType);
	void BP_SetWeaponDetails(class UTexture2D* InTexture, const class FString& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Reward_Item_Wide_C">();
	}
	static class UUI_Mission_Reward_Item_Wide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Reward_Item_Wide_C>();
	}
};

}


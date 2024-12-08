#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_InvasionDungeon_TimeAttack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Game_InvasionDungeon_TimeAttack.UI_Game_InvasionDungeon_TimeAttack_C
// 0x0040 (0x0778 - 0x0738)
class UUI_Game_InvasionDungeon_TimeAttack_C final : public UM1UIInvasionDungeonScore
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0738(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0740(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               P_Panel;                                           // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               P_Progress;                                        // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               P_Time;                                            // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InvasionDungeon_TimeAttackIcon_Item_C* UI_InvasionDungeon_TimeAttackIconItem_Bronze;      // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InvasionDungeon_TimeAttackIcon_Item_C* UI_InvasionDungeon_TimeAttackIconItem_Gold;        // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InvasionDungeon_TimeAttackIcon_Item_C* UI_InvasionDungeon_TimeAttackIconItem_Silver;      // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void UISet_Default(bool Set_Visible);
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);
	void ExecuteUbergraph_UI_Game_InvasionDungeon_TimeAttack(int32 EntryPoint);
	void Construct();
	void BP_SetOpacityToOne(bool bVisible);
	void BP_ChangeActiveTimeAttack(int32 InUniqueId);

	TArray<class UM1UIInvasionDungeonScoreItem*> BP_GetTimeAttackItems() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Game_InvasionDungeon_TimeAttack_C">();
	}
	static class UUI_Game_InvasionDungeon_TimeAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Game_InvasionDungeon_TimeAttack_C>();
	}
};

}


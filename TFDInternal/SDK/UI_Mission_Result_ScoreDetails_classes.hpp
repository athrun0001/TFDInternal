#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Result_ScoreDetails

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Result_ScoreDetails.UI_Mission_Result_ScoreDetails_C
// 0x0010 (0x0720 - 0x0710)
class UUI_Mission_Result_ScoreDetails_C final : public UM1UIMissionResultScoreDetails
{
public:
	class UM1TextBlock*                           TB_Name;                                           // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_TitleLine_04_C*                UI_Deco_TitleLine_04;                              // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Result_ScoreDetails_C">();
	}
	static class UUI_Mission_Result_ScoreDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Result_ScoreDetails_C>();
	}
};

}


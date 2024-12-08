#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_FieldContents_Start

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_FieldContents_Start.UI_FieldContents_Start_C
// 0x0018 (0x0720 - 0x0708)
class UUI_FieldContents_Start_C final : public UM1UIChildMissionGuide
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_OpenClose;                                    // 0x0710(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Title;                                        // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Set_Sub_Type(EM1MissionSubType InSubType);
	void SequenceEvent__ENTRYPOINTUI_FieldContents_Start();
	void PlayAnimOpenClose();
	void Finished_3D837E874CB35BAF30CD30A5B4CCB360();
	void ExecuteUbergraph_UI_FieldContents_Start(int32 EntryPoint);
	void BP_widget_playAkEvent();

	class UWidgetAnimation* GetEndAnimation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_FieldContents_Start_C">();
	}
	static class UUI_FieldContents_Start_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_FieldContents_Start_C>();
	}
};

}


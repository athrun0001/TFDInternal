#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_FieldContents_Success

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_FieldContents_Success.UI_FieldContents_Success_C
// 0x0020 (0x0728 - 0x0708)
class UUI_FieldContents_Success_C final : public UM1UIChildMissionGuide
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_OpenClose;                                    // 0x0710(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Bg;                                           // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Title;                                        // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetSubType(EM1MissionSubType InSubType);
	void SequenceEvent__ENTRYPOINTUI_FieldContents_Success();
	void PreConstruct(bool IsDesignTime);
	void PlayAnimOpenClose();
	void Finished_21D2185546E0892F4C7CE4820C9C59B8();
	void ExecuteUbergraph_UI_FieldContents_Success(int32 EntryPoint);
	void Construct();
	void BP_widget_playAkEvent(class UAkAudioEvent* AkEvent);

	class UWidgetAnimation* GetEndAnimation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_FieldContents_Success_C">();
	}
	static class UUI_FieldContents_Success_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_FieldContents_Success_C>();
	}
};

}


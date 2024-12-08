#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BaseMission_Marker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_BaseMission_Marker.UI_BaseMission_Marker_C
// 0x0018 (0x0778 - 0x0760)
class UUI_BaseMission_Marker_C final : public UM1UIBaseMissionMarker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0760(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 DirectionIcon;                                     // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Panel_Marker;                                      // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetUIState(bool IsDim);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_BaseMission_Marker(int32 EntryPoint);
	void Construct();
	void BP_UpdateVisibility(bool bIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_BaseMission_Marker_C">();
	}
	static class UUI_BaseMission_Marker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_BaseMission_Marker_C>();
	}
};

}


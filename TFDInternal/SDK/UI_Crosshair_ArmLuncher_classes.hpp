#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Crosshair_ArmLuncher

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WB_CrosshairBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Crosshair_ArmLuncher.UI_Crosshair_ArmLuncher_C
// 0x0030 (0x0758 - 0x0728)
class UUI_Crosshair_ArmLuncher_C final : public UWB_CrosshairBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UI_Crosshair_ArmLuncher_C;          // 0x0728(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image;                                             // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_54;                                          // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Crosshair_ArmLuncher(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Crosshair_ArmLuncher_C">();
	}
	static class UUI_Crosshair_ArmLuncher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Crosshair_ArmLuncher_C>();
	}
};

}

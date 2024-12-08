#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_EliteSkillIcon

#include "Basic.hpp"

#include "UI_EliteSkillIcon_classes.hpp"
#include "UI_EliteSkillIcon_parameters.hpp"


namespace SDK
{

// Function UI_EliteSkillIcon.UI_EliteSkillIcon_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_EliteSkillIcon_C::SetIcon(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_EliteSkillIcon_C", "SetIcon");

	Params::UI_EliteSkillIcon_C_SetIcon Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_EliteSkillIcon.UI_EliteSkillIcon_C.SetDataImpl
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UM1UIData*                        InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_EliteSkillIcon_C::SetDataImpl(class UM1UIData* InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_EliteSkillIcon_C", "SetDataImpl");

	Params::UI_EliteSkillIcon_C_SetDataImpl Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_EliteSkillIcon.UI_EliteSkillIcon_C.ExecuteUbergraph_UI_EliteSkillIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EliteSkillIcon_C::ExecuteUbergraph_UI_EliteSkillIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_EliteSkillIcon_C", "ExecuteUbergraph_UI_EliteSkillIcon");

	Params::UI_EliteSkillIcon_C_ExecuteUbergraph_UI_EliteSkillIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}


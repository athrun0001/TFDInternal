#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_RuneDetails

#include "Basic.hpp"

#include "UI_RuneDetails_classes.hpp"
#include "UI_RuneDetails_parameters.hpp"


namespace SDK
{

// Function UI_RuneDetails.UI_RuneDetails_C.UILcoked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLocked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RuneDetails_C::UILcoked(bool IsLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RuneDetails_C", "UILcoked");

	Params::UI_RuneDetails_C_UILcoked Parms{};

	Parms.IsLocked = IsLocked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RuneDetails.UI_RuneDetails_C.SetRuneSocketTypeImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EM1RuneSocketType                       RuneSocketType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RuneDetails_C::SetRuneSocketTypeImage(EM1RuneSocketType RuneSocketType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RuneDetails_C", "SetRuneSocketTypeImage");

	Params::UI_RuneDetails_C_SetRuneSocketTypeImage Parms{};

	Parms.RuneSocketType = RuneSocketType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RuneDetails.UI_RuneDetails_C.SetGroupIdText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           GroupIdString                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_RuneDetails_C::SetGroupIdText(const class FString& GroupIdString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RuneDetails_C", "SetGroupIdText");

	Params::UI_RuneDetails_C_SetGroupIdText Parms{};

	Parms.GroupIdString = std::move(GroupIdString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RuneDetails.UI_RuneDetails_C.SetExclusiveWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM1UIDataItemInfo_Rune*           RuneData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_RuneDetails_C::SetExclusiveWeapon(class UM1UIDataItemInfo_Rune* RuneData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RuneDetails_C", "SetExclusiveWeapon");

	Params::UI_RuneDetails_C_SetExclusiveWeapon Parms{};

	Parms.RuneData = RuneData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RuneDetails.UI_RuneDetails_C.SetDataImpl
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UM1UIData*                        InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_RuneDetails_C::SetDataImpl(class UM1UIData* InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RuneDetails_C", "SetDataImpl");

	Params::UI_RuneDetails_C_SetDataImpl Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RuneDetails.UI_RuneDetails_C.Set Enchant Level 
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RuneDetails_C::Set_Enchant_Level_(int32 CurrentLevel, int32 MaxLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RuneDetails_C", "Set Enchant Level ");

	Params::UI_RuneDetails_C_Set_Enchant_Level_ Parms{};

	Parms.CurrentLevel = CurrentLevel;
	Parms.MaxLevel = MaxLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RuneDetails.UI_RuneDetails_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RuneDetails_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RuneDetails_C", "PreConstruct");

	Params::UI_RuneDetails_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RuneDetails.UI_RuneDetails_C.OnEventWidgetOpen
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1WidgetAnimDirection                  InDirection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RuneDetails_C::OnEventWidgetOpen(EM1WidgetAnimDirection InDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RuneDetails_C", "OnEventWidgetOpen");

	Params::UI_RuneDetails_C_OnEventWidgetOpen Parms{};

	Parms.InDirection = InDirection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RuneDetails.UI_RuneDetails_C.ExecuteUbergraph_UI_RuneDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RuneDetails_C::ExecuteUbergraph_UI_RuneDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RuneDetails_C", "ExecuteUbergraph_UI_RuneDetails");

	Params::UI_RuneDetails_C_ExecuteUbergraph_UI_RuneDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RuneDetails.UI_RuneDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_RuneDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RuneDetails_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_RuneDetails.UI_RuneDetails_C.BP_ShowAsAttachedToNumerousCharacterOrWeapon
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsWeaponRune                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RuneDetails_C::BP_ShowAsAttachedToNumerousCharacterOrWeapon(const bool bIsWeaponRune)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RuneDetails_C", "BP_ShowAsAttachedToNumerousCharacterOrWeapon");

	Params::UI_RuneDetails_C_BP_ShowAsAttachedToNumerousCharacterOrWeapon Parms{};

	Parms.bIsWeaponRune = bIsWeaponRune;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RuneDetails.UI_RuneDetails_C.BP_ShowAsAttachedToEquippedCharacterOrWeapon
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsWeaponRune                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RuneDetails_C::BP_ShowAsAttachedToEquippedCharacterOrWeapon(const bool bIsWeaponRune)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RuneDetails_C", "BP_ShowAsAttachedToEquippedCharacterOrWeapon");

	Params::UI_RuneDetails_C_BP_ShowAsAttachedToEquippedCharacterOrWeapon Parms{};

	Parms.bIsWeaponRune = bIsWeaponRune;

	UObject::ProcessEvent(Func, &Parms);
}

}


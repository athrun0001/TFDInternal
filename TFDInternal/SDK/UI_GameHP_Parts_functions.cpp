#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameHP_Parts

#include "Basic.hpp"

#include "UI_GameHP_Parts_classes.hpp"
#include "UI_GameHP_Parts_parameters.hpp"


namespace SDK
{

// Function UI_GameHP_Parts.UI_GameHP_Parts_C.UpdateHPGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  HPRate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Parts_C::UpdateHPGauge(double HPRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Parts_C", "UpdateHPGauge");

	Params::UI_GameHP_Parts_C_UpdateHPGauge Parms{};

	Parms.HPRate = HPRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Parts.UI_GameHP_Parts_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GameHP_Parts_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Parts_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameHP_Parts.UI_GameHP_Parts_C.ExecuteUbergraph_UI_GameHP_Parts
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Parts_C::ExecuteUbergraph_UI_GameHP_Parts(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Parts_C", "ExecuteUbergraph_UI_GameHP_Parts");

	Params::UI_GameHP_Parts_C_ExecuteUbergraph_UI_GameHP_Parts Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Parts.UI_GameHP_Parts_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GameHP_Parts_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Parts_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

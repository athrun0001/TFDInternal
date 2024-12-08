#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_InclusiveItemDetails

#include "Basic.hpp"

#include "UI_InclusiveItemDetails_classes.hpp"
#include "UI_InclusiveItemDetails_parameters.hpp"


namespace SDK
{

// Function UI_InclusiveItemDetails.UI_InclusiveItemDetails_C.OnEventWidgetOpen
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1WidgetAnimDirection                  InDirection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_InclusiveItemDetails_C::OnEventWidgetOpen(EM1WidgetAnimDirection InDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_InclusiveItemDetails_C", "OnEventWidgetOpen");

	Params::UI_InclusiveItemDetails_C_OnEventWidgetOpen Parms{};

	Parms.InDirection = InDirection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_InclusiveItemDetails.UI_InclusiveItemDetails_C.ExecuteUbergraph_UI_InclusiveItemDetails
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_InclusiveItemDetails_C::ExecuteUbergraph_UI_InclusiveItemDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_InclusiveItemDetails_C", "ExecuteUbergraph_UI_InclusiveItemDetails");

	Params::UI_InclusiveItemDetails_C_ExecuteUbergraph_UI_InclusiveItemDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_InclusiveItemDetails.UI_InclusiveItemDetails_C.BP_GetTypedItemDetails
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UM1UIData*                        InUIData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UM1UIWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UM1UIWidget* UUI_InclusiveItemDetails_C::BP_GetTypedItemDetails(class UM1UIData* InUIData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_InclusiveItemDetails_C", "BP_GetTypedItemDetails");

	Params::UI_InclusiveItemDetails_C_BP_GetTypedItemDetails Parms{};

	Parms.InUIData = InUIData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


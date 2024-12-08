#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_Wire

#include "Basic.hpp"

#include "Skill_Wire_classes.hpp"
#include "Skill_Wire_parameters.hpp"


namespace SDK
{

// Function Skill_Wire.Skill_Wire_C.ToggleWireDebugPrintLog
// (Public, BlueprintCallable, BlueprintEvent)

void USkill_Wire_C::ToggleWireDebugPrintLog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "ToggleWireDebugPrintLog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_Wire.Skill_Wire_C.ToggleWireDebugIgnoreClientMoveError
// (Public, BlueprintCallable, BlueprintEvent)

void USkill_Wire_C::ToggleWireDebugIgnoreClientMoveError()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "ToggleWireDebugIgnoreClientMoveError");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_Wire.Skill_Wire_C.SetTestIgnoreClientMovementError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIgnore                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Wire_C::SetTestIgnoreClientMovementError(bool bIgnore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "SetTestIgnoreClientMovementError");

	Params::Skill_Wire_C_SetTestIgnoreClientMovementError Parms{};

	Parms.bIgnore = bIgnore;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Wire.Skill_Wire_C.SetOverrideVelocity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector USkill_Wire_C::SetOverrideVelocity(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "SetOverrideVelocity");

	Params::Skill_Wire_C_SetOverrideVelocity Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Skill_Wire.Skill_Wire_C.SetOverrideInputVector
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector USkill_Wire_C::SetOverrideInputVector()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "SetOverrideInputVector");

	Params::Skill_Wire_C_SetOverrideInputVector Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Skill_Wire.Skill_Wire_C.ServerReserveFinishAction
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InCancelReserved                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InCanceledFromJump                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          LastVelocity_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Wire_C::ServerReserveFinishAction(bool InCancelReserved, bool InCanceledFromJump, const struct FVector& LastVelocity_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "ServerReserveFinishAction");

	Params::Skill_Wire_C_ServerReserveFinishAction Parms{};

	Parms.InCancelReserved = InCancelReserved;
	Parms.InCanceledFromJump = InCanceledFromJump;
	Parms.LastVelocity_0 = std::move(LastVelocity_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Wire.Skill_Wire_C.ServerRequestPullingStart
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          InitialLocation_0                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  InitialSpeed_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Wire_C::ServerRequestPullingStart(const struct FVector& InitialLocation_0, double InitialSpeed_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "ServerRequestPullingStart");

	Params::Skill_Wire_C_ServerRequestPullingStart Parms{};

	Parms.InitialLocation_0 = std::move(InitialLocation_0);
	Parms.InitialSpeed_0 = InitialSpeed_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Wire.Skill_Wire_C.ReserveFinishAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCanceled_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bWithJump                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Wire_C::ReserveFinishAction(bool bCanceled_0, bool bWithJump)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "ReserveFinishAction");

	Params::Skill_Wire_C_ReserveFinishAction Parms{};

	Parms.bCanceled_0 = bCanceled_0;
	Parms.bWithJump = bWithJump;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Wire.Skill_Wire_C.RequestEndWire
// (BlueprintCallable, BlueprintEvent)

void USkill_Wire_C::RequestEndWire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "RequestEndWire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_Wire.Skill_Wire_C.ReadyPulling
// (BlueprintCallable, BlueprintEvent)

void USkill_Wire_C::ReadyPulling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "ReadyPulling");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_Wire.Skill_Wire_C.OnRep_bRepWaitServerTaggedActor
// (BlueprintCallable, BlueprintEvent)

void USkill_Wire_C::OnRep_bRepWaitServerTaggedActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "OnRep_bRepWaitServerTaggedActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_Wire.Skill_Wire_C.OnInput_FFA0F8704AA57B420BB365A52582F128
// (BlueprintCallable, BlueprintEvent)

void USkill_Wire_C::OnInput_FFA0F8704AA57B420BB365A52582F128()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "OnInput_FFA0F8704AA57B420BB365A52582F128");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_Wire.Skill_Wire_C.OnInput_0142378244F8CEC2CDF6BAB4C32321CB
// (BlueprintCallable, BlueprintEvent)

void USkill_Wire_C::OnInput_0142378244F8CEC2CDF6BAB4C32321CB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "OnInput_0142378244F8CEC2CDF6BAB4C32321CB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_Wire.Skill_Wire_C.OnFinish_DC9B7448483DD071381298A50162540C
// (BlueprintCallable, BlueprintEvent)

void USkill_Wire_C::OnFinish_DC9B7448483DD071381298A50162540C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "OnFinish_DC9B7448483DD071381298A50162540C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_Wire.Skill_Wire_C.OnChangedState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EM1WireState                            WireState_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Wire_C::OnChangedState(EM1WireState WireState_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "OnChangedState");

	Params::Skill_Wire_C_OnChangedState Parms{};

	Parms.WireState_0 = WireState_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Wire.Skill_Wire_C.OnAbilityDeactivated_B8F99BCC49F86BE7F7AB8CA2B2B8BF56
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityId                     InAbilityId                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AActor*                           Owner                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bCanceled_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Wire_C::OnAbilityDeactivated_B8F99BCC49F86BE7F7AB8CA2B2B8BF56(const struct FM1AbilityId& InAbilityId, const class AActor* Owner, bool bCanceled_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "OnAbilityDeactivated_B8F99BCC49F86BE7F7AB8CA2B2B8BF56");

	Params::Skill_Wire_C_OnAbilityDeactivated_B8F99BCC49F86BE7F7AB8CA2B2B8BF56 Parms{};

	Parms.InAbilityId = std::move(InAbilityId);
	Parms.Owner = Owner;
	Parms.bCanceled_0 = bCanceled_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Wire.Skill_Wire_C.NetmulticastAirDestFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       InTransform                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Wire_C::NetmulticastAirDestFX(class FName InName, const struct FTransform& InTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "NetmulticastAirDestFX");

	Params::Skill_Wire_C_NetmulticastAirDestFX Parms{};

	Parms.InName = InName;
	Parms.InTransform = std::move(InTransform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Wire.Skill_Wire_C.LocalPullingStart
// (BlueprintCallable, BlueprintEvent)

void USkill_Wire_C::LocalPullingStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "LocalPullingStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_Wire.Skill_Wire_C.IsOverAngleLimit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool USkill_Wire_C::IsOverAngleLimit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "IsOverAngleLimit");

	Params::Skill_Wire_C_IsOverAngleLimit Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Skill_Wire.Skill_Wire_C.GetWireCaster
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AM1WireCaster*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AM1WireCaster* USkill_Wire_C::GetWireCaster()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "GetWireCaster");

	Params::Skill_Wire_C_GetWireCaster Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Skill_Wire.Skill_Wire_C.GetOwnerCapsuleComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCapsuleComponent*                Return                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void USkill_Wire_C::GetOwnerCapsuleComp(class UCapsuleComponent** Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "GetOwnerCapsuleComp");

	Params::Skill_Wire_C_GetOwnerCapsuleComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function Skill_Wire.Skill_Wire_C.ExecuteUbergraph_Skill_Wire
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Wire_C::ExecuteUbergraph_Skill_Wire(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "ExecuteUbergraph_Skill_Wire");

	Params::Skill_Wire_C_ExecuteUbergraph_Skill_Wire Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Wire.Skill_Wire_C.DebugDrawDir
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     LineColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Dir                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Wire_C::DebugDrawDir(const struct FLinearColor& LineColor, const struct FVector& Dir)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "DebugDrawDir");

	Params::Skill_Wire_C_DebugDrawDir Parms{};

	Parms.LineColor = std::move(LineColor);
	Parms.Dir = std::move(Dir);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Wire.Skill_Wire_C.ClearMovement
// (BlueprintCallable, BlueprintEvent)

void USkill_Wire_C::ClearMovement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "ClearMovement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_Wire.Skill_Wire_C.GetDestLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector USkill_Wire_C::GetDestLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "GetDestLocation");

	Params::Skill_Wire_C_GetDestLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Skill_Wire.Skill_Wire_C.CalcMaxSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double USkill_Wire_C::CalcMaxSpeed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "CalcMaxSpeed");

	Params::Skill_Wire_C_CalcMaxSpeed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Skill_Wire.Skill_Wire_C.CalcAddtiveSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  MaxSpeed_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  TimeToMaxSpeed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  LastSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSide                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double USkill_Wire_C::CalcAddtiveSpeed(double DeltaTime, double MaxSpeed_0, double TimeToMaxSpeed, double LastSpeed, bool bSide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "CalcAddtiveSpeed");

	Params::Skill_Wire_C_CalcAddtiveSpeed Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.MaxSpeed_0 = MaxSpeed_0;
	Parms.TimeToMaxSpeed = TimeToMaxSpeed;
	Parms.LastSpeed = LastSpeed;
	Parms.bSide = bSide;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Skill_Wire.Skill_Wire_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bCancelled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Wire_C::BP_OnDeactivated(bool bCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "BP_OnDeactivated");

	Params::Skill_Wire_C_BP_OnDeactivated Parms{};

	Parms.bCancelled = bCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Wire.Skill_Wire_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void USkill_Wire_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_Wire.Skill_Wire_C.Auth_SpawnFX_IfAirDest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InFXName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Wire_C::Auth_SpawnFX_IfAirDest(class FName InFXName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "Auth_SpawnFX_IfAirDest");

	Params::Skill_Wire_C_Auth_SpawnFX_IfAirDest Parms{};

	Parms.InFXName = InFXName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Wire.Skill_Wire_C.Auth_SetEnableClientAuthoritativePositionForDebone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Server_Accept_Client_Authoritative_Position            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Wire_C::Auth_SetEnableClientAuthoritativePositionForDebone(bool Server_Accept_Client_Authoritative_Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "Auth_SetEnableClientAuthoritativePositionForDebone");

	Params::Skill_Wire_C_Auth_SetEnableClientAuthoritativePositionForDebone Parms{};

	Parms.Server_Accept_Client_Authoritative_Position = Server_Accept_Client_Authoritative_Position;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Wire.Skill_Wire_C.MakeSkillActivateParams
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           InOwner                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FM1AbilityParamData>      ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<struct FM1AbilityParamData> USkill_Wire_C::MakeSkillActivateParams(const class AActor* InOwner) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Wire_C", "MakeSkillActivateParams");

	Params::Skill_Wire_C_MakeSkillActivateParams Parms{};

	Parms.InOwner = InOwner;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


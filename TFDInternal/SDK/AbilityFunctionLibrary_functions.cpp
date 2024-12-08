#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AbilityFunctionLibrary

#include "Basic.hpp"

#include "AbilityFunctionLibrary_classes.hpp"
#include "AbilityFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function AbilityFunctionLibrary.AbilityFunctionLibrary_C.TryLoadAnimSequence
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             AssetPath                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*                    AnimSequence                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAbilityFunctionLibrary_C::TryLoadAnimSequence(class FName AssetPath, class UObject* __WorldContext, class UAnimSequence** AnimSequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctionLibrary_C", "TryLoadAnimSequence");

	Params::AbilityFunctionLibrary_C_TryLoadAnimSequence Parms{};

	Parms.AssetPath = AssetPath;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (AnimSequence != nullptr)
		*AnimSequence = Parms.AnimSequence;
}


// Function AbilityFunctionLibrary.AbilityFunctionLibrary_C.SummonMonster
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AM1Monster*                       Master                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             MonsterRowName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       TargetTransform                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AM1Monster*                       SpawnedMonster                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAbilityFunctionLibrary_C::SummonMonster(class AM1Monster* Master, class FName MonsterRowName, int32 Level, const struct FTransform& TargetTransform, class UObject* __WorldContext, class AM1Monster** SpawnedMonster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctionLibrary_C", "SummonMonster");

	Params::AbilityFunctionLibrary_C_SummonMonster Parms{};

	Parms.Master = Master;
	Parms.MonsterRowName = MonsterRowName;
	Parms.Level = Level;
	Parms.TargetTransform = std::move(TargetTransform);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SpawnedMonster != nullptr)
		*SpawnedMonster = Parms.SpawnedMonster;
}


// Function AbilityFunctionLibrary.AbilityFunctionLibrary_C.SpawnManyOneKindMonster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             SpawnMonsterName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SpawnCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OwnerActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  MinPivotForwardDistance                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  MaxPivotForwardDistance                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          WorldContext                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   SpawnCheckLoopCount                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  MaxRadius                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  MinRaduis                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bLimitedSight                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bArcheShieldNeeded                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bSucceed                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AM1Monster*>               OutSpawnedMonsters                                     (Parm, OutParm)

void UAbilityFunctionLibrary_C::SpawnManyOneKindMonster(class FName SpawnMonsterName, int32 SpawnCount, class AActor* OwnerActor, double MinPivotForwardDistance, double MaxPivotForwardDistance, class UObject* WorldContext, int32 SpawnCheckLoopCount, double MaxRadius, double MinRaduis, bool bLimitedSight, bool bArcheShieldNeeded, class UObject* __WorldContext, bool* bSucceed, TArray<class AM1Monster*>* OutSpawnedMonsters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctionLibrary_C", "SpawnManyOneKindMonster");

	Params::AbilityFunctionLibrary_C_SpawnManyOneKindMonster Parms{};

	Parms.SpawnMonsterName = SpawnMonsterName;
	Parms.SpawnCount = SpawnCount;
	Parms.OwnerActor = OwnerActor;
	Parms.MinPivotForwardDistance = MinPivotForwardDistance;
	Parms.MaxPivotForwardDistance = MaxPivotForwardDistance;
	Parms.WorldContext = WorldContext;
	Parms.SpawnCheckLoopCount = SpawnCheckLoopCount;
	Parms.MaxRadius = MaxRadius;
	Parms.MinRaduis = MinRaduis;
	Parms.bLimitedSight = bLimitedSight;
	Parms.bArcheShieldNeeded = bArcheShieldNeeded;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bSucceed != nullptr)
		*bSucceed = Parms.bSucceed;

	if (OutSpawnedMonsters != nullptr)
		*OutSpawnedMonsters = std::move(Parms.OutSpawnedMonsters);
}


// Function AbilityFunctionLibrary.AbilityFunctionLibrary_C.MakeMaxHpOperationParam
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  MaxHPRatio                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FM1AbilityOperationParam         Result                                                 (Parm, OutParm, ContainsInstancedReference)

void UAbilityFunctionLibrary_C::MakeMaxHpOperationParam(double MaxHPRatio, class UObject* __WorldContext, struct FM1AbilityOperationParam* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctionLibrary_C", "MakeMaxHpOperationParam");

	Params::AbilityFunctionLibrary_C_MakeMaxHpOperationParam Parms{};

	Parms.MaxHPRatio = MaxHPRatio;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}


// Function AbilityFunctionLibrary.AbilityFunctionLibrary_C.MakeMaxHpAbilityParam
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  MaxHPRatio                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FM1AbilityParamData              Result                                                 (Parm, OutParm)

void UAbilityFunctionLibrary_C::MakeMaxHpAbilityParam(double MaxHPRatio, class UObject* __WorldContext, struct FM1AbilityParamData* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctionLibrary_C", "MakeMaxHpAbilityParam");

	Params::AbilityFunctionLibrary_C_MakeMaxHpAbilityParam Parms{};

	Parms.MaxHPRatio = MaxHPRatio;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}


// Function AbilityFunctionLibrary.AbilityFunctionLibrary_C.MakeDecalParams
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Size                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Height                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UseScaledSize                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FM1FXScalarParam>         ReturnParams                                           (Parm, OutParm)

void UAbilityFunctionLibrary_C::MakeDecalParams(double Duration, double Size, double Height, bool UseScaledSize, class UObject* __WorldContext, TArray<struct FM1FXScalarParam>* ReturnParams)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctionLibrary_C", "MakeDecalParams");

	Params::AbilityFunctionLibrary_C_MakeDecalParams Parms{};

	Parms.Duration = Duration;
	Parms.Size = Size;
	Parms.Height = Height;
	Parms.UseScaledSize = UseScaledSize;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ReturnParams != nullptr)
		*ReturnParams = std::move(Parms.ReturnParams);
}


// Function AbilityFunctionLibrary.AbilityFunctionLibrary_C.InvokeDotDamageStatusEffect
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IM1AbilityBase>  InAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            ForwardingOperationTags                                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer            InTags                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FM1ScaledInteger                 Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAbilityFunctionLibrary_C::InvokeDotDamageStatusEffect(TScriptInterface<class IM1AbilityBase> InAbility, const struct FGameplayTagContainer& ForwardingOperationTags, const struct FGameplayTagContainer& InTags, const struct FM1ScaledInteger& Damage, class AActor* TargetActor, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctionLibrary_C", "InvokeDotDamageStatusEffect");

	Params::AbilityFunctionLibrary_C_InvokeDotDamageStatusEffect Parms{};

	Parms.InAbility = InAbility;
	Parms.ForwardingOperationTags = std::move(ForwardingOperationTags);
	Parms.InTags = std::move(InTags);
	Parms.Damage = std::move(Damage);
	Parms.TargetActor = TargetActor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function AbilityFunctionLibrary.AbilityFunctionLibrary_C.GetTransformForAbilityActor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM1Ability*                       InAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             InSocketName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform UAbilityFunctionLibrary_C::GetTransformForAbilityActor(class UM1Ability* InAbility, class FName InSocketName, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctionLibrary_C", "GetTransformForAbilityActor");

	Params::AbilityFunctionLibrary_C_GetTransformForAbilityActor Parms{};

	Parms.InAbility = InAbility;
	Parms.InSocketName = InSocketName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AbilityFunctionLibrary.AbilityFunctionLibrary_C.GetAIHomeLocation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UM1Ability*                       Ability                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HomeLocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilityFunctionLibrary_C::GetAIHomeLocation(class UM1Ability* Ability, class UObject* __WorldContext, struct FVector* HomeLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctionLibrary_C", "GetAIHomeLocation");

	Params::AbilityFunctionLibrary_C_GetAIHomeLocation Parms{};

	Parms.Ability = Ability;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HomeLocation != nullptr)
		*HomeLocation = std::move(Parms.HomeLocation);
}


// Function AbilityFunctionLibrary.AbilityFunctionLibrary_C.FindRandomTeleportLocationFromSpawnTransformMaker
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           WorldContext                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             InMakerName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          RandomLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilityFunctionLibrary_C::FindRandomTeleportLocationFromSpawnTransformMaker(class AActor* WorldContext, class FName InMakerName, class UObject* __WorldContext, struct FVector* RandomLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctionLibrary_C", "FindRandomTeleportLocationFromSpawnTransformMaker");

	Params::AbilityFunctionLibrary_C_FindRandomTeleportLocationFromSpawnTransformMaker Parms{};

	Parms.WorldContext = WorldContext;
	Parms.InMakerName = InMakerName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (RandomLocation != nullptr)
		*RandomLocation = std::move(Parms.RandomLocation);
}


// Function AbilityFunctionLibrary.AbilityFunctionLibrary_C.FindFloorAtLocation
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          TargetLocation2D                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InstigatorLocation                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          OutLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilityFunctionLibrary_C::FindFloorAtLocation(const struct FVector& TargetLocation2D, const struct FVector& InstigatorLocation, class UObject* __WorldContext, struct FVector* OutLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctionLibrary_C", "FindFloorAtLocation");

	Params::AbilityFunctionLibrary_C_FindFloorAtLocation Parms{};

	Parms.TargetLocation2D = std::move(TargetLocation2D);
	Parms.InstigatorLocation = std::move(InstigatorLocation);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);
}


// Function AbilityFunctionLibrary.AbilityFunctionLibrary_C.CreateAOEActorManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Outer_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              PrimitiveComp                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EM1RelationsCheckType                   RelationsType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            SEForwardingContextTags                                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer            SEInvokeTags                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                                   Period                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            PeriodOpTags                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                             PeriodHitFXName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bStartOverlap                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bNeedEndSE                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            PeriodSEForwardingContextTags                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer            PeriodSEInvokeTags                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UM1AOECollisionManager_C*         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UM1AOECollisionManager_C* UAbilityFunctionLibrary_C::CreateAOEActorManager(class UObject* Outer_0, class UPrimitiveComponent* PrimitiveComp, EM1RelationsCheckType RelationsType, const struct FGameplayTagContainer& SEForwardingContextTags, const struct FGameplayTagContainer& SEInvokeTags, float Period, const struct FGameplayTagContainer& PeriodOpTags, class FName PeriodHitFXName, bool bStartOverlap, bool bNeedEndSE, const struct FGameplayTagContainer& PeriodSEForwardingContextTags, const struct FGameplayTagContainer& PeriodSEInvokeTags, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctionLibrary_C", "CreateAOEActorManager");

	Params::AbilityFunctionLibrary_C_CreateAOEActorManager Parms{};

	Parms.Outer_0 = Outer_0;
	Parms.PrimitiveComp = PrimitiveComp;
	Parms.RelationsType = RelationsType;
	Parms.SEForwardingContextTags = std::move(SEForwardingContextTags);
	Parms.SEInvokeTags = std::move(SEInvokeTags);
	Parms.Period = Period;
	Parms.PeriodOpTags = std::move(PeriodOpTags);
	Parms.PeriodHitFXName = PeriodHitFXName;
	Parms.bStartOverlap = bStartOverlap;
	Parms.bNeedEndSE = bNeedEndSE;
	Parms.PeriodSEForwardingContextTags = std::move(PeriodSEForwardingContextTags);
	Parms.PeriodSEInvokeTags = std::move(PeriodSEInvokeTags);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AbilityFunctionLibrary.AbilityFunctionLibrary_C.CheckSpawnPoint
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          SpawnLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          PivotLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  MinRadius                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bLimitedSight                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AM1Monster*                       OwnerMonster                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilityFunctionLibrary_C::CheckSpawnPoint(const struct FVector& SpawnLocation, const struct FVector& PivotLocation, double MinRadius, bool bLimitedSight, class AM1Monster* OwnerMonster, class UObject* __WorldContext, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctionLibrary_C", "CheckSpawnPoint");

	Params::AbilityFunctionLibrary_C_CheckSpawnPoint Parms{};

	Parms.SpawnLocation = std::move(SpawnLocation);
	Parms.PivotLocation = std::move(PivotLocation);
	Parms.MinRadius = MinRadius;
	Parms.bLimitedSight = bLimitedSight;
	Parms.OwnerMonster = OwnerMonster;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function AbilityFunctionLibrary.AbilityFunctionLibrary_C.CheckSpawnedCount
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AM1Monster*>               InSpawnedMonsters                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   MonsterCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LimitedSpawnedCount                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bCanSpawn                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilityFunctionLibrary_C::CheckSpawnedCount(TArray<class AM1Monster*>& InSpawnedMonsters, int32 MonsterCount, int32 LimitedSpawnedCount, class UObject* __WorldContext, bool* bCanSpawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctionLibrary_C", "CheckSpawnedCount");

	Params::AbilityFunctionLibrary_C_CheckSpawnedCount Parms{};

	Parms.InSpawnedMonsters = std::move(InSpawnedMonsters);
	Parms.MonsterCount = MonsterCount;
	Parms.LimitedSpawnedCount = LimitedSpawnedCount;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	InSpawnedMonsters = std::move(Parms.InSpawnedMonsters);

	if (bCanSpawn != nullptr)
		*bCanSpawn = Parms.bCanSpawn;
}


// Function AbilityFunctionLibrary.AbilityFunctionLibrary_C.CalcSummonsFireStartEndLocation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InOwner                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InTargetLoc                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InFireSocketLoc                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InAxisSocketLoc                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSpreadSize                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          FireLoc                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          EndLoc                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilityFunctionLibrary_C::CalcSummonsFireStartEndLocation(class AActor* InOwner, const struct FVector& InTargetLoc, const struct FVector& InFireSocketLoc, const struct FVector& InAxisSocketLoc, int32 InSpreadSize, class UObject* __WorldContext, struct FVector* FireLoc, struct FVector* EndLoc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctionLibrary_C", "CalcSummonsFireStartEndLocation");

	Params::AbilityFunctionLibrary_C_CalcSummonsFireStartEndLocation Parms{};

	Parms.InOwner = InOwner;
	Parms.InTargetLoc = std::move(InTargetLoc);
	Parms.InFireSocketLoc = std::move(InFireSocketLoc);
	Parms.InAxisSocketLoc = std::move(InAxisSocketLoc);
	Parms.InSpreadSize = InSpreadSize;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (FireLoc != nullptr)
		*FireLoc = std::move(Parms.FireLoc);

	if (EndLoc != nullptr)
		*EndLoc = std::move(Parms.EndLoc);
}


// Function AbilityFunctionLibrary.AbilityFunctionLibrary_C.CalcPivotLocation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OwnerActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  MinPivotForwardDistance                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  MaxPivotForwardDistance                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          PivotLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilityFunctionLibrary_C::CalcPivotLocation(class AActor* OwnerActor, double MinPivotForwardDistance, double MaxPivotForwardDistance, class UObject* __WorldContext, struct FVector* PivotLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctionLibrary_C", "CalcPivotLocation");

	Params::AbilityFunctionLibrary_C_CalcPivotLocation Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.MinPivotForwardDistance = MinPivotForwardDistance;
	Parms.MaxPivotForwardDistance = MaxPivotForwardDistance;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (PivotLocation != nullptr)
		*PivotLocation = std::move(Parms.PivotLocation);
}


// Function AbilityFunctionLibrary.AbilityFunctionLibrary_C.AttatchArcheShield
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          SpawnLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAbilityFunctionLibrary_C::AttatchArcheShield(const struct FVector& SpawnLocation, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctionLibrary_C", "AttatchArcheShield");

	Params::AbilityFunctionLibrary_C_AttatchArcheShield Parms{};

	Parms.SpawnLocation = std::move(SpawnLocation);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CleaningAnimalComponent_V2

#include "Basic.hpp"

#include "BP_CleaningAnimalComponent_V2_classes.hpp"
#include "BP_CleaningAnimalComponent_V2_parameters.hpp"


namespace SDK
{

// Function BP_CleaningAnimalComponent_V2.BP_CleaningAnimalComponent_V2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CleaningAnimalComponent_V2_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CleaningAnimalComponent_V2_C", "ReceiveTick");

	Params::BP_CleaningAnimalComponent_V2_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CleaningAnimalComponent_V2.BP_CleaningAnimalComponent_V2_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_CleaningAnimalComponent_V2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CleaningAnimalComponent_V2_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CleaningAnimalComponent_V2.BP_CleaningAnimalComponent_V2_C.GetCleaningAnimalStage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ECleaningAnimalStage*                   Stage                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CleaningAnimalComponent_V2_C::GetCleaningAnimalStage(ECleaningAnimalStage* Stage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CleaningAnimalComponent_V2_C", "GetCleaningAnimalStage");

	Params::BP_CleaningAnimalComponent_V2_C_GetCleaningAnimalStage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Stage != nullptr)
		*Stage = Parms.Stage;
}


// Function BP_CleaningAnimalComponent_V2.BP_CleaningAnimalComponent_V2_C.ExecuteUbergraph_BP_CleaningAnimalComponent_V2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CleaningAnimalComponent_V2_C::ExecuteUbergraph_BP_CleaningAnimalComponent_V2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CleaningAnimalComponent_V2_C", "ExecuteUbergraph_BP_CleaningAnimalComponent_V2");

	Params::BP_CleaningAnimalComponent_V2_C_ExecuteUbergraph_BP_CleaningAnimalComponent_V2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CleaningAnimalComponent_V2.BP_CleaningAnimalComponent_V2_C.BPAnimNotify_ExitRealCleaning
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CleaningAnimalComponent_V2_C::BPAnimNotify_ExitRealCleaning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CleaningAnimalComponent_V2_C", "BPAnimNotify_ExitRealCleaning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CleaningAnimalComponent_V2.BP_CleaningAnimalComponent_V2_C.BPAnimNotify_ExitQuickCleaning
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CleaningAnimalComponent_V2_C::BPAnimNotify_ExitQuickCleaning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CleaningAnimalComponent_V2_C", "BPAnimNotify_ExitQuickCleaning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CleaningAnimalComponent_V2.BP_CleaningAnimalComponent_V2_C.BPAnimNotify_ExitCleaningInterrupt
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CleaningAnimalComponent_V2_C::BPAnimNotify_ExitCleaningInterrupt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CleaningAnimalComponent_V2_C", "BPAnimNotify_ExitCleaningInterrupt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CleaningAnimalComponent_V2.BP_CleaningAnimalComponent_V2_C.BPAnimNotify_ExitCleanCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  BlendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CleaningAnimalComponent_V2_C::BPAnimNotify_ExitCleanCamera(double BlendTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CleaningAnimalComponent_V2_C", "BPAnimNotify_ExitCleanCamera");

	Params::BP_CleaningAnimalComponent_V2_C_BPAnimNotify_ExitCleanCamera Parms{};

	Parms.BlendTime = BlendTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CleaningAnimalComponent_V2.BP_CleaningAnimalComponent_V2_C.BPAnimNotify_EnterCleanCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  BlendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CleaningAnimalComponent_V2_C::BPAnimNotify_EnterCleanCamera(double BlendTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CleaningAnimalComponent_V2_C", "BPAnimNotify_EnterCleanCamera");

	Params::BP_CleaningAnimalComponent_V2_C_BPAnimNotify_EnterCleanCamera Parms{};

	Parms.BlendTime = BlendTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CleaningAnimalComponent_V2.BP_CleaningAnimalComponent_V2_C.BP_IsMoving
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   IsMoving                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CleaningAnimalComponent_V2_C::BP_IsMoving(bool* IsMoving)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CleaningAnimalComponent_V2_C", "BP_IsMoving");

	Params::BP_CleaningAnimalComponent_V2_C_BP_IsMoving Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsMoving != nullptr)
		*IsMoving = Parms.IsMoving;
}


// Function BP_CleaningAnimalComponent_V2.BP_CleaningAnimalComponent_V2_C.BP_GetHandIKParams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double*                                 IK_HandAlpha                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                         IK_RightHandLocation_ComponentSpace                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator*                        IK_RightHandRotation_ComponentSpace                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CleaningAnimalComponent_V2_C::BP_GetHandIKParams(double* IK_HandAlpha, struct FVector* IK_RightHandLocation_ComponentSpace, struct FRotator* IK_RightHandRotation_ComponentSpace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CleaningAnimalComponent_V2_C", "BP_GetHandIKParams");

	Params::BP_CleaningAnimalComponent_V2_C_BP_GetHandIKParams Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IK_HandAlpha != nullptr)
		*IK_HandAlpha = Parms.IK_HandAlpha;

	if (IK_RightHandLocation_ComponentSpace != nullptr)
		*IK_RightHandLocation_ComponentSpace = std::move(Parms.IK_RightHandLocation_ComponentSpace);

	if (IK_RightHandRotation_ComponentSpace != nullptr)
		*IK_RightHandRotation_ComponentSpace = std::move(Parms.IK_RightHandRotation_ComponentSpace);
}


// Function BP_CleaningAnimalComponent_V2.BP_CleaningAnimalComponent_V2_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_CleaningAnimalComponent_V2_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CleaningAnimalComponent_V2_C", "GetModuleName");

	Params::BP_CleaningAnimalComponent_V2_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


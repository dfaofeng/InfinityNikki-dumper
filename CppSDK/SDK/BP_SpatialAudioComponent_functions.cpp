﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpatialAudioComponent

#include "Basic.hpp"

#include "BP_SpatialAudioComponent_classes.hpp"
#include "BP_SpatialAudioComponent_parameters.hpp"


namespace SDK
{

// Function BP_SpatialAudioComponent.BP_SpatialAudioComponent_C.ExecuteUbergraph_BP_SpatialAudioComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpatialAudioComponent_C::ExecuteUbergraph_BP_SpatialAudioComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpatialAudioComponent_C", "ExecuteUbergraph_BP_SpatialAudioComponent");

	Params::BP_SpatialAudioComponent_C_ExecuteUbergraph_BP_SpatialAudioComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpatialAudioComponent.BP_SpatialAudioComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_SpatialAudioComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpatialAudioComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SpatialAudioComponent.BP_SpatialAudioComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpatialAudioComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpatialAudioComponent_C", "ReceiveTick");

	Params::BP_SpatialAudioComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpatialAudioComponent.BP_SpatialAudioComponent_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_SpatialAudioComponent_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpatialAudioComponent_C", "GetModuleName");

	Params::BP_SpatialAudioComponent_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


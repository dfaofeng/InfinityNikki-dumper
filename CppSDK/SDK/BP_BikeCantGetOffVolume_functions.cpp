﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BikeCantGetOffVolume

#include "Basic.hpp"

#include "BP_BikeCantGetOffVolume_classes.hpp"
#include "BP_BikeCantGetOffVolume_parameters.hpp"


namespace SDK
{

// Function BP_BikeCantGetOffVolume.BP_BikeCantGetOffVolume_C.ExecuteUbergraph_BP_BikeCantGetOffVolume
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BikeCantGetOffVolume_C::ExecuteUbergraph_BP_BikeCantGetOffVolume(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BikeCantGetOffVolume_C", "ExecuteUbergraph_BP_BikeCantGetOffVolume");

	Params::BP_BikeCantGetOffVolume_C_ExecuteUbergraph_BP_BikeCantGetOffVolume Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BikeCantGetOffVolume.BP_BikeCantGetOffVolume_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_BikeCantGetOffVolume_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BikeCantGetOffVolume_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BikeCantGetOffVolume.BP_BikeCantGetOffVolume_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BikeCantGetOffVolume_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BikeCantGetOffVolume_C", "ReceiveEndPlay");

	Params::BP_BikeCantGetOffVolume_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BikeCantGetOffVolume.BP_BikeCantGetOffVolume_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_BikeCantGetOffVolume_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BikeCantGetOffVolume_C", "GetModuleName");

	Params::BP_BikeCantGetOffVolume_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


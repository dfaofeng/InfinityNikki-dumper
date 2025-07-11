﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SimpleAbilityBase

#include "Basic.hpp"

#include "BP_SimpleAbilityBase_classes.hpp"
#include "BP_SimpleAbilityBase_parameters.hpp"


namespace SDK
{

// Function BP_SimpleAbilityBase.BP_SimpleAbilityBase_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_SimpleAbilityBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleAbilityBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SimpleAbilityBase.BP_SimpleAbilityBase_C.ExecuteUbergraph_BP_SimpleAbilityBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SimpleAbilityBase_C::ExecuteUbergraph_BP_SimpleAbilityBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleAbilityBase_C", "ExecuteUbergraph_BP_SimpleAbilityBase");

	Params::BP_SimpleAbilityBase_C_ExecuteUbergraph_BP_SimpleAbilityBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SimpleAbilityBase.BP_SimpleAbilityBase_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_SimpleAbilityBase_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleAbilityBase_C", "GetModuleName");

	Params::BP_SimpleAbilityBase_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


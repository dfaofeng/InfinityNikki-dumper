﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CombatPartHitComponent

#include "Basic.hpp"

#include "BP_CombatPartHitComponent_classes.hpp"
#include "BP_CombatPartHitComponent_parameters.hpp"


namespace SDK
{

// Function BP_CombatPartHitComponent.BP_CombatPartHitComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_CombatPartHitComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CombatPartHitComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CombatPartHitComponent.BP_CombatPartHitComponent_C.ExecuteUbergraph_BP_CombatPartHitComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CombatPartHitComponent_C::ExecuteUbergraph_BP_CombatPartHitComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CombatPartHitComponent_C", "ExecuteUbergraph_BP_CombatPartHitComponent");

	Params::BP_CombatPartHitComponent_C_ExecuteUbergraph_BP_CombatPartHitComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CombatPartHitComponent.BP_CombatPartHitComponent_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_CombatPartHitComponent_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CombatPartHitComponent_C", "GetModuleName");

	Params::BP_CombatPartHitComponent_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


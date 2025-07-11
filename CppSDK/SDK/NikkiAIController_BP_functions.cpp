﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NikkiAIController_BP

#include "Basic.hpp"

#include "NikkiAIController_BP_classes.hpp"
#include "NikkiAIController_BP_parameters.hpp"


namespace SDK
{

// Function NikkiAIController_BP.NikkiAIController_BP_C.ExecuteUbergraph_NikkiAIController_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANikkiAIController_BP_C::ExecuteUbergraph_NikkiAIController_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NikkiAIController_BP_C", "ExecuteUbergraph_NikkiAIController_BP");

	Params::NikkiAIController_BP_C_ExecuteUbergraph_NikkiAIController_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NikkiAIController_BP.NikkiAIController_BP_C.MoveToRemoteLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANikkiAIController_BP_C::MoveToRemoteLocation(const struct FVector& Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NikkiAIController_BP_C", "MoveToRemoteLocation");

	Params::NikkiAIController_BP_C_MoveToRemoteLocation Parms{};

	Parms.Target = std::move(Target);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NikkiAIController_BP.NikkiAIController_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANikkiAIController_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NikkiAIController_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}


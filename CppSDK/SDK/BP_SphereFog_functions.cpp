﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SphereFog

#include "Basic.hpp"

#include "BP_SphereFog_classes.hpp"
#include "BP_SphereFog_parameters.hpp"


namespace SDK
{

// Function BP_SphereFog.BP_SphereFog_C.ExecuteUbergraph_BP_SphereFog
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SphereFog_C::ExecuteUbergraph_BP_SphereFog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SphereFog_C", "ExecuteUbergraph_BP_SphereFog");

	Params::BP_SphereFog_C_ExecuteUbergraph_BP_SphereFog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SphereFog.BP_SphereFog_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SphereFog_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SphereFog_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SphereFog.BP_SphereFog_C.UpdateParameter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SphereFog_C::UpdateParameter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SphereFog_C", "UpdateParameter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SphereFog.BP_SphereFog_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SphereFog_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SphereFog_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}


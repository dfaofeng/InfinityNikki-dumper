﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AbilityBase

#include "Basic.hpp"

#include "BP_AbilityBase_classes.hpp"
#include "BP_AbilityBase_parameters.hpp"


namespace SDK
{

// Function BP_AbilityBase.BP_AbilityBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilityBase_C", "ReceiveEndPlay");

	Params::BP_AbilityBase_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AbilityBase.BP_AbilityBase_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_AbilityBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilityBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AbilityBase.BP_AbilityBase_C.GetGroupID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32*                                  GroupID_0                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityBase_C::GetGroupID(int32* GroupID_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilityBase_C", "GetGroupID");

	Params::BP_AbilityBase_C_GetGroupID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (GroupID_0 != nullptr)
		*GroupID_0 = Parms.GroupID_0;
}


// Function BP_AbilityBase.BP_AbilityBase_C.GetAbilityIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**                      Icon_0                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityBase_C::GetAbilityIcon(class UTexture2D** Icon_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilityBase_C", "GetAbilityIcon");

	Params::BP_AbilityBase_C_GetAbilityIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Icon_0 != nullptr)
		*Icon_0 = Parms.Icon_0;
}


// Function BP_AbilityBase.BP_AbilityBase_C.GetAbilityCD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double*                                 cd_0                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityBase_C::GetAbilityCD(double* cd_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilityBase_C", "GetAbilityCD");

	Params::BP_AbilityBase_C_GetAbilityCD Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (cd_0 != nullptr)
		*cd_0 = Parms.cd_0;
}


// Function BP_AbilityBase.BP_AbilityBase_C.ExecuteUbergraph_BP_AbilityBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityBase_C::ExecuteUbergraph_BP_AbilityBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilityBase_C", "ExecuteUbergraph_BP_AbilityBase");

	Params::BP_AbilityBase_C_ExecuteUbergraph_BP_AbilityBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AbilityBase.BP_AbilityBase_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_AbilityBase_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilityBase_C", "GetModuleName");

	Params::BP_AbilityBase_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


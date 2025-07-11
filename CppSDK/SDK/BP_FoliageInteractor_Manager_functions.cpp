﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FoliageInteractor_Manager

#include "Basic.hpp"

#include "BP_FoliageInteractor_Manager_classes.hpp"
#include "BP_FoliageInteractor_Manager_parameters.hpp"


namespace SDK
{

// Function BP_FoliageInteractor_Manager.BP_FoliageInteractor_Manager_C.BP_SetTickEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FoliageInteractor_Manager_C::BP_SetTickEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FoliageInteractor_Manager_C", "BP_SetTickEnable");

	Params::BP_FoliageInteractor_Manager_C_BP_SetTickEnable Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FoliageInteractor_Manager.BP_FoliageInteractor_Manager_C.ExecuteUbergraph_BP_FoliageInteractor_Manager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FoliageInteractor_Manager_C::ExecuteUbergraph_BP_FoliageInteractor_Manager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FoliageInteractor_Manager_C", "ExecuteUbergraph_BP_FoliageInteractor_Manager");

	Params::BP_FoliageInteractor_Manager_C_ExecuteUbergraph_BP_FoliageInteractor_Manager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FoliageInteractor_Manager.BP_FoliageInteractor_Manager_C.OnCur_RT_Loaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FoliageInteractor_Manager_C::OnCur_RT_Loaded(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FoliageInteractor_Manager_C", "OnCur_RT_Loaded");

	Params::BP_FoliageInteractor_Manager_C_OnCur_RT_Loaded Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FoliageInteractor_Manager.BP_FoliageInteractor_Manager_C.OnPre_RT_Loaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FoliageInteractor_Manager_C::OnPre_RT_Loaded(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FoliageInteractor_Manager_C", "OnPre_RT_Loaded");

	Params::BP_FoliageInteractor_Manager_C_OnPre_RT_Loaded Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FoliageInteractor_Manager.BP_FoliageInteractor_Manager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FoliageInteractor_Manager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FoliageInteractor_Manager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FoliageInteractor_Manager.BP_FoliageInteractor_Manager_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FoliageInteractor_Manager_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FoliageInteractor_Manager_C", "ReceiveEndPlay");

	Params::BP_FoliageInteractor_Manager_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FoliageInteractor_Manager.BP_FoliageInteractor_Manager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FoliageInteractor_Manager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FoliageInteractor_Manager_C", "ReceiveTick");

	Params::BP_FoliageInteractor_Manager_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}


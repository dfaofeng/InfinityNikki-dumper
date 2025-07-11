﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_AnimalTickManagement

#include "Basic.hpp"

#include "BPI_AnimalTickManagement_classes.hpp"
#include "BPI_AnimalTickManagement_parameters.hpp"


namespace SDK
{

// Function BPI_AnimalTickManagement.BPI_AnimalTickManagement_C.ShouldRejectTickManagement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   bReject                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AnimalTickManagement_C::ShouldRejectTickManagement(bool* bReject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AnimalTickManagement_C", "ShouldRejectTickManagement");

	Params::BPI_AnimalTickManagement_C_ShouldRejectTickManagement Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bReject != nullptr)
		*bReject = Parms.bReject;
}


// Function BPI_AnimalTickManagement.BPI_AnimalTickManagement_C.SetAnimalTickEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AnimalTickManagement_C::SetAnimalTickEnabled(bool bEnabled, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AnimalTickManagement_C", "SetAnimalTickEnabled");

	Params::BPI_AnimalTickManagement_C_SetAnimalTickEnabled Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;
}


// Function BPI_AnimalTickManagement.BPI_AnimalTickManagement_C.GetAnimalTickManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_AnimalTickManager_C**         AnimalTickManager                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_AnimalTickManagement_C::GetAnimalTickManager(class UBP_AnimalTickManager_C** AnimalTickManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AnimalTickManagement_C", "GetAnimalTickManager");

	Params::BPI_AnimalTickManagement_C_GetAnimalTickManager Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimalTickManager != nullptr)
		*AnimalTickManager = Parms.AnimalTickManager;
}

}


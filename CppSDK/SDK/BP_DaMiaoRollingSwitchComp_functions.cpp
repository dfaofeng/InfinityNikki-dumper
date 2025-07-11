﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DaMiaoRollingSwitchComp

#include "Basic.hpp"

#include "BP_DaMiaoRollingSwitchComp_classes.hpp"
#include "BP_DaMiaoRollingSwitchComp_parameters.hpp"


namespace SDK
{

// Function BP_DaMiaoRollingSwitchComp.BP_DaMiaoRollingSwitchComp_C.BP_GetIsIncreasing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DaMiaoRollingSwitchComp_C::BP_GetIsIncreasing(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DaMiaoRollingSwitchComp_C", "BP_GetIsIncreasing");

	Params::BP_DaMiaoRollingSwitchComp_C_BP_GetIsIncreasing Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_DaMiaoRollingSwitchComp.BP_DaMiaoRollingSwitchComp_C.BPI_Get_BalanceBeamStates
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   CanMoveOnValidInput                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   IsEnterTowardSideOfBeam                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   IsCurInputValid                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DaMiaoRollingSwitchComp_C::BPI_Get_BalanceBeamStates(bool* CanMoveOnValidInput, bool* IsEnterTowardSideOfBeam, bool* IsCurInputValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DaMiaoRollingSwitchComp_C", "BPI_Get_BalanceBeamStates");

	Params::BP_DaMiaoRollingSwitchComp_C_BPI_Get_BalanceBeamStates Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanMoveOnValidInput != nullptr)
		*CanMoveOnValidInput = Parms.CanMoveOnValidInput;

	if (IsEnterTowardSideOfBeam != nullptr)
		*IsEnterTowardSideOfBeam = Parms.IsEnterTowardSideOfBeam;

	if (IsCurInputValid != nullptr)
		*IsCurInputValid = Parms.IsCurInputValid;
}


// Function BP_DaMiaoRollingSwitchComp.BP_DaMiaoRollingSwitchComp_C.BPI_Get_ConfigData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double*                                 WalkSpeed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 RunSpeed                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 SprintSpeed                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DaMiaoRollingSwitchComp_C::BPI_Get_ConfigData(double* WalkSpeed, double* RunSpeed, double* SprintSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DaMiaoRollingSwitchComp_C", "BPI_Get_ConfigData");

	Params::BP_DaMiaoRollingSwitchComp_C_BPI_Get_ConfigData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (WalkSpeed != nullptr)
		*WalkSpeed = Parms.WalkSpeed;

	if (RunSpeed != nullptr)
		*RunSpeed = Parms.RunSpeed;

	if (SprintSpeed != nullptr)
		*SprintSpeed = Parms.SprintSpeed;
}


// Function BP_DaMiaoRollingSwitchComp.BP_DaMiaoRollingSwitchComp_C.BPI_Get_CurrentGroundStates
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMovementMode*                          PawnMovementMode                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ERegularLocomotionType*                 AllowedGait                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPlayerMovementScenarios*               MovementScenario                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputDeviceKeyType*                    CurInputDeviceKeyType                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DaMiaoRollingSwitchComp_C::BPI_Get_CurrentGroundStates(EMovementMode* PawnMovementMode, ERegularLocomotionType* AllowedGait, EPlayerMovementScenarios* MovementScenario, EInputDeviceKeyType* CurInputDeviceKeyType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DaMiaoRollingSwitchComp_C", "BPI_Get_CurrentGroundStates");

	Params::BP_DaMiaoRollingSwitchComp_C_BPI_Get_CurrentGroundStates Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PawnMovementMode != nullptr)
		*PawnMovementMode = Parms.PawnMovementMode;

	if (AllowedGait != nullptr)
		*AllowedGait = Parms.AllowedGait;

	if (MovementScenario != nullptr)
		*MovementScenario = Parms.MovementScenario;

	if (CurInputDeviceKeyType != nullptr)
		*CurInputDeviceKeyType = Parms.CurInputDeviceKeyType;
}


// Function BP_DaMiaoRollingSwitchComp.BP_DaMiaoRollingSwitchComp_C.BPI_Get_EssentialValues
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                         InVelocity                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                         InCurrentAcceleration                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 InMaxAcceleration                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 InTurnAroundAngle                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 InSlopeAngle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 InStartTurnAroundAngle                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 InCurConfigMaxSpeed                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DaMiaoRollingSwitchComp_C::BPI_Get_EssentialValues(struct FVector* InVelocity, struct FVector* InCurrentAcceleration, double* InMaxAcceleration, double* InTurnAroundAngle, double* InSlopeAngle, double* InStartTurnAroundAngle, double* InCurConfigMaxSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DaMiaoRollingSwitchComp_C", "BPI_Get_EssentialValues");

	Params::BP_DaMiaoRollingSwitchComp_C_BPI_Get_EssentialValues Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InVelocity != nullptr)
		*InVelocity = std::move(Parms.InVelocity);

	if (InCurrentAcceleration != nullptr)
		*InCurrentAcceleration = std::move(Parms.InCurrentAcceleration);

	if (InMaxAcceleration != nullptr)
		*InMaxAcceleration = Parms.InMaxAcceleration;

	if (InTurnAroundAngle != nullptr)
		*InTurnAroundAngle = Parms.InTurnAroundAngle;

	if (InSlopeAngle != nullptr)
		*InSlopeAngle = Parms.InSlopeAngle;

	if (InStartTurnAroundAngle != nullptr)
		*InStartTurnAroundAngle = Parms.InStartTurnAroundAngle;

	if (InCurConfigMaxSpeed != nullptr)
		*InCurConfigMaxSpeed = Parms.InCurConfigMaxSpeed;
}


// Function BP_DaMiaoRollingSwitchComp.BP_DaMiaoRollingSwitchComp_C.BPI_Get_MaxSpeedValues
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double*                                 CurMinAnalogWalkSpeed                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 CurConfigMaxSpeed                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 CurActualMaxSpeed                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DaMiaoRollingSwitchComp_C::BPI_Get_MaxSpeedValues(double* CurMinAnalogWalkSpeed, double* CurConfigMaxSpeed, double* CurActualMaxSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DaMiaoRollingSwitchComp_C", "BPI_Get_MaxSpeedValues");

	Params::BP_DaMiaoRollingSwitchComp_C_BPI_Get_MaxSpeedValues Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurMinAnalogWalkSpeed != nullptr)
		*CurMinAnalogWalkSpeed = Parms.CurMinAnalogWalkSpeed;

	if (CurConfigMaxSpeed != nullptr)
		*CurConfigMaxSpeed = Parms.CurConfigMaxSpeed;

	if (CurActualMaxSpeed != nullptr)
		*CurActualMaxSpeed = Parms.CurActualMaxSpeed;
}


// Function BP_DaMiaoRollingSwitchComp.BP_DaMiaoRollingSwitchComp_C.BPI_Get_PlayerStates
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   IsInState_AimMode                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DaMiaoRollingSwitchComp_C::BPI_Get_PlayerStates(bool* IsInState_AimMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DaMiaoRollingSwitchComp_C", "BPI_Get_PlayerStates");

	Params::BP_DaMiaoRollingSwitchComp_C_BPI_Get_PlayerStates Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsInState_AimMode != nullptr)
		*IsInState_AimMode = Parms.IsInState_AimMode;
}


// Function BP_DaMiaoRollingSwitchComp.BP_DaMiaoRollingSwitchComp_C.ExecuteUbergraph_BP_DaMiaoRollingSwitchComp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DaMiaoRollingSwitchComp_C::ExecuteUbergraph_BP_DaMiaoRollingSwitchComp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DaMiaoRollingSwitchComp_C", "ExecuteUbergraph_BP_DaMiaoRollingSwitchComp");

	Params::BP_DaMiaoRollingSwitchComp_C_ExecuteUbergraph_BP_DaMiaoRollingSwitchComp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DaMiaoRollingSwitchComp.BP_DaMiaoRollingSwitchComp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DaMiaoRollingSwitchComp_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DaMiaoRollingSwitchComp_C", "ReceiveTick");

	Params::BP_DaMiaoRollingSwitchComp_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DaMiaoRollingSwitchComp.BP_DaMiaoRollingSwitchComp_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_DaMiaoRollingSwitchComp_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DaMiaoRollingSwitchComp_C", "GetModuleName");

	Params::BP_DaMiaoRollingSwitchComp_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


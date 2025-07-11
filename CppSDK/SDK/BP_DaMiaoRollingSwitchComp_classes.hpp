﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DaMiaoRollingSwitchComp

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "EInputDeviceKeyType_structs.hpp"
#include "Engine_structs.hpp"
#include "EPlayerMovementScenarios_structs.hpp"
#include "X6Game_structs.hpp"
#include "X6Game_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DaMiaoRollingSwitchComp.BP_DaMiaoRollingSwitchComp_C
// 0x01A8 (0x0250 - 0x00A8)
class UBP_DaMiaoRollingSwitchComp_C final : public UX6ActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        BallRadius;                                        // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MoveForce;                                         // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LinearDamping;                                     // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AngularDamping;                                    // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxSpeed;                                          // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D8[0x8];                                       // 0x00D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             OriginalSKMRelativeTransfom;                       // 0x00E0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OriginalSKMRelativeLocation;                       // 0x0140(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               OriginalSKMRelativeRotation;                       // 0x0158(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                        ReboundArea;                                       // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ReboundForce;                                      // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraBaseParamsData*                  IP_CameraSetting;                                  // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        IP_Charge_Rolling_Aiming_Rotation_Speed;           // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        IP_Charge_Rolling_Basic_Force;                     // 0x0190(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        IP_Charge_Rolling_Force_Max;                       // 0x0198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        IP_IncreasingPowerMaxTime;                         // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        IP_IncreasingPower_MinReleasingTime;               // 0x01A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        IP_IncreasingPower_MinReleasingSpeed;              // 0x01B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        IP_IncreasingPower_GroundFriction;                 // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        IP_IncreasingPower_ArrowLength;                    // 0x01C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        IP_IncreasingPower_ReleasingHitPower;              // 0x01C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        IP_IncreasingPower_ReleasingHitArea;               // 0x01D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MovementAllConfigTemplate_C*        Char_RollingMovementConfig;                        // 0x01D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_JumpStage_ConfigTemplate_C*         Char_RollingJumpMovementConfig;                    // 0x01E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Char_ForceFactor;                                  // 0x01E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Char_SlopeForceFactor;                             // 0x01F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Char_MinSlope;                                     // 0x01F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Char_IncreasingPower_GroundFriction;               // 0x0200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Char_InAirSprintMaxForce;                          // 0x0208(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Char_AutoAimRadius;                                // 0x0210(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Char_AutoAimTargetShowBox;                         // 0x0218(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Char_AirSprintTrack_MaxTime;                       // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Char_AirSprintTrack_Speed;                         // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Char_AirSprintTrack_MinDistance;                   // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_GetIsIncreasing(bool* NewParam);
	void BPI_Get_BalanceBeamStates(bool* CanMoveOnValidInput, bool* IsEnterTowardSideOfBeam, bool* IsCurInputValid);
	void BPI_Get_ConfigData(double* WalkSpeed, double* RunSpeed, double* SprintSpeed);
	void BPI_Get_CurrentGroundStates(EMovementMode* PawnMovementMode, ERegularLocomotionType* AllowedGait, EPlayerMovementScenarios* MovementScenario, EInputDeviceKeyType* CurInputDeviceKeyType);
	void BPI_Get_EssentialValues(struct FVector* InVelocity, struct FVector* InCurrentAcceleration, double* InMaxAcceleration, double* InTurnAroundAngle, double* InSlopeAngle, double* InStartTurnAroundAngle, double* InCurConfigMaxSpeed);
	void BPI_Get_MaxSpeedValues(double* CurMinAnalogWalkSpeed, double* CurConfigMaxSpeed, double* CurActualMaxSpeed);
	void BPI_Get_PlayerStates(bool* IsInState_AimMode);
	void ExecuteUbergraph_BP_DaMiaoRollingSwitchComp(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DaMiaoRollingSwitchComp_C">();
	}
	static class UBP_DaMiaoRollingSwitchComp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DaMiaoRollingSwitchComp_C>();
	}
};
static_assert(alignof(UBP_DaMiaoRollingSwitchComp_C) == 0x000010, "Wrong alignment on UBP_DaMiaoRollingSwitchComp_C");
static_assert(sizeof(UBP_DaMiaoRollingSwitchComp_C) == 0x000250, "Wrong size on UBP_DaMiaoRollingSwitchComp_C");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, UberGraphFrame) == 0x0000A8, "Member 'UBP_DaMiaoRollingSwitchComp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, BallRadius) == 0x0000B0, "Member 'UBP_DaMiaoRollingSwitchComp_C::BallRadius' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, MoveForce) == 0x0000B8, "Member 'UBP_DaMiaoRollingSwitchComp_C::MoveForce' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, LinearDamping) == 0x0000C0, "Member 'UBP_DaMiaoRollingSwitchComp_C::LinearDamping' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, AngularDamping) == 0x0000C8, "Member 'UBP_DaMiaoRollingSwitchComp_C::AngularDamping' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, MaxSpeed) == 0x0000D0, "Member 'UBP_DaMiaoRollingSwitchComp_C::MaxSpeed' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, OriginalSKMRelativeTransfom) == 0x0000E0, "Member 'UBP_DaMiaoRollingSwitchComp_C::OriginalSKMRelativeTransfom' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, OriginalSKMRelativeLocation) == 0x000140, "Member 'UBP_DaMiaoRollingSwitchComp_C::OriginalSKMRelativeLocation' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, OriginalSKMRelativeRotation) == 0x000158, "Member 'UBP_DaMiaoRollingSwitchComp_C::OriginalSKMRelativeRotation' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, ReboundArea) == 0x000170, "Member 'UBP_DaMiaoRollingSwitchComp_C::ReboundArea' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, ReboundForce) == 0x000178, "Member 'UBP_DaMiaoRollingSwitchComp_C::ReboundForce' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, IP_CameraSetting) == 0x000180, "Member 'UBP_DaMiaoRollingSwitchComp_C::IP_CameraSetting' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, IP_Charge_Rolling_Aiming_Rotation_Speed) == 0x000188, "Member 'UBP_DaMiaoRollingSwitchComp_C::IP_Charge_Rolling_Aiming_Rotation_Speed' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, IP_Charge_Rolling_Basic_Force) == 0x000190, "Member 'UBP_DaMiaoRollingSwitchComp_C::IP_Charge_Rolling_Basic_Force' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, IP_Charge_Rolling_Force_Max) == 0x000198, "Member 'UBP_DaMiaoRollingSwitchComp_C::IP_Charge_Rolling_Force_Max' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, IP_IncreasingPowerMaxTime) == 0x0001A0, "Member 'UBP_DaMiaoRollingSwitchComp_C::IP_IncreasingPowerMaxTime' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, IP_IncreasingPower_MinReleasingTime) == 0x0001A8, "Member 'UBP_DaMiaoRollingSwitchComp_C::IP_IncreasingPower_MinReleasingTime' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, IP_IncreasingPower_MinReleasingSpeed) == 0x0001B0, "Member 'UBP_DaMiaoRollingSwitchComp_C::IP_IncreasingPower_MinReleasingSpeed' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, IP_IncreasingPower_GroundFriction) == 0x0001B8, "Member 'UBP_DaMiaoRollingSwitchComp_C::IP_IncreasingPower_GroundFriction' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, IP_IncreasingPower_ArrowLength) == 0x0001C0, "Member 'UBP_DaMiaoRollingSwitchComp_C::IP_IncreasingPower_ArrowLength' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, IP_IncreasingPower_ReleasingHitPower) == 0x0001C8, "Member 'UBP_DaMiaoRollingSwitchComp_C::IP_IncreasingPower_ReleasingHitPower' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, IP_IncreasingPower_ReleasingHitArea) == 0x0001D0, "Member 'UBP_DaMiaoRollingSwitchComp_C::IP_IncreasingPower_ReleasingHitArea' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, Char_RollingMovementConfig) == 0x0001D8, "Member 'UBP_DaMiaoRollingSwitchComp_C::Char_RollingMovementConfig' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, Char_RollingJumpMovementConfig) == 0x0001E0, "Member 'UBP_DaMiaoRollingSwitchComp_C::Char_RollingJumpMovementConfig' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, Char_ForceFactor) == 0x0001E8, "Member 'UBP_DaMiaoRollingSwitchComp_C::Char_ForceFactor' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, Char_SlopeForceFactor) == 0x0001F0, "Member 'UBP_DaMiaoRollingSwitchComp_C::Char_SlopeForceFactor' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, Char_MinSlope) == 0x0001F8, "Member 'UBP_DaMiaoRollingSwitchComp_C::Char_MinSlope' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, Char_IncreasingPower_GroundFriction) == 0x000200, "Member 'UBP_DaMiaoRollingSwitchComp_C::Char_IncreasingPower_GroundFriction' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, Char_InAirSprintMaxForce) == 0x000208, "Member 'UBP_DaMiaoRollingSwitchComp_C::Char_InAirSprintMaxForce' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, Char_AutoAimRadius) == 0x000210, "Member 'UBP_DaMiaoRollingSwitchComp_C::Char_AutoAimRadius' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, Char_AutoAimTargetShowBox) == 0x000218, "Member 'UBP_DaMiaoRollingSwitchComp_C::Char_AutoAimTargetShowBox' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, Char_AirSprintTrack_MaxTime) == 0x000230, "Member 'UBP_DaMiaoRollingSwitchComp_C::Char_AirSprintTrack_MaxTime' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, Char_AirSprintTrack_Speed) == 0x000238, "Member 'UBP_DaMiaoRollingSwitchComp_C::Char_AirSprintTrack_Speed' has a wrong offset!");
static_assert(offsetof(UBP_DaMiaoRollingSwitchComp_C, Char_AirSprintTrack_MinDistance) == 0x000240, "Member 'UBP_DaMiaoRollingSwitchComp_C::Char_AirSprintTrack_MinDistance' has a wrong offset!");

}


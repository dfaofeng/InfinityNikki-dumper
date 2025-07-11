﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerRegularInAirMovementComp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "X6Game_structs.hpp"
#include "X6Game_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerRegularInAirMovementComp.BP_PlayerRegularInAirMovementComp_C
// 0x0128 (0x02F0 - 0x01C8)
class UBP_PlayerRegularInAirMovementComp_C : public UX6RMInAirComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TMulticastInlineDelegate<void(ERegularFloatingJumpStage NewStage, ERegularFloatingJumpStage OldStage)> Event_OnPlayerFloatingJumpStageChanged; // 0x01D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   BP_ConfigDTReadRowName;                            // 0x01E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BP_EnableDebugPrintJumpStage;                      // 0x01E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         BP_CurrentFloatingJumpStage;                       // 0x01E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         BP_PreviousFloatingJumpStage;                      // 0x01EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          BP_bEnableSpecialJumpAnim;                         // 0x01EB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_1EC[0x4];                                      // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        BP_CurrentHeight;                                  // 0x01F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UClass*                                 BP_Private_RegularJump_Base_Cls;                   // 0x01F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                        BP_DebugDelayedJumpTime;                           // 0x0200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UBP_JumpStage_ConfigTemplate_C> BP_PlayerDefaultJumpStageConfig;            // 0x0208(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TMap<EX6InputDeviceKeyType, TSoftObjectPtr<class UBP_JumpStage_ConfigTemplate_C>> BP_PlayerJumpStageConfigByDevice; // 0x0230(0x0050)(Edit, BlueprintVisible)
	bool                                          BP_bDebugEnableFloatJumpV2;                        // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_281[0x7];                                      // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class FName>                             BP_DeactivateTag;                                  // 0x0288(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	TMulticastInlineDelegate<void()>              OnJumpReleaseTriggered;                            // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          BP_bEnableSendJumpStageRPC;                        // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void BP_ActivateJumpFeature(class FName Tag);
	bool BP_CanActivateJumpFeature();
	void BP_CanCrash(bool* Ret);
	void BP_CanJump(bool* Ret);
	void BP_DeactivateJumpFeature(class FName Tag);
	void BP_DoFall();
	void BP_DoFloat(bool bForce);
	void BP_DoJump(bool bForce, ERegularJumpMode JumpMode);
	void BP_DoJumpRelease();
	void BP_ForceActivateJumpFeature();
	void BP_IsNormalJumpOnGround(bool* IsNormalJumpOnGround);
	void BP_Modify_TimeWindowOfResponseJumpInputWhenOffLedgeConfigValue(double Value);
	void BP_ModifyOwnerJumpStageConfigByDA(class UBP_JumpStage_ConfigTemplate_C* NewDataAsset, class UBP_JumpStage_ConfigTemplate_C** OldDataAsset);
	void BP_Multicast_ChangeJumpStage(ERegularFloatingJumpStage NewStage, bool bForceUpdate);
	void BP_OverrideCurrentGravityScale(double G);
	void BP_Reset_TimeWindowOfResponseJumpInputWhenOffLedgeConfigValue();
	void BP_ResetGravityScale();
	void BP_ResetInAirJumpCount();
	void BP_ResetNormalJumpCount();
	void BP_ResetOwnerJumpStageConfig();
	void BP_RevertOwnerJumpStageConfig();
	void BP_SetEnableSendJumpStageRPC(bool bEnable);
	void BP_SetEnableSpecialJumpAnim(bool bEnableSpecialJumpAnim, class UPrimaryDataAsset* SpecialJumpDA);
	void BPI_Get_CurrentInAirStates(ERegularFloatingJumpStage* FallStage, bool* IsInSpecialJumpAnim, ERegularJumpMode* RegularJumpMode, bool* IsJumpingInAir);
	void BPI_Get_CurrentInAirValues(double* InCurrentHeight, class UPrimaryDataAsset** SpecialJumpDA);
	void BPI_Get_EssentialValues(struct FVector* InVelocity, struct FVector* InCurrentAcceleration, double* InMaxAcceleration, double* InTurnAroundAngle);
	void BPI_Get_MaxSpeedValues(double* CurMinAnalogWalkSpeed, double* CurConfigMaxSpeed, double* CurActualMaxSpeed);
	void ExecuteUbergraph_BP_PlayerRegularInAirMovementComp(int32 EntryPoint);
	void InputAction_Crash();
	void MulticastRPC_ChangeJumpStage(ERegularFloatingJumpStage NewStage, bool bForceUpdate);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UpdateFallState(ERegularFloatingJumpStage FallStage, bool IsSlide);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerRegularInAirMovementComp_C">();
	}
	static class UBP_PlayerRegularInAirMovementComp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerRegularInAirMovementComp_C>();
	}
};
static_assert(alignof(UBP_PlayerRegularInAirMovementComp_C) == 0x000008, "Wrong alignment on UBP_PlayerRegularInAirMovementComp_C");
static_assert(sizeof(UBP_PlayerRegularInAirMovementComp_C) == 0x0002F0, "Wrong size on UBP_PlayerRegularInAirMovementComp_C");
static_assert(offsetof(UBP_PlayerRegularInAirMovementComp_C, UberGraphFrame) == 0x0001C8, "Member 'UBP_PlayerRegularInAirMovementComp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerRegularInAirMovementComp_C, Event_OnPlayerFloatingJumpStageChanged) == 0x0001D0, "Member 'UBP_PlayerRegularInAirMovementComp_C::Event_OnPlayerFloatingJumpStageChanged' has a wrong offset!");
static_assert(offsetof(UBP_PlayerRegularInAirMovementComp_C, BP_ConfigDTReadRowName) == 0x0001E0, "Member 'UBP_PlayerRegularInAirMovementComp_C::BP_ConfigDTReadRowName' has a wrong offset!");
static_assert(offsetof(UBP_PlayerRegularInAirMovementComp_C, BP_EnableDebugPrintJumpStage) == 0x0001E8, "Member 'UBP_PlayerRegularInAirMovementComp_C::BP_EnableDebugPrintJumpStage' has a wrong offset!");
static_assert(offsetof(UBP_PlayerRegularInAirMovementComp_C, BP_CurrentFloatingJumpStage) == 0x0001E9, "Member 'UBP_PlayerRegularInAirMovementComp_C::BP_CurrentFloatingJumpStage' has a wrong offset!");
static_assert(offsetof(UBP_PlayerRegularInAirMovementComp_C, BP_PreviousFloatingJumpStage) == 0x0001EA, "Member 'UBP_PlayerRegularInAirMovementComp_C::BP_PreviousFloatingJumpStage' has a wrong offset!");
static_assert(offsetof(UBP_PlayerRegularInAirMovementComp_C, BP_bEnableSpecialJumpAnim) == 0x0001EB, "Member 'UBP_PlayerRegularInAirMovementComp_C::BP_bEnableSpecialJumpAnim' has a wrong offset!");
static_assert(offsetof(UBP_PlayerRegularInAirMovementComp_C, BP_CurrentHeight) == 0x0001F0, "Member 'UBP_PlayerRegularInAirMovementComp_C::BP_CurrentHeight' has a wrong offset!");
static_assert(offsetof(UBP_PlayerRegularInAirMovementComp_C, BP_Private_RegularJump_Base_Cls) == 0x0001F8, "Member 'UBP_PlayerRegularInAirMovementComp_C::BP_Private_RegularJump_Base_Cls' has a wrong offset!");
static_assert(offsetof(UBP_PlayerRegularInAirMovementComp_C, BP_DebugDelayedJumpTime) == 0x000200, "Member 'UBP_PlayerRegularInAirMovementComp_C::BP_DebugDelayedJumpTime' has a wrong offset!");
static_assert(offsetof(UBP_PlayerRegularInAirMovementComp_C, BP_PlayerDefaultJumpStageConfig) == 0x000208, "Member 'UBP_PlayerRegularInAirMovementComp_C::BP_PlayerDefaultJumpStageConfig' has a wrong offset!");
static_assert(offsetof(UBP_PlayerRegularInAirMovementComp_C, BP_PlayerJumpStageConfigByDevice) == 0x000230, "Member 'UBP_PlayerRegularInAirMovementComp_C::BP_PlayerJumpStageConfigByDevice' has a wrong offset!");
static_assert(offsetof(UBP_PlayerRegularInAirMovementComp_C, BP_bDebugEnableFloatJumpV2) == 0x000280, "Member 'UBP_PlayerRegularInAirMovementComp_C::BP_bDebugEnableFloatJumpV2' has a wrong offset!");
static_assert(offsetof(UBP_PlayerRegularInAirMovementComp_C, BP_DeactivateTag) == 0x000288, "Member 'UBP_PlayerRegularInAirMovementComp_C::BP_DeactivateTag' has a wrong offset!");
static_assert(offsetof(UBP_PlayerRegularInAirMovementComp_C, OnJumpReleaseTriggered) == 0x0002D8, "Member 'UBP_PlayerRegularInAirMovementComp_C::OnJumpReleaseTriggered' has a wrong offset!");
static_assert(offsetof(UBP_PlayerRegularInAirMovementComp_C, BP_bEnableSendJumpStageRPC) == 0x0002E8, "Member 'UBP_PlayerRegularInAirMovementComp_C::BP_bEnableSendJumpStageRPC' has a wrong offset!");

}


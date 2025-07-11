﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerRegularFlyingMovementComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "EPlayerRegularFlyingMovementSpeedType_structs.hpp"
#include "EPlayerRegularFlyingMovementType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerRegularFlyingMovementComponent.BP_PlayerRegularFlyingMovementComponent_C
// 0x0048 (0x00F0 - 0x00A8)
class UBP_PlayerRegularFlyingMovementComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class UBP_RegularFlyingMovement_CT_C> BP_PlayerRegularFlyingMovementConfig;       // 0x00B0(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(EPlayerRegularFlyingMovementSpeedType NewGait, EPlayerRegularFlyingMovementSpeedType OldGait)> Event_OnFlySpeedTypeChanged; // 0x00D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        BP_CurFlyingMovementConfigSpeedValue;              // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_ChangeFlyingMovementSpeedType(EPlayerRegularFlyingMovementSpeedType NewFlyingMovementSpeedType);
	void BP_GetCurrentFlyingSpeedType(EPlayerRegularFlyingMovementSpeedType* Result);
	void BP_ModifyBrakingDecelerationFlyingConfigValue(double Value);
	void BP_ModifyMaxFlySpeedConfigValue(EPlayerRegularFlyingMovementSpeedType FlyingMovementSpeedType, double Value);
	void BP_ResetBrakingDecelerationFlyingConfigValue();
	void BP_ResetMaxFlySpeedConfigValue(EPlayerRegularFlyingMovementSpeedType FlyingMovementSpeedType);
	void BP_SetCurrenntFlyingMovementType(EPlayerRegularFlyingMovementType NewFlyingMovementType);
	void BPI_Get_RegularFlyingConfigData(double* LowFlyingSpeed, double* NormalFlyingSpeed, double* TopFlyingSpeed);
	void ExecuteUbergraph_BP_PlayerRegularFlyingMovementComponent(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerRegularFlyingMovementComponent_C">();
	}
	static class UBP_PlayerRegularFlyingMovementComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerRegularFlyingMovementComponent_C>();
	}
};
static_assert(alignof(UBP_PlayerRegularFlyingMovementComponent_C) == 0x000008, "Wrong alignment on UBP_PlayerRegularFlyingMovementComponent_C");
static_assert(sizeof(UBP_PlayerRegularFlyingMovementComponent_C) == 0x0000F0, "Wrong size on UBP_PlayerRegularFlyingMovementComponent_C");
static_assert(offsetof(UBP_PlayerRegularFlyingMovementComponent_C, UberGraphFrame) == 0x0000A8, "Member 'UBP_PlayerRegularFlyingMovementComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerRegularFlyingMovementComponent_C, BP_PlayerRegularFlyingMovementConfig) == 0x0000B0, "Member 'UBP_PlayerRegularFlyingMovementComponent_C::BP_PlayerRegularFlyingMovementConfig' has a wrong offset!");
static_assert(offsetof(UBP_PlayerRegularFlyingMovementComponent_C, Event_OnFlySpeedTypeChanged) == 0x0000D8, "Member 'UBP_PlayerRegularFlyingMovementComponent_C::Event_OnFlySpeedTypeChanged' has a wrong offset!");
static_assert(offsetof(UBP_PlayerRegularFlyingMovementComponent_C, BP_CurFlyingMovementConfigSpeedValue) == 0x0000E8, "Member 'UBP_PlayerRegularFlyingMovementComponent_C::BP_CurFlyingMovementConfigSpeedValue' has a wrong offset!");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerMantleComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "EMantleType_structs.hpp"
#include "X6Game_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerMantleComponent.BP_PlayerMantleComponent_C
// 0x0100 (0x04C0 - 0x03C0)
class UBP_PlayerMantleComponent_C final : public UX6PlayerMantleComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          BP_Private_IsMantling;                             // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C9[0x7];                                      // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             BP_Private_MantleActualStartOffset;                // 0x03D0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    BP_Private_MantleTargetComponent;                  // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, SaveGame, NoDestructor, HasGetValueTypeHash)
	double                                        BP_Private_CurrentUpdateTime;                      // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BP_Private_CurrentMontageLength;                   // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMantleType                                   BP_Private_CurrentMantleType;                      // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_449[0x7];                                      // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                BP_Private_AdjustLength;                           // 0x0450(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BP_Private_IsActivateMantleFeature;                // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_469[0x7];                                      // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UBP_Mantle_ConfigTemplate_C> BP_MantleConfig;                               // 0x0470(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UBP_JumpStage_ConfigTemplate_C> BP_MantleJumpConfig;                        // 0x0498(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PlayerMantleComponent(int32 EntryPoint);
	void BP_TryToStartMantle(bool* Ret);
	void BP_Private_PostStart();
	void BP_Private_MantleUpdate(double DeltaTime);
	void BP_Private_MantleStart(double MantleHeigh, const struct FTransform& TargetTransform, class USceneComponent* HitComponet, bool* Ret);
	void BP_Private_MantlePreCheck();
	void BP_Private_MantlePostCheck(bool ReceivedInput, bool* Ret);
	void BP_Private_MantleMainCheckInFalling(double ZOffset, bool* Ret);
	void BP_Private_MantleMainCheck(double ZOffset, bool* Ret);
	void BP_Private_MantleAllCheck(double ZOffset, bool* Vault);
	void BP_Private_ForceEndCheck(bool* Ret);
	void BP_IsMantleFeatureActivated(bool* Ret);
	void BP_GetCurrentMantleType(EMantleType* MantleType);
	void BP_CanDoMantleInFalling(const struct FVector& CapsuleBaseLocation, const struct FVector& CurrentPlayerInputVector, const struct FVector& CurActorLocation, double MinLedgeHeight, double MaxLedgeHeight, bool* Ret);
	void BP_AnimNotify_OnPlayerMantleAnimationFinished();
	void BP_ActivateMantleFeature(bool IsActivate);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerMantleComponent_C">();
	}
	static class UBP_PlayerMantleComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerMantleComponent_C>();
	}
};
static_assert(alignof(UBP_PlayerMantleComponent_C) == 0x000010, "Wrong alignment on UBP_PlayerMantleComponent_C");
static_assert(sizeof(UBP_PlayerMantleComponent_C) == 0x0004C0, "Wrong size on UBP_PlayerMantleComponent_C");
static_assert(offsetof(UBP_PlayerMantleComponent_C, UberGraphFrame) == 0x0003C0, "Member 'UBP_PlayerMantleComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerMantleComponent_C, BP_Private_IsMantling) == 0x0003C8, "Member 'UBP_PlayerMantleComponent_C::BP_Private_IsMantling' has a wrong offset!");
static_assert(offsetof(UBP_PlayerMantleComponent_C, BP_Private_MantleActualStartOffset) == 0x0003D0, "Member 'UBP_PlayerMantleComponent_C::BP_Private_MantleActualStartOffset' has a wrong offset!");
static_assert(offsetof(UBP_PlayerMantleComponent_C, BP_Private_MantleTargetComponent) == 0x000430, "Member 'UBP_PlayerMantleComponent_C::BP_Private_MantleTargetComponent' has a wrong offset!");
static_assert(offsetof(UBP_PlayerMantleComponent_C, BP_Private_CurrentUpdateTime) == 0x000438, "Member 'UBP_PlayerMantleComponent_C::BP_Private_CurrentUpdateTime' has a wrong offset!");
static_assert(offsetof(UBP_PlayerMantleComponent_C, BP_Private_CurrentMontageLength) == 0x000440, "Member 'UBP_PlayerMantleComponent_C::BP_Private_CurrentMontageLength' has a wrong offset!");
static_assert(offsetof(UBP_PlayerMantleComponent_C, BP_Private_CurrentMantleType) == 0x000448, "Member 'UBP_PlayerMantleComponent_C::BP_Private_CurrentMantleType' has a wrong offset!");
static_assert(offsetof(UBP_PlayerMantleComponent_C, BP_Private_AdjustLength) == 0x000450, "Member 'UBP_PlayerMantleComponent_C::BP_Private_AdjustLength' has a wrong offset!");
static_assert(offsetof(UBP_PlayerMantleComponent_C, BP_Private_IsActivateMantleFeature) == 0x000468, "Member 'UBP_PlayerMantleComponent_C::BP_Private_IsActivateMantleFeature' has a wrong offset!");
static_assert(offsetof(UBP_PlayerMantleComponent_C, BP_MantleConfig) == 0x000470, "Member 'UBP_PlayerMantleComponent_C::BP_MantleConfig' has a wrong offset!");
static_assert(offsetof(UBP_PlayerMantleComponent_C, BP_MantleJumpConfig) == 0x000498, "Member 'UBP_PlayerMantleComponent_C::BP_MantleJumpConfig' has a wrong offset!");

}


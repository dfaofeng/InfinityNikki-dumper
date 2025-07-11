﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterBaseInfoComponent

#include "Basic.hpp"

#include "EInt32PlayerPawnStateTypes_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_X6ActorComponent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CharacterBaseInfoComponent.BP_CharacterBaseInfoComponent_C
// 0x0070 (0x0118 - 0x00A8)
class UBP_CharacterBaseInfoComponent_C final : public UBP_X6ActorComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TMulticastInlineDelegate<void(EInt32PlayerPawnStateTypes AddedInt32State, EInt32PlayerPawnStateTypes RemovedInt32State)> OnPlayerStateUpdated; // 0x00B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(EInt32PlayerPawnStateTypes Int32StateToStop)> OnPlayerReceiveStopState; // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        BP_SlopeTraceForwardOffset;                        // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BP_SlopeTraceRightOffset;                          // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BP_SlopeTraceUpOffset;                             // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BP_SlopeTraceDownOffset;                           // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BP_BoneNameKnee_L;                                 // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BP_BoneNameKnee_R;                                 // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BP_NeedCalcFootPos;                                // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BP_bEnableSlopeCalculator;                         // 0x0101(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_102[0x6];                                      // 0x0102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 BP_RMBaseLogicProcessorClass;                      // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          BP_Enable;                                         // 0x0110(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateActorListenPlayerState(bool AddOrRemove, class AActor* ActorListenPlayerState);
	void ReceiveTick(float DeltaSeconds);
	void PlayerRemoveState(int32 StateToRemove);
	void PlayerHasState(int32 CheckState, bool* Has);
	void PlayerAddState(int32 InNewState);
	void ExecuteUbergraph_BP_CharacterBaseInfoComponent(int32 EntryPoint);
	void CanPlayerDoAction(int32 NewAction, bool* Can);
	void BP_ListenPlayerStateUpdate(TArray<EInt32PlayerPawnStateTypes>& States, class AActor* ActorListenPlayerState);
	void BP_GetTransToRightFoot(bool* bTransToRightFoot);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharacterBaseInfoComponent_C">();
	}
	static class UBP_CharacterBaseInfoComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CharacterBaseInfoComponent_C>();
	}
};
static_assert(alignof(UBP_CharacterBaseInfoComponent_C) == 0x000008, "Wrong alignment on UBP_CharacterBaseInfoComponent_C");
static_assert(sizeof(UBP_CharacterBaseInfoComponent_C) == 0x000118, "Wrong size on UBP_CharacterBaseInfoComponent_C");
static_assert(offsetof(UBP_CharacterBaseInfoComponent_C, UberGraphFrame) == 0x0000A8, "Member 'UBP_CharacterBaseInfoComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_CharacterBaseInfoComponent_C, OnPlayerStateUpdated) == 0x0000B0, "Member 'UBP_CharacterBaseInfoComponent_C::OnPlayerStateUpdated' has a wrong offset!");
static_assert(offsetof(UBP_CharacterBaseInfoComponent_C, OnPlayerReceiveStopState) == 0x0000C0, "Member 'UBP_CharacterBaseInfoComponent_C::OnPlayerReceiveStopState' has a wrong offset!");
static_assert(offsetof(UBP_CharacterBaseInfoComponent_C, BP_SlopeTraceForwardOffset) == 0x0000D0, "Member 'UBP_CharacterBaseInfoComponent_C::BP_SlopeTraceForwardOffset' has a wrong offset!");
static_assert(offsetof(UBP_CharacterBaseInfoComponent_C, BP_SlopeTraceRightOffset) == 0x0000D8, "Member 'UBP_CharacterBaseInfoComponent_C::BP_SlopeTraceRightOffset' has a wrong offset!");
static_assert(offsetof(UBP_CharacterBaseInfoComponent_C, BP_SlopeTraceUpOffset) == 0x0000E0, "Member 'UBP_CharacterBaseInfoComponent_C::BP_SlopeTraceUpOffset' has a wrong offset!");
static_assert(offsetof(UBP_CharacterBaseInfoComponent_C, BP_SlopeTraceDownOffset) == 0x0000E8, "Member 'UBP_CharacterBaseInfoComponent_C::BP_SlopeTraceDownOffset' has a wrong offset!");
static_assert(offsetof(UBP_CharacterBaseInfoComponent_C, BP_BoneNameKnee_L) == 0x0000F0, "Member 'UBP_CharacterBaseInfoComponent_C::BP_BoneNameKnee_L' has a wrong offset!");
static_assert(offsetof(UBP_CharacterBaseInfoComponent_C, BP_BoneNameKnee_R) == 0x0000F8, "Member 'UBP_CharacterBaseInfoComponent_C::BP_BoneNameKnee_R' has a wrong offset!");
static_assert(offsetof(UBP_CharacterBaseInfoComponent_C, BP_NeedCalcFootPos) == 0x000100, "Member 'UBP_CharacterBaseInfoComponent_C::BP_NeedCalcFootPos' has a wrong offset!");
static_assert(offsetof(UBP_CharacterBaseInfoComponent_C, BP_bEnableSlopeCalculator) == 0x000101, "Member 'UBP_CharacterBaseInfoComponent_C::BP_bEnableSlopeCalculator' has a wrong offset!");
static_assert(offsetof(UBP_CharacterBaseInfoComponent_C, BP_RMBaseLogicProcessorClass) == 0x000108, "Member 'UBP_CharacterBaseInfoComponent_C::BP_RMBaseLogicProcessorClass' has a wrong offset!");
static_assert(offsetof(UBP_CharacterBaseInfoComponent_C, BP_Enable) == 0x000110, "Member 'UBP_CharacterBaseInfoComponent_C::BP_Enable' has a wrong offset!");

}


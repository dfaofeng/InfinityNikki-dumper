﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WoolenHeart_LSeq

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "F_GetWoolenHeartPerformanceInfo_structs.hpp"
#include "EWoolenHeartEMVersion_structs.hpp"
#include "X6Game_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C
// 0x0220 (0x0658 - 0x0438)
class ABP_WoolenHeart_LSeq_C final : public AX6Actor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0438(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             BP_PossessedPlayer;                                // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   BP_UIText;                                         // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ULevelSequence*                         BP_PlayRewardSequence;                             // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   NikkiBindingTag;                                   // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class ULevelSequence>          BP_RewardSequenceSoftPath;                         // 0x0470(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsFloatingOnEnter;                                // 0x0498(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_499[0x3];                                      // 0x0499(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DamiaoBindingTag;                                  // 0x049C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A4[0x4];                                      // 0x04A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UX6CharacterMovementComponent*          PlayerMovementComp;                                // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          bRootMotionDisabled;                               // 0x04B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERootMotionMode                               PreviousRootMotionMode;                            // 0x04B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B2[0x6];                                      // 0x04B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        BP_TimeStopRange;                                  // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class AActor*>              AdditionalBindingTag2Actor;                        // 0x04C0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ALevelSequenceActor*                    SequenceActor;                                     // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           PossesdPlayerAM;                                   // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        BP_PlayerYawOffsetDegree;                          // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMirror;                                           // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWoolenHeartEMVersion                         EMVersion;                                         // 0x0529(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52A[0x6];                                      // 0x052A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FF_GetWoolenHeartPerformanceInfo       PerformanceInfo;                                   // 0x0530(0x0100)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class ASkeletalMeshActor*                     MeshActor;                                         // 0x0630(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ULevelSequencePlayer*                   SequencePlayer;                                    // 0x0638(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                        LSSpawnedObject;                                   // 0x0640(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bCanShareWoolenHeart;                              // 0x0650(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFollowerDisableConstraints;                       // 0x0651(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AsyncLoadRewardLS();
	void BP_AddInvincibleBuff();
	void BP_CanAdjustPlayerYaw(bool* bCanAdjust);
	void BP_CreateTimeStopZone(TArray<class AActor*>& WhiteListActorArray, const struct FVector& Position, double Range);
	void BP_DestroyTimeStopZone();
	void BP_DisableRootMotion(bool* NewParam);
	void BP_FireEventStartRewardUI(const class FText& Reward_Text);
	void BP_GetHandHoldingPlayer(class AActor** HandHoldingPlayer);
	void BP_GetSpawnWoolenHeartSKMeshTransform(struct FTransform* Transform);
	void BP_IsPlayingGetWoolenHeartPerformance(int64 WoolenHeartEntiyID, bool* bPlaying);
	void BP_PlayFeatureSequence(class ULevelSequence* LevelSequenceAsset, bool HideHUD, class AActor* TransformActor, class ALevelSequenceActor** SequenceActor_0, class ULevelSequencePlayer** SequencePlayer_0);
	void BP_RemoveInvincibleBuff();
	void BP_RestoreRootMotionMode();
	void BP_SetPlayingGetWoolenHeartPerformance(int64 WoolenHeartEntiyID, bool bPlaying);
	void BP_UpdateWoolenHeartRewardLS(bool bStartPlay);
	void ExecuteUbergraph_BP_WoolenHeart_LSeq(int32 EntryPoint);
	void OnLSBegainPlayNotInHUD();
	void OnLSBeginPlay();
	void OnLSFinishPlay();
	void OnLSObjectSpawned(class UObject* Object);
	void PushTips();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void SetPerformacneInfo(const struct FF_GetWoolenHeartPerformanceInfo& PerformanceInfo_0);
	void SetPlayLevelSeq(class ULevelSequence* PlayLS, const TMap<class FName, class AActor*>& AdditionalBindingTag2Actor_0);
	void SetPlayUIText(const class FText& UIText);
	void SetPossessedPlayer(class ACharacter* PossessedPlayer);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WoolenHeart_LSeq_C">();
	}
	static class ABP_WoolenHeart_LSeq_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WoolenHeart_LSeq_C>();
	}
};
static_assert(alignof(ABP_WoolenHeart_LSeq_C) == 0x000008, "Wrong alignment on ABP_WoolenHeart_LSeq_C");
static_assert(sizeof(ABP_WoolenHeart_LSeq_C) == 0x000658, "Wrong size on ABP_WoolenHeart_LSeq_C");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, UberGraphFrame) == 0x000438, "Member 'ABP_WoolenHeart_LSeq_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, DefaultSceneRoot) == 0x000440, "Member 'ABP_WoolenHeart_LSeq_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, BP_PossessedPlayer) == 0x000448, "Member 'ABP_WoolenHeart_LSeq_C::BP_PossessedPlayer' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, BP_UIText) == 0x000450, "Member 'ABP_WoolenHeart_LSeq_C::BP_UIText' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, BP_PlayRewardSequence) == 0x000460, "Member 'ABP_WoolenHeart_LSeq_C::BP_PlayRewardSequence' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, NikkiBindingTag) == 0x000468, "Member 'ABP_WoolenHeart_LSeq_C::NikkiBindingTag' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, BP_RewardSequenceSoftPath) == 0x000470, "Member 'ABP_WoolenHeart_LSeq_C::BP_RewardSequenceSoftPath' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, bIsFloatingOnEnter) == 0x000498, "Member 'ABP_WoolenHeart_LSeq_C::bIsFloatingOnEnter' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, DamiaoBindingTag) == 0x00049C, "Member 'ABP_WoolenHeart_LSeq_C::DamiaoBindingTag' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, PlayerMovementComp) == 0x0004A8, "Member 'ABP_WoolenHeart_LSeq_C::PlayerMovementComp' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, bRootMotionDisabled) == 0x0004B0, "Member 'ABP_WoolenHeart_LSeq_C::bRootMotionDisabled' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, PreviousRootMotionMode) == 0x0004B1, "Member 'ABP_WoolenHeart_LSeq_C::PreviousRootMotionMode' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, BP_TimeStopRange) == 0x0004B8, "Member 'ABP_WoolenHeart_LSeq_C::BP_TimeStopRange' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, AdditionalBindingTag2Actor) == 0x0004C0, "Member 'ABP_WoolenHeart_LSeq_C::AdditionalBindingTag2Actor' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, SequenceActor) == 0x000510, "Member 'ABP_WoolenHeart_LSeq_C::SequenceActor' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, PossesdPlayerAM) == 0x000518, "Member 'ABP_WoolenHeart_LSeq_C::PossesdPlayerAM' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, BP_PlayerYawOffsetDegree) == 0x000520, "Member 'ABP_WoolenHeart_LSeq_C::BP_PlayerYawOffsetDegree' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, bMirror) == 0x000528, "Member 'ABP_WoolenHeart_LSeq_C::bMirror' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, EMVersion) == 0x000529, "Member 'ABP_WoolenHeart_LSeq_C::EMVersion' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, PerformanceInfo) == 0x000530, "Member 'ABP_WoolenHeart_LSeq_C::PerformanceInfo' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, MeshActor) == 0x000630, "Member 'ABP_WoolenHeart_LSeq_C::MeshActor' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, SequencePlayer) == 0x000638, "Member 'ABP_WoolenHeart_LSeq_C::SequencePlayer' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, LSSpawnedObject) == 0x000640, "Member 'ABP_WoolenHeart_LSeq_C::LSSpawnedObject' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, bCanShareWoolenHeart) == 0x000650, "Member 'ABP_WoolenHeart_LSeq_C::bCanShareWoolenHeart' has a wrong offset!");
static_assert(offsetof(ABP_WoolenHeart_LSeq_C, bFollowerDisableConstraints) == 0x000651, "Member 'ABP_WoolenHeart_LSeq_C::bFollowerDisableConstraints' has a wrong offset!");

}


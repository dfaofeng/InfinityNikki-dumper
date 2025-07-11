﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PawnData

#include "Basic.hpp"

#include "F_HitActionConfigDatas_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PawnData.BP_PawnData_C
// 0x01A8 (0x01D8 - 0x0030)
class UBP_PawnData_C final : public UPrimaryDataAsset
{
public:
	class UBP_HitFeedBackConfig_Template_C*       PlayerHitFeedBackConfig;                           // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_BuffConfig_C*                       HitAddBuffDA;                                      // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        HitBuffDelayToRemove;                              // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FF_HitActionConfigDatas>        HitActionConfigData;                               // 0x0048(0x0010)(Edit, BlueprintVisible)
	bool                                          CloseHitDirModify;                                 // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          QuickRelive;                                       // 0x0059(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        QuickReliveLimitTime;                              // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         QuickReliveLimitNum;                               // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DelayDestroyTime;                                  // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LifeSpan;                                          // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_LifeSpan_C*                         LifeSpanDA;                                        // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMonster;                                         // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseBossCamera;                                     // 0x0089(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FallingDamage;                                     // 0x008A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B[0x5];                                       // 0x008B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FallingDemageHeight;                               // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           BaseAIBehaviorTag;                                 // 0x0098(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_BuffConfig_C*>               BirthBuffDAList;                                   // 0x00A0(0x0010)(Edit, BlueprintVisible)
	class UBP_Monster_Locomotion_C*               LocomotionConfig;                                  // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowCombatUMG;                                     // 0x00B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        UIOffsetZ;                                         // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShowDistance;                                      // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WaterInteraction;                                  // 0x00D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DeadCapsuleRadio;                                  // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MinWaterDepth;                                     // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowMonsterMarker;                                 // 0x00E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UBP_AbilityAnimDataAsset_C> AbilityMontageConfig;                           // 0x00F0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UCameraBaseParamsData*                  BossCameraConfig;                                  // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_MonsterAnimConfigs_C*               AnimConfig;                                        // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_WorldAI_PerceptionConfig_C*         PerceptionConfig;                                  // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FViewTargetTransitionParams            BossBlendInParam;                                  // 0x0130(0x0020)(Edit, BlueprintVisible, NoDestructor)
	struct FViewTargetTransitionParams            BossBlendOutParam;                                 // 0x0150(0x0020)(Edit, BlueprintVisible, NoDestructor)
	class UClass*                                 CameraSynchronizerClass;                           // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UX6AbilitySet>           AbilitySet;                                        // 0x0178(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                 OverrideHitGA;                                     // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 OverrideDeathGA;                                   // 0x01A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UBP_MonsterTurnAnimAsset_C> TurnInPlaceConfig;                              // 0x01B0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PawnData_C">();
	}
	static class UBP_PawnData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PawnData_C>();
	}
};
static_assert(alignof(UBP_PawnData_C) == 0x000008, "Wrong alignment on UBP_PawnData_C");
static_assert(sizeof(UBP_PawnData_C) == 0x0001D8, "Wrong size on UBP_PawnData_C");
static_assert(offsetof(UBP_PawnData_C, PlayerHitFeedBackConfig) == 0x000030, "Member 'UBP_PawnData_C::PlayerHitFeedBackConfig' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, HitAddBuffDA) == 0x000038, "Member 'UBP_PawnData_C::HitAddBuffDA' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, HitBuffDelayToRemove) == 0x000040, "Member 'UBP_PawnData_C::HitBuffDelayToRemove' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, HitActionConfigData) == 0x000048, "Member 'UBP_PawnData_C::HitActionConfigData' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, CloseHitDirModify) == 0x000058, "Member 'UBP_PawnData_C::CloseHitDirModify' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, QuickRelive) == 0x000059, "Member 'UBP_PawnData_C::QuickRelive' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, QuickReliveLimitTime) == 0x000060, "Member 'UBP_PawnData_C::QuickReliveLimitTime' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, QuickReliveLimitNum) == 0x000068, "Member 'UBP_PawnData_C::QuickReliveLimitNum' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, DelayDestroyTime) == 0x000070, "Member 'UBP_PawnData_C::DelayDestroyTime' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, LifeSpan) == 0x000078, "Member 'UBP_PawnData_C::LifeSpan' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, LifeSpanDA) == 0x000080, "Member 'UBP_PawnData_C::LifeSpanDA' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, IsMonster) == 0x000088, "Member 'UBP_PawnData_C::IsMonster' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, UseBossCamera) == 0x000089, "Member 'UBP_PawnData_C::UseBossCamera' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, FallingDamage) == 0x00008A, "Member 'UBP_PawnData_C::FallingDamage' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, FallingDemageHeight) == 0x000090, "Member 'UBP_PawnData_C::FallingDemageHeight' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, BaseAIBehaviorTag) == 0x000098, "Member 'UBP_PawnData_C::BaseAIBehaviorTag' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, BirthBuffDAList) == 0x0000A0, "Member 'UBP_PawnData_C::BirthBuffDAList' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, LocomotionConfig) == 0x0000B0, "Member 'UBP_PawnData_C::LocomotionConfig' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, ShowCombatUMG) == 0x0000B8, "Member 'UBP_PawnData_C::ShowCombatUMG' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, UIOffsetZ) == 0x0000C0, "Member 'UBP_PawnData_C::UIOffsetZ' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, ShowDistance) == 0x0000C8, "Member 'UBP_PawnData_C::ShowDistance' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, WaterInteraction) == 0x0000D0, "Member 'UBP_PawnData_C::WaterInteraction' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, DeadCapsuleRadio) == 0x0000D8, "Member 'UBP_PawnData_C::DeadCapsuleRadio' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, MinWaterDepth) == 0x0000E0, "Member 'UBP_PawnData_C::MinWaterDepth' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, ShowMonsterMarker) == 0x0000E8, "Member 'UBP_PawnData_C::ShowMonsterMarker' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, AbilityMontageConfig) == 0x0000F0, "Member 'UBP_PawnData_C::AbilityMontageConfig' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, BossCameraConfig) == 0x000118, "Member 'UBP_PawnData_C::BossCameraConfig' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, AnimConfig) == 0x000120, "Member 'UBP_PawnData_C::AnimConfig' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, PerceptionConfig) == 0x000128, "Member 'UBP_PawnData_C::PerceptionConfig' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, BossBlendInParam) == 0x000130, "Member 'UBP_PawnData_C::BossBlendInParam' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, BossBlendOutParam) == 0x000150, "Member 'UBP_PawnData_C::BossBlendOutParam' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, CameraSynchronizerClass) == 0x000170, "Member 'UBP_PawnData_C::CameraSynchronizerClass' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, AbilitySet) == 0x000178, "Member 'UBP_PawnData_C::AbilitySet' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, OverrideHitGA) == 0x0001A0, "Member 'UBP_PawnData_C::OverrideHitGA' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, OverrideDeathGA) == 0x0001A8, "Member 'UBP_PawnData_C::OverrideDeathGA' has a wrong offset!");
static_assert(offsetof(UBP_PawnData_C, TurnInPlaceConfig) == 0x0001B0, "Member 'UBP_PawnData_C::TurnInPlaceConfig' has a wrong offset!");

}


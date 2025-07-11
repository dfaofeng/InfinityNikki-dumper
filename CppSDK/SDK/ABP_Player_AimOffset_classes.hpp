﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Player_AimOffset

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "X6Animation_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ABP_Player_AimOffset_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Player_AimOffset.ABP_Player_AimOffset_C
// 0x0FA0 (0x1370 - 0x03D0)
class UABP_Player_AimOffset_C : public UAnimInstance
{
public:
	uint8                                         Pad_3C8[0x8];                                      // 0x03C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_Player_AimOffset::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;         // 0x03D8(0x0020)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x03F8(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0400(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_16;                             // 0x0408(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_5;                   // 0x0428(0x00B8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_15;                             // 0x04E0(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_14;                             // 0x0500(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_13;                             // 0x0520(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_12;                             // 0x0540(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_11;                             // 0x0560(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_10;                             // 0x0580(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_9;                              // 0x05A0(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_8;                              // 0x05C0(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_7;                              // 0x05E0(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_4;                   // 0x0600(0x00B8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_6;                              // 0x06B8(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_3;                   // 0x06D8(0x00B8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_5;                              // 0x0790(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_4;                              // 0x07B0(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_3;                              // 0x07D0(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_2;                   // 0x07F0(0x00B8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x08A8(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x08C8(0x00B8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0980(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x09A0(0x00B8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x0A58(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x0AD8(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x0B00(0x0080)()
	struct FAnimNode_X6AimOffsetLookAt            AnimGraphNode_X6AimOffsetLookAt;                   // 0x0B80(0x0210)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0D90(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0EB8(0x0128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0FE0(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1000(0x0020)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x1020(0x00F0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x1110(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x1138(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x1180(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x11A8(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x11D0(0x0080)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x1250(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x1298(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x12C0(0x0028)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x12E8(0x0020)()
	class UAimOffsetBlendSpace*                   IdleAO;                                            // 0x1308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAimOffsetBlendSpace*                   DialogueAO;                                        // 0x1310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAimOffsetBlendSpace*                   CurActiveAO;                                       // 0x1318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          IdlePose;                                          // 0x1320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LookAtAxis;                                        // 0x1328(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SocketName;                                        // 0x1340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAOValid;                                         // 0x1348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPauseAimOffset;                                   // 0x1349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCustomSmoothingTime;                              // 0x134A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_134B[0x5];                                     // 0x134B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CustomSmoothingTime;                               // 0x1350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ValidAOBlendTime;                                  // 0x1358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerAnimStatesComponent_C*        PlayerAnimStatesComponent;                         // 0x1360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           IsLookAtChangedTimer;                              // 0x1368(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AnimLayer_AimOffset(const struct FPoseLink& InPoseForAimOffset, struct FPoseLink* AnimLayer_AimOffset_0);
	void AnimLayer_BehaviorAdditiveMode(const struct FPoseLink& InPoseForPlayerBehavior, struct FPoseLink* AnimLayer_BehaviorAdditiveMode_0);
	void AnimLayer_CombatMovement(struct FPoseLink* AnimLayer_CombatMovement_0);
	void AnimLayer_EquipmentAdditiveMode(const struct FPoseLink& InPoseForEquipment, struct FPoseLink* AnimLayer_EquipmentAdditiveMode_0);
	void AnimLayer_Jump(struct FPoseLink* AnimLayer_Jump_0);
	void AnimLayer_Land(struct FPoseLink* AnimLayer_Land_0);
	void AnimLayer_MovementDependObject(struct FPoseLink* AnimLayer_MovementDependObject_0);
	void AnimLayer_NPCAdditiveBehavior(const struct FPoseLink& InPose, struct FPoseLink* AnimLayer_NPCAdditiveBehavior_0);
	void AnimLayer_NPCBehavior(const struct FPoseLink& InPose_0, struct FPoseLink* AnimLayer_NPCBehavior_0);
	void AnimLayer_PlayerControllingTool(struct FPoseLink* AnimLayer_PlayerControllingTool_0);
	void AnimLayer_PlayerRegularMovement(struct FPoseLink* AnimLayer_PlayerRegularMovement_0);
	void AnimLayer_SpecialSurfaceMovement(struct FPoseLink* AnimLayer_SpecialSurfaceMovement_0);
	void AnimLayer_StrafeMovement(struct FPoseLink* AnimLayer_StrafeMovement_0);
	void AnimLayer_UsingCarrierMovement(struct FPoseLink* AnimLayer_UsingCarrierMovement_0);
	void AnimLayer_WhiteBoxMovement(struct FPoseLink* AnimLayer_WhiteBoxMovement_0);
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void CanUseDialogPerformance(bool* bRet);
	void ExecuteUbergraph_ABP_Player_AimOffset(int32 EntryPoint);
	void HandleIsLookAtChanged(bool IsLookAtValid);
	void OnIsLookAtChanged(bool IsLookAtValid);
	void SkipUpdateAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Player_AimOffset_C">();
	}
	static class UABP_Player_AimOffset_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Player_AimOffset_C>();
	}
};
static_assert(alignof(UABP_Player_AimOffset_C) == 0x000010, "Wrong alignment on UABP_Player_AimOffset_C");
static_assert(sizeof(UABP_Player_AimOffset_C) == 0x001370, "Wrong size on UABP_Player_AimOffset_C");
static_assert(offsetof(UABP_Player_AimOffset_C, UberGraphFrame) == 0x0003D0, "Member 'UABP_Player_AimOffset_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, __AnimBlueprintMutables) == 0x0003D8, "Member 'UABP_Player_AimOffset_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimBlueprintExtension_PropertyAccess) == 0x0003F8, "Member 'UABP_Player_AimOffset_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimBlueprintExtension_Base) == 0x000400, "Member 'UABP_Player_AimOffset_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_Root_16) == 0x000408, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_Root_16' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_LinkedInputPose_5) == 0x000428, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_LinkedInputPose_5' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_Root_15) == 0x0004E0, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_Root_15' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_Root_14) == 0x000500, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_Root_14' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_Root_13) == 0x000520, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_Root_13' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_Root_12) == 0x000540, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_Root_12' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_Root_11) == 0x000560, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_Root_11' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_Root_10) == 0x000580, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_Root_10' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_Root_9) == 0x0005A0, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_Root_9' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_Root_8) == 0x0005C0, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_Root_8' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_Root_7) == 0x0005E0, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_Root_7' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_LinkedInputPose_4) == 0x000600, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_LinkedInputPose_4' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_Root_6) == 0x0006B8, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_Root_6' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_LinkedInputPose_3) == 0x0006D8, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_LinkedInputPose_3' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_Root_5) == 0x000790, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_Root_5' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_Root_4) == 0x0007B0, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_Root_4' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_Root_3) == 0x0007D0, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_Root_3' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_LinkedInputPose_2) == 0x0007F0, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_LinkedInputPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_Root_2) == 0x0008A8, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_Root_2' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_LinkedInputPose_1) == 0x0008C8, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_Root_1) == 0x000980, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_LinkedInputPose) == 0x0009A0, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_SaveCachedPose_2) == 0x000A58, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_UseCachedPose_5) == 0x000AD8, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_SaveCachedPose_1) == 0x000B00, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_X6AimOffsetLookAt) == 0x000B80, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_X6AimOffsetLookAt' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_ModifyBone_1) == 0x000D90, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_ModifyBone) == 0x000EB8, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_ComponentToLocalSpace) == 0x000FE0, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_LocalToComponentSpace) == 0x001000, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_LayeredBoneBlend) == 0x001020, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_UseCachedPose_4) == 0x001110, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_BlendListByBool_1) == 0x001138, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_UseCachedPose_3) == 0x001180, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_UseCachedPose_2) == 0x0011A8, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_SaveCachedPose) == 0x0011D0, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_BlendListByBool) == 0x001250, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_UseCachedPose_1) == 0x001298, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_UseCachedPose) == 0x0012C0, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, AnimGraphNode_Root) == 0x0012E8, "Member 'UABP_Player_AimOffset_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, IdleAO) == 0x001308, "Member 'UABP_Player_AimOffset_C::IdleAO' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, DialogueAO) == 0x001310, "Member 'UABP_Player_AimOffset_C::DialogueAO' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, CurActiveAO) == 0x001318, "Member 'UABP_Player_AimOffset_C::CurActiveAO' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, IdlePose) == 0x001320, "Member 'UABP_Player_AimOffset_C::IdlePose' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, LookAtAxis) == 0x001328, "Member 'UABP_Player_AimOffset_C::LookAtAxis' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, SocketName) == 0x001340, "Member 'UABP_Player_AimOffset_C::SocketName' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, IsAOValid) == 0x001348, "Member 'UABP_Player_AimOffset_C::IsAOValid' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, bPauseAimOffset) == 0x001349, "Member 'UABP_Player_AimOffset_C::bPauseAimOffset' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, bCustomSmoothingTime) == 0x00134A, "Member 'UABP_Player_AimOffset_C::bCustomSmoothingTime' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, CustomSmoothingTime) == 0x001350, "Member 'UABP_Player_AimOffset_C::CustomSmoothingTime' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, ValidAOBlendTime) == 0x001358, "Member 'UABP_Player_AimOffset_C::ValidAOBlendTime' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, PlayerAnimStatesComponent) == 0x001360, "Member 'UABP_Player_AimOffset_C::PlayerAnimStatesComponent' has a wrong offset!");
static_assert(offsetof(UABP_Player_AimOffset_C, IsLookAtChangedTimer) == 0x001368, "Member 'UABP_Player_AimOffset_C::IsLookAtChangedTimer' has a wrong offset!");

}


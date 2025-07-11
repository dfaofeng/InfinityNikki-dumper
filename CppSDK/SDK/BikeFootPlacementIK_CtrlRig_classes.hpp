﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BikeFootPlacementIK_CtrlRig

#include "Basic.hpp"

#include "ControlRig_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// RigVMBlueprintGeneratedClass BikeFootPlacementIK_CtrlRig.BikeFootPlacementIK_CtrlRig_C
// 0x0148 (0x0BF0 - 0x0AA8)
class UBikeFootPlacementIK_CtrlRig_C final : public UControlRig
{
public:
	struct FVector                                AnkleLeftOffsetLocation;                           // 0x0AA8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AnkleRightOffsetLocation;                          // 0x0AC0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               AnkleLeftOffsetRotation;                           // 0x0AD8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               AnkleRightOffsetRotation;                          // 0x0AF0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                PelvisOffset;                                      // 0x0B08(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PelvisWeight;                                      // 0x0B20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LeftFootTranslationWeight;                         // 0x0B28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RightFootTranslationWeight;                        // 0x0B30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LeftFootRotationWeight;                            // 0x0B38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RightFootRotationWeight;                           // 0x0B40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InnerRootMOffset;                                  // 0x0B48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SlopeAngle;                                        // 0x0B50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CurrentPelvisOffset;                               // 0x0B58(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentPelvisWeight;                               // 0x0B70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentAnkleLeftOffsetZ;                           // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentAnkleRightOffsetZ;                          // 0x0B80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B88[0x8];                                      // 0x0B88(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  CurrentAnkleLeftRotationOffset;                    // 0x0B90(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                  CurrentAnkleRightRotationOffset;                   // 0x0BB0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentLeftFootTranslationWeight;                  // 0x0BD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentLeftFootRotationWeight;                     // 0x0BD4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentRightFootTranslationWeight;                 // 0x0BD8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentRightFootRotationWeight;                    // 0x0BDC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bForceInitFootPlacementIKParam;                    // 0x0BE0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BE1[0x3];                                      // 0x0BE1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LocationOffsetSpringInterpStrength;                // 0x0BE4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BikeFootPlacementIK_CtrlRig_C">();
	}
	static class UBikeFootPlacementIK_CtrlRig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBikeFootPlacementIK_CtrlRig_C>();
	}
};
static_assert(alignof(UBikeFootPlacementIK_CtrlRig_C) == 0x000010, "Wrong alignment on UBikeFootPlacementIK_CtrlRig_C");
static_assert(sizeof(UBikeFootPlacementIK_CtrlRig_C) == 0x000BF0, "Wrong size on UBikeFootPlacementIK_CtrlRig_C");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, AnkleLeftOffsetLocation) == 0x000AA8, "Member 'UBikeFootPlacementIK_CtrlRig_C::AnkleLeftOffsetLocation' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, AnkleRightOffsetLocation) == 0x000AC0, "Member 'UBikeFootPlacementIK_CtrlRig_C::AnkleRightOffsetLocation' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, AnkleLeftOffsetRotation) == 0x000AD8, "Member 'UBikeFootPlacementIK_CtrlRig_C::AnkleLeftOffsetRotation' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, AnkleRightOffsetRotation) == 0x000AF0, "Member 'UBikeFootPlacementIK_CtrlRig_C::AnkleRightOffsetRotation' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, PelvisOffset) == 0x000B08, "Member 'UBikeFootPlacementIK_CtrlRig_C::PelvisOffset' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, PelvisWeight) == 0x000B20, "Member 'UBikeFootPlacementIK_CtrlRig_C::PelvisWeight' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, LeftFootTranslationWeight) == 0x000B28, "Member 'UBikeFootPlacementIK_CtrlRig_C::LeftFootTranslationWeight' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, RightFootTranslationWeight) == 0x000B30, "Member 'UBikeFootPlacementIK_CtrlRig_C::RightFootTranslationWeight' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, LeftFootRotationWeight) == 0x000B38, "Member 'UBikeFootPlacementIK_CtrlRig_C::LeftFootRotationWeight' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, RightFootRotationWeight) == 0x000B40, "Member 'UBikeFootPlacementIK_CtrlRig_C::RightFootRotationWeight' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, InnerRootMOffset) == 0x000B48, "Member 'UBikeFootPlacementIK_CtrlRig_C::InnerRootMOffset' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, SlopeAngle) == 0x000B50, "Member 'UBikeFootPlacementIK_CtrlRig_C::SlopeAngle' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, CurrentPelvisOffset) == 0x000B58, "Member 'UBikeFootPlacementIK_CtrlRig_C::CurrentPelvisOffset' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, CurrentPelvisWeight) == 0x000B70, "Member 'UBikeFootPlacementIK_CtrlRig_C::CurrentPelvisWeight' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, CurrentAnkleLeftOffsetZ) == 0x000B78, "Member 'UBikeFootPlacementIK_CtrlRig_C::CurrentAnkleLeftOffsetZ' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, CurrentAnkleRightOffsetZ) == 0x000B80, "Member 'UBikeFootPlacementIK_CtrlRig_C::CurrentAnkleRightOffsetZ' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, CurrentAnkleLeftRotationOffset) == 0x000B90, "Member 'UBikeFootPlacementIK_CtrlRig_C::CurrentAnkleLeftRotationOffset' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, CurrentAnkleRightRotationOffset) == 0x000BB0, "Member 'UBikeFootPlacementIK_CtrlRig_C::CurrentAnkleRightRotationOffset' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, CurrentLeftFootTranslationWeight) == 0x000BD0, "Member 'UBikeFootPlacementIK_CtrlRig_C::CurrentLeftFootTranslationWeight' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, CurrentLeftFootRotationWeight) == 0x000BD4, "Member 'UBikeFootPlacementIK_CtrlRig_C::CurrentLeftFootRotationWeight' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, CurrentRightFootTranslationWeight) == 0x000BD8, "Member 'UBikeFootPlacementIK_CtrlRig_C::CurrentRightFootTranslationWeight' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, CurrentRightFootRotationWeight) == 0x000BDC, "Member 'UBikeFootPlacementIK_CtrlRig_C::CurrentRightFootRotationWeight' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, bForceInitFootPlacementIKParam) == 0x000BE0, "Member 'UBikeFootPlacementIK_CtrlRig_C::bForceInitFootPlacementIKParam' has a wrong offset!");
static_assert(offsetof(UBikeFootPlacementIK_CtrlRig_C, LocationOffsetSpringInterpStrength) == 0x000BE4, "Member 'UBikeFootPlacementIK_CtrlRig_C::LocationOffsetSpringInterpStrength' has a wrong offset!");

}


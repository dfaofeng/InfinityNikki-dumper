﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimationLocomotionLibraryRuntime

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementPivotLocation
// 0x0050 (0x0050 - 0x0000)
struct AnimCharacterMovementLibrary_PredictGroundMovementPivotLocation final
{
public:
	struct FVector                                Acceleration;                                      // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Velocity;                                          // 0x0018(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GroundFriction;                                    // 0x0030(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ReturnValue;                                       // 0x0038(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AnimCharacterMovementLibrary_PredictGroundMovementPivotLocation) == 0x000008, "Wrong alignment on AnimCharacterMovementLibrary_PredictGroundMovementPivotLocation");
static_assert(sizeof(AnimCharacterMovementLibrary_PredictGroundMovementPivotLocation) == 0x000050, "Wrong size on AnimCharacterMovementLibrary_PredictGroundMovementPivotLocation");
static_assert(offsetof(AnimCharacterMovementLibrary_PredictGroundMovementPivotLocation, Acceleration) == 0x000000, "Member 'AnimCharacterMovementLibrary_PredictGroundMovementPivotLocation::Acceleration' has a wrong offset!");
static_assert(offsetof(AnimCharacterMovementLibrary_PredictGroundMovementPivotLocation, Velocity) == 0x000018, "Member 'AnimCharacterMovementLibrary_PredictGroundMovementPivotLocation::Velocity' has a wrong offset!");
static_assert(offsetof(AnimCharacterMovementLibrary_PredictGroundMovementPivotLocation, GroundFriction) == 0x000030, "Member 'AnimCharacterMovementLibrary_PredictGroundMovementPivotLocation::GroundFriction' has a wrong offset!");
static_assert(offsetof(AnimCharacterMovementLibrary_PredictGroundMovementPivotLocation, ReturnValue) == 0x000038, "Member 'AnimCharacterMovementLibrary_PredictGroundMovementPivotLocation::ReturnValue' has a wrong offset!");

// Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementStopLocation
// 0x0048 (0x0048 - 0x0000)
struct AnimCharacterMovementLibrary_PredictGroundMovementStopLocation final
{
public:
	struct FVector                                Velocity;                                          // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseSeparateBrakingFriction;                       // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BrakingFriction;                                   // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GroundFriction;                                    // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BrakingFrictionFactor;                             // 0x0024(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BrakingDecelerationWalking;                        // 0x0028(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ReturnValue;                                       // 0x0030(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AnimCharacterMovementLibrary_PredictGroundMovementStopLocation) == 0x000008, "Wrong alignment on AnimCharacterMovementLibrary_PredictGroundMovementStopLocation");
static_assert(sizeof(AnimCharacterMovementLibrary_PredictGroundMovementStopLocation) == 0x000048, "Wrong size on AnimCharacterMovementLibrary_PredictGroundMovementStopLocation");
static_assert(offsetof(AnimCharacterMovementLibrary_PredictGroundMovementStopLocation, Velocity) == 0x000000, "Member 'AnimCharacterMovementLibrary_PredictGroundMovementStopLocation::Velocity' has a wrong offset!");
static_assert(offsetof(AnimCharacterMovementLibrary_PredictGroundMovementStopLocation, bUseSeparateBrakingFriction) == 0x000018, "Member 'AnimCharacterMovementLibrary_PredictGroundMovementStopLocation::bUseSeparateBrakingFriction' has a wrong offset!");
static_assert(offsetof(AnimCharacterMovementLibrary_PredictGroundMovementStopLocation, BrakingFriction) == 0x00001C, "Member 'AnimCharacterMovementLibrary_PredictGroundMovementStopLocation::BrakingFriction' has a wrong offset!");
static_assert(offsetof(AnimCharacterMovementLibrary_PredictGroundMovementStopLocation, GroundFriction) == 0x000020, "Member 'AnimCharacterMovementLibrary_PredictGroundMovementStopLocation::GroundFriction' has a wrong offset!");
static_assert(offsetof(AnimCharacterMovementLibrary_PredictGroundMovementStopLocation, BrakingFrictionFactor) == 0x000024, "Member 'AnimCharacterMovementLibrary_PredictGroundMovementStopLocation::BrakingFrictionFactor' has a wrong offset!");
static_assert(offsetof(AnimCharacterMovementLibrary_PredictGroundMovementStopLocation, BrakingDecelerationWalking) == 0x000028, "Member 'AnimCharacterMovementLibrary_PredictGroundMovementStopLocation::BrakingDecelerationWalking' has a wrong offset!");
static_assert(offsetof(AnimCharacterMovementLibrary_PredictGroundMovementStopLocation, ReturnValue) == 0x000030, "Member 'AnimCharacterMovementLibrary_PredictGroundMovementStopLocation::ReturnValue' has a wrong offset!");

// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.AdvanceTimeByDistanceMatching
// 0x0050 (0x0050 - 0x0000)
struct AnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching final
{
public:
	struct FAnimUpdateContext                     UpdateContext;                                     // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSequenceEvaluatorReference            SequenceEvaluator;                                 // 0x0010(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                         DistanceTraveled;                                  // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   DistanceCurveName;                                 // 0x0024(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              PlayRateClamp;                                     // 0x0030(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSequenceEvaluatorReference            ReturnValue;                                       // 0x0040(0x0010)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(AnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching) == 0x000008, "Wrong alignment on AnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching");
static_assert(sizeof(AnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching) == 0x000050, "Wrong size on AnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching");
static_assert(offsetof(AnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching, UpdateContext) == 0x000000, "Member 'AnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching::UpdateContext' has a wrong offset!");
static_assert(offsetof(AnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching, SequenceEvaluator) == 0x000010, "Member 'AnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching::SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(AnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching, DistanceTraveled) == 0x000020, "Member 'AnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching::DistanceTraveled' has a wrong offset!");
static_assert(offsetof(AnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching, DistanceCurveName) == 0x000024, "Member 'AnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching::DistanceCurveName' has a wrong offset!");
static_assert(offsetof(AnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching, PlayRateClamp) == 0x000030, "Member 'AnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching::PlayRateClamp' has a wrong offset!");
static_assert(offsetof(AnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching, ReturnValue) == 0x000040, "Member 'AnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching::ReturnValue' has a wrong offset!");

// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.DistanceMatchToTarget
// 0x0030 (0x0030 - 0x0000)
struct AnimDistanceMatchingLibrary_DistanceMatchToTarget final
{
public:
	struct FSequenceEvaluatorReference            SequenceEvaluator;                                 // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                         DistanceToTarget;                                  // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   DistanceCurveName;                                 // 0x0014(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSequenceEvaluatorReference            ReturnValue;                                       // 0x0020(0x0010)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(AnimDistanceMatchingLibrary_DistanceMatchToTarget) == 0x000008, "Wrong alignment on AnimDistanceMatchingLibrary_DistanceMatchToTarget");
static_assert(sizeof(AnimDistanceMatchingLibrary_DistanceMatchToTarget) == 0x000030, "Wrong size on AnimDistanceMatchingLibrary_DistanceMatchToTarget");
static_assert(offsetof(AnimDistanceMatchingLibrary_DistanceMatchToTarget, SequenceEvaluator) == 0x000000, "Member 'AnimDistanceMatchingLibrary_DistanceMatchToTarget::SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(AnimDistanceMatchingLibrary_DistanceMatchToTarget, DistanceToTarget) == 0x000010, "Member 'AnimDistanceMatchingLibrary_DistanceMatchToTarget::DistanceToTarget' has a wrong offset!");
static_assert(offsetof(AnimDistanceMatchingLibrary_DistanceMatchToTarget, DistanceCurveName) == 0x000014, "Member 'AnimDistanceMatchingLibrary_DistanceMatchToTarget::DistanceCurveName' has a wrong offset!");
static_assert(offsetof(AnimDistanceMatchingLibrary_DistanceMatchToTarget, ReturnValue) == 0x000020, "Member 'AnimDistanceMatchingLibrary_DistanceMatchToTarget::ReturnValue' has a wrong offset!");

// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.SetPlayrateToMatchSpeed
// 0x0038 (0x0038 - 0x0000)
struct AnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed final
{
public:
	struct FSequencePlayerReference               SequencePlayer;                                    // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                         SpeedToMatch;                                      // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              PlayRateClamp;                                     // 0x0018(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSequencePlayerReference               ReturnValue;                                       // 0x0028(0x0010)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(AnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed) == 0x000008, "Wrong alignment on AnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed");
static_assert(sizeof(AnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed) == 0x000038, "Wrong size on AnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed");
static_assert(offsetof(AnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed, SequencePlayer) == 0x000000, "Member 'AnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed::SequencePlayer' has a wrong offset!");
static_assert(offsetof(AnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed, SpeedToMatch) == 0x000010, "Member 'AnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed::SpeedToMatch' has a wrong offset!");
static_assert(offsetof(AnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed, PlayRateClamp) == 0x000018, "Member 'AnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed::PlayRateClamp' has a wrong offset!");
static_assert(offsetof(AnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed, ReturnValue) == 0x000028, "Member 'AnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed::ReturnValue' has a wrong offset!");

}


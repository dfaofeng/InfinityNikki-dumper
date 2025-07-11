﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABPI_CustomBehavior

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABPI_CustomBehavior.ABPI_CustomBehavior_C
// 0x0000 (0x0000 - 0x0000)
class IABPI_CustomBehavior_C final : public IAnimLayerInterface
{
public:
	void AnimLayer_AttractorBehavior(const struct FPoseLink& InPose_AttractorBehavior, struct FPoseLink* AnimLayer_AttractorBehavior_0);
	void AnimLayer_CustomBehavior(const struct FPoseLink& InPose, struct FPoseLink* AnimLayer_CustomBehavior_0);
	void AnimLayer_DialogueBehavior(const struct FPoseLink& InPose_DIalogueBehavior, struct FPoseLink* AnimLayer_DialogueBehavior_0);
	void AnimLayer_InteractionPerformanceBehavior(const struct FPoseLink& InPose_InterationPerformance, struct FPoseLink* AnimLayer_InteractionPerformanceBehavior_0);
	void AnimLayer_SituationFeedbackBehavior(const struct FPoseLink& InPose_SituationFeedback, struct FPoseLink* AnimLayer_SituationFeedbackBehavior_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABPI_CustomBehavior_C">();
	}
	static class IABPI_CustomBehavior_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IABPI_CustomBehavior_C>();
	}
};
static_assert(alignof(IABPI_CustomBehavior_C) == 0x000001, "Wrong alignment on IABPI_CustomBehavior_C");
static_assert(sizeof(IABPI_CustomBehavior_C) == 0x000001, "Wrong size on IABPI_CustomBehavior_C");

}


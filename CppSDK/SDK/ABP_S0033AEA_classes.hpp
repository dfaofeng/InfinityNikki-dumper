﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_S0033AEA

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "NikkiPhysics_structs.hpp"
#include "X6Game_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_S0033AEA.ABP_S0033AEA_C
// 0x13C0 (0x1810 - 0x0450)
class UABP_S0033AEA_C final : public UNikkiClothAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0458(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0460(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0468(0x0020)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x0488(0x0158)(ContainsInstancedReference)
	struct FAnimNode_NikkiPhysics                 AnimGraphNode_NikkiPhysics;                        // 0x05E0(0x11F0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x17D0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x17F0(0x0020)()

public:
	void ExecuteUbergraph_ABP_S0033AEA(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_S0033AEA_C">();
	}
	static class UABP_S0033AEA_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_S0033AEA_C>();
	}
};
static_assert(alignof(UABP_S0033AEA_C) == 0x000010, "Wrong alignment on UABP_S0033AEA_C");
static_assert(sizeof(UABP_S0033AEA_C) == 0x001810, "Wrong size on UABP_S0033AEA_C");
static_assert(offsetof(UABP_S0033AEA_C, UberGraphFrame) == 0x000450, "Member 'UABP_S0033AEA_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_S0033AEA_C, AnimBlueprintExtension_PropertyAccess) == 0x000458, "Member 'UABP_S0033AEA_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_S0033AEA_C, AnimBlueprintExtension_Base) == 0x000460, "Member 'UABP_S0033AEA_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_S0033AEA_C, AnimGraphNode_Root) == 0x000468, "Member 'UABP_S0033AEA_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_S0033AEA_C, AnimGraphNode_CopyPoseFromMesh) == 0x000488, "Member 'UABP_S0033AEA_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UABP_S0033AEA_C, AnimGraphNode_NikkiPhysics) == 0x0005E0, "Member 'UABP_S0033AEA_C::AnimGraphNode_NikkiPhysics' has a wrong offset!");
static_assert(offsetof(UABP_S0033AEA_C, AnimGraphNode_LocalToComponentSpace) == 0x0017D0, "Member 'UABP_S0033AEA_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_S0033AEA_C, AnimGraphNode_ComponentToLocalSpace) == 0x0017F0, "Member 'UABP_S0033AEA_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");

}


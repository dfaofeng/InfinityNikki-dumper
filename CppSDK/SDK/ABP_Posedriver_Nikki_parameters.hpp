﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Posedriver_Nikki

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_Posedriver_Nikki.ABP_Posedriver_Nikki_C.AnimGraph
// 0x0020 (0x0020 - 0x0000)
struct ABP_Posedriver_Nikki_C_AnimGraph final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              AnimGraph_0;                                       // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Posedriver_Nikki_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_Posedriver_Nikki_C_AnimGraph");
static_assert(sizeof(ABP_Posedriver_Nikki_C_AnimGraph) == 0x000020, "Wrong size on ABP_Posedriver_Nikki_C_AnimGraph");
static_assert(offsetof(ABP_Posedriver_Nikki_C_AnimGraph, InPose) == 0x000000, "Member 'ABP_Posedriver_Nikki_C_AnimGraph::InPose' has a wrong offset!");
static_assert(offsetof(ABP_Posedriver_Nikki_C_AnimGraph, AnimGraph_0) == 0x000010, "Member 'ABP_Posedriver_Nikki_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function ABP_Posedriver_Nikki.ABP_Posedriver_Nikki_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_Posedriver_Nikki_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Posedriver_Nikki_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_Posedriver_Nikki_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_Posedriver_Nikki_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_Posedriver_Nikki_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_Posedriver_Nikki_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_Posedriver_Nikki_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_Posedriver_Nikki.ABP_Posedriver_Nikki_C.ExecuteUbergraph_ABP_Posedriver_Nikki
// 0x0038 (0x0038 - 0x0000)
struct ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckActorHasBegunPlay_ReturnValue;       // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PlayerAnimStatesComponent_C*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_StructMemberSet_Alpha_ImplicitCast;         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki) == 0x000008, "Wrong alignment on ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki");
static_assert(sizeof(ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki) == 0x000038, "Wrong size on ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki");
static_assert(offsetof(ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki, EntryPoint) == 0x000000, "Member 'ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki, K2Node_Event_DeltaTimeX) == 0x000010, "Member 'ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki, CallFunc_IsValid_ReturnValue_1) == 0x000014, "Member 'ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki, CallFunc_GetOwningActor_ReturnValue) == 0x000018, "Member 'ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki, CallFunc_IsValid_ReturnValue_2) == 0x000020, "Member 'ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki, CallFunc_CheckActorHasBegunPlay_ReturnValue) == 0x000021, "Member 'ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki::CallFunc_CheckActorHasBegunPlay_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki, K2Node_StructMemberSet_Alpha_ImplicitCast) == 0x000030, "Member 'ABP_Posedriver_Nikki_C_ExecuteUbergraph_ABP_Posedriver_Nikki::K2Node_StructMemberSet_Alpha_ImplicitCast' has a wrong offset!");

// Function ABP_Posedriver_Nikki.ABP_Posedriver_Nikki_C.UpdateAntiClippingAlpha
// 0x0018 (0x0018 - 0x0000)
struct ABP_Posedriver_Nikki_C_UpdateAntiClippingAlpha final
{
public:
	float                                         CallFunc_GetCurveValue_ReturnValue;                // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_A_ImplicitCast;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Posedriver_Nikki_C_UpdateAntiClippingAlpha) == 0x000008, "Wrong alignment on ABP_Posedriver_Nikki_C_UpdateAntiClippingAlpha");
static_assert(sizeof(ABP_Posedriver_Nikki_C_UpdateAntiClippingAlpha) == 0x000018, "Wrong size on ABP_Posedriver_Nikki_C_UpdateAntiClippingAlpha");
static_assert(offsetof(ABP_Posedriver_Nikki_C_UpdateAntiClippingAlpha, CallFunc_GetCurveValue_ReturnValue) == 0x000000, "Member 'ABP_Posedriver_Nikki_C_UpdateAntiClippingAlpha::CallFunc_GetCurveValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Posedriver_Nikki_C_UpdateAntiClippingAlpha, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'ABP_Posedriver_Nikki_C_UpdateAntiClippingAlpha::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Posedriver_Nikki_C_UpdateAntiClippingAlpha, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'ABP_Posedriver_Nikki_C_UpdateAntiClippingAlpha::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Posedriver_Nikki_C_UpdateAntiClippingAlpha, CallFunc_SelectFloat_A_ImplicitCast) == 0x000010, "Member 'ABP_Posedriver_Nikki_C_UpdateAntiClippingAlpha::CallFunc_SelectFloat_A_ImplicitCast' has a wrong offset!");

// Function ABP_Posedriver_Nikki.ABP_Posedriver_Nikki_C.UpdateEnableMaxAnkleAngleLimit
// 0x0008 (0x0008 - 0x0000)
struct ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit) == 0x000001, "Wrong alignment on ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit");
static_assert(sizeof(ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit) == 0x000008, "Wrong size on ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit");
static_assert(offsetof(ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit, CallFunc_BooleanOR_ReturnValue) == 0x000001, "Member 'ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000003, "Member 'ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit, CallFunc_BooleanOR_ReturnValue_1) == 0x000004, "Member 'ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit, CallFunc_BooleanOR_ReturnValue_2) == 0x000005, "Member 'ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit, CallFunc_BooleanAND_ReturnValue) == 0x000006, "Member 'ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit, CallFunc_BooleanAND_ReturnValue_1) == 0x000007, "Member 'ABP_Posedriver_Nikki_C_UpdateEnableMaxAnkleAngleLimit::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

}


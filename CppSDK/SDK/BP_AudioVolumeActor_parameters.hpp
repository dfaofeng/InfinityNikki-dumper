﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AudioVolumeActor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_AudioVolumeActor.BP_AudioVolumeActor_C.ExecuteUbergraph_BP_AudioVolumeActor
// 0x0008 (0x0008 - 0x0000)
struct BP_AudioVolumeActor_C_ExecuteUbergraph_BP_AudioVolumeActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bServer;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bServer_1;                            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudioVolumeActor_C_ExecuteUbergraph_BP_AudioVolumeActor) == 0x000004, "Wrong alignment on BP_AudioVolumeActor_C_ExecuteUbergraph_BP_AudioVolumeActor");
static_assert(sizeof(BP_AudioVolumeActor_C_ExecuteUbergraph_BP_AudioVolumeActor) == 0x000008, "Wrong size on BP_AudioVolumeActor_C_ExecuteUbergraph_BP_AudioVolumeActor");
static_assert(offsetof(BP_AudioVolumeActor_C_ExecuteUbergraph_BP_AudioVolumeActor, EntryPoint) == 0x000000, "Member 'BP_AudioVolumeActor_C_ExecuteUbergraph_BP_AudioVolumeActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AudioVolumeActor_C_ExecuteUbergraph_BP_AudioVolumeActor, K2Node_Event_bServer) == 0x000004, "Member 'BP_AudioVolumeActor_C_ExecuteUbergraph_BP_AudioVolumeActor::K2Node_Event_bServer' has a wrong offset!");
static_assert(offsetof(BP_AudioVolumeActor_C_ExecuteUbergraph_BP_AudioVolumeActor, K2Node_Event_bServer_1) == 0x000005, "Member 'BP_AudioVolumeActor_C_ExecuteUbergraph_BP_AudioVolumeActor::K2Node_Event_bServer_1' has a wrong offset!");

// Function BP_AudioVolumeActor.BP_AudioVolumeActor_C.PostServerInit
// 0x0001 (0x0001 - 0x0000)
struct BP_AudioVolumeActor_C_PostServerInit final
{
public:
	bool                                          bServer;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudioVolumeActor_C_PostServerInit) == 0x000001, "Wrong alignment on BP_AudioVolumeActor_C_PostServerInit");
static_assert(sizeof(BP_AudioVolumeActor_C_PostServerInit) == 0x000001, "Wrong size on BP_AudioVolumeActor_C_PostServerInit");
static_assert(offsetof(BP_AudioVolumeActor_C_PostServerInit, bServer) == 0x000000, "Member 'BP_AudioVolumeActor_C_PostServerInit::bServer' has a wrong offset!");

// Function BP_AudioVolumeActor.BP_AudioVolumeActor_C.ServerInit
// 0x0001 (0x0001 - 0x0000)
struct BP_AudioVolumeActor_C_ServerInit final
{
public:
	bool                                          bServer;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudioVolumeActor_C_ServerInit) == 0x000001, "Wrong alignment on BP_AudioVolumeActor_C_ServerInit");
static_assert(sizeof(BP_AudioVolumeActor_C_ServerInit) == 0x000001, "Wrong size on BP_AudioVolumeActor_C_ServerInit");
static_assert(offsetof(BP_AudioVolumeActor_C_ServerInit, bServer) == 0x000000, "Member 'BP_AudioVolumeActor_C_ServerInit::bServer' has a wrong offset!");

// Function BP_AudioVolumeActor.BP_AudioVolumeActor_C.SetEnable
// 0x0001 (0x0001 - 0x0000)
struct BP_AudioVolumeActor_C_SetEnable final
{
public:
	bool                                          bNewEnable;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudioVolumeActor_C_SetEnable) == 0x000001, "Wrong alignment on BP_AudioVolumeActor_C_SetEnable");
static_assert(sizeof(BP_AudioVolumeActor_C_SetEnable) == 0x000001, "Wrong size on BP_AudioVolumeActor_C_SetEnable");
static_assert(offsetof(BP_AudioVolumeActor_C_SetEnable, bNewEnable) == 0x000000, "Member 'BP_AudioVolumeActor_C_SetEnable::bNewEnable' has a wrong offset!");

// Function BP_AudioVolumeActor.BP_AudioVolumeActor_C.UserConstructionScript
// 0x0160 (0x0160 - 0x0000)
struct BP_AudioVolumeActor_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_Conv_IntToVector_ReturnValue;             // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetScaledBoxExtent_ReturnValue;           // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorVector_ReturnValue;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0068(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_AudioVolumeActor_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_AudioVolumeActor_C_UserConstructionScript");
static_assert(sizeof(BP_AudioVolumeActor_C_UserConstructionScript) == 0x000160, "Wrong size on BP_AudioVolumeActor_C_UserConstructionScript");
static_assert(offsetof(BP_AudioVolumeActor_C_UserConstructionScript, CallFunc_Conv_IntToVector_ReturnValue) == 0x000000, "Member 'BP_AudioVolumeActor_C_UserConstructionScript::CallFunc_Conv_IntToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioVolumeActor_C_UserConstructionScript, CallFunc_GetScaledBoxExtent_ReturnValue) == 0x000018, "Member 'BP_AudioVolumeActor_C_UserConstructionScript::CallFunc_GetScaledBoxExtent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioVolumeActor_C_UserConstructionScript, CallFunc_Divide_VectorVector_ReturnValue) == 0x000030, "Member 'BP_AudioVolumeActor_C_UserConstructionScript::CallFunc_Divide_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioVolumeActor_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'BP_AudioVolumeActor_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioVolumeActor_C_UserConstructionScript, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000050, "Member 'BP_AudioVolumeActor_C_UserConstructionScript::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioVolumeActor_C_UserConstructionScript, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000068, "Member 'BP_AudioVolumeActor_C_UserConstructionScript::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");

// Function BP_AudioVolumeActor.BP_AudioVolumeActor_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct BP_AudioVolumeActor_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudioVolumeActor_C_GetModuleName) == 0x000008, "Wrong alignment on BP_AudioVolumeActor_C_GetModuleName");
static_assert(sizeof(BP_AudioVolumeActor_C_GetModuleName) == 0x000010, "Wrong size on BP_AudioVolumeActor_C_GetModuleName");
static_assert(offsetof(BP_AudioVolumeActor_C_GetModuleName, ReturnValue) == 0x000000, "Member 'BP_AudioVolumeActor_C_GetModuleName::ReturnValue' has a wrong offset!");

}


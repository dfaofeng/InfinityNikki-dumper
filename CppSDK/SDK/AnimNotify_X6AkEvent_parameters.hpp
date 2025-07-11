﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_X6AkEvent

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AnimNotify_X6AkEvent.AnimNotify_X6AkEvent_C.Received_Notify
// 0x0078 (0x0078 - 0x0000)
struct AnimNotify_X6AkEvent_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        K2Node_Select_Default;                             // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_X6GetAkComponent_ComponentCreated;        // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_X6GetAkComponent_ReturnValue;             // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimNotify_X6AkEvent_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_X6AkEvent_C_Received_Notify");
static_assert(sizeof(AnimNotify_X6AkEvent_C_Received_Notify) == 0x000078, "Wrong size on AnimNotify_X6AkEvent_C_Received_Notify");
static_assert(offsetof(AnimNotify_X6AkEvent_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_X6AkEvent_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_X6AkEvent_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_X6AkEvent_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_X6AkEvent_C_Received_Notify, EventReference) == 0x000010, "Member 'AnimNotify_X6AkEvent_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(AnimNotify_X6AkEvent_C_Received_Notify, ReturnValue) == 0x000040, "Member 'AnimNotify_X6AkEvent_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_X6AkEvent_C_Received_Notify, Temp_bool_Variable) == 0x000041, "Member 'AnimNotify_X6AkEvent_C_Received_Notify::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AnimNotify_X6AkEvent_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000048, "Member 'AnimNotify_X6AkEvent_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_X6AkEvent_C_Received_Notify, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000050, "Member 'AnimNotify_X6AkEvent_C_Received_Notify::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_X6AkEvent_C_Received_Notify, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'AnimNotify_X6AkEvent_C_Received_Notify::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_X6AkEvent_C_Received_Notify, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000059, "Member 'AnimNotify_X6AkEvent_C_Received_Notify::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_X6AkEvent_C_Received_Notify, K2Node_Select_Default) == 0x000060, "Member 'AnimNotify_X6AkEvent_C_Received_Notify::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AnimNotify_X6AkEvent_C_Received_Notify, CallFunc_X6GetAkComponent_ComponentCreated) == 0x000068, "Member 'AnimNotify_X6AkEvent_C_Received_Notify::CallFunc_X6GetAkComponent_ComponentCreated' has a wrong offset!");
static_assert(offsetof(AnimNotify_X6AkEvent_C_Received_Notify, CallFunc_X6GetAkComponent_ReturnValue) == 0x000070, "Member 'AnimNotify_X6AkEvent_C_Received_Notify::CallFunc_X6GetAkComponent_ReturnValue' has a wrong offset!");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_X6AkAmbientSound_V2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_X6AkAmbientSound_V2.BP_X6AkAmbientSound_V2_C.ExecuteUbergraph_BP_X6AkAmbientSound_V2
// 0x0098 (0x0098 - 0x0000)
struct BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable; // 0x0038(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue_1;        // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_X6PostEventAtLocation_PlayingID;          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E[0x2];                                       // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0080(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_X6PostEvent_PlayingID;                    // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2) == 0x000008, "Wrong alignment on BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2");
static_assert(sizeof(BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2) == 0x000098, "Wrong size on BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2");
static_assert(offsetof(BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2, EntryPoint) == 0x000000, "Member 'BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2, K2Node_Event_EndPlayReason) == 0x000004, "Member 'BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000008, "Member 'BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2, Temp_delegate_Variable) == 0x000038, "Member 'BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2, CallFunc_K2_GetActorRotation_ReturnValue_1) == 0x000048, "Member 'BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2::CallFunc_K2_GetActorRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000060, "Member 'BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2, CallFunc_X6PostEventAtLocation_PlayingID) == 0x000078, "Member 'BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2::CallFunc_X6PostEventAtLocation_PlayingID' has a wrong offset!");
static_assert(offsetof(BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x00007C, "Member 'BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2, CallFunc_IsValid_ReturnValue) == 0x00007D, "Member 'BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2, Temp_struct_Variable) == 0x000080, "Member 'BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2, CallFunc_X6PostEvent_PlayingID) == 0x000090, "Member 'BP_X6AkAmbientSound_V2_C_ExecuteUbergraph_BP_X6AkAmbientSound_V2::CallFunc_X6PostEvent_PlayingID' has a wrong offset!");

// Function BP_X6AkAmbientSound_V2.BP_X6AkAmbientSound_V2_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_X6AkAmbientSound_V2_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_X6AkAmbientSound_V2_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_X6AkAmbientSound_V2_C_ReceiveEndPlay");
static_assert(sizeof(BP_X6AkAmbientSound_V2_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_X6AkAmbientSound_V2_C_ReceiveEndPlay");
static_assert(offsetof(BP_X6AkAmbientSound_V2_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_X6AkAmbientSound_V2_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_QuadrupedAnimalReaction_UpdateFleeParams

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTS_QuadrupedAnimalReaction_UpdateFleeParams.BTS_QuadrupedAnimalReaction_UpdateFleeParams_C.TaskBegin_3733FB3D497423EB48C054A1059843F8
// 0x0008 (0x0008 - 0x0000)
struct BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_TaskBegin_3733FB3D497423EB48C054A1059843F8 final
{
public:
	class UX6TaskAsyncBase*                       Task;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_TaskBegin_3733FB3D497423EB48C054A1059843F8) == 0x000008, "Wrong alignment on BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_TaskBegin_3733FB3D497423EB48C054A1059843F8");
static_assert(sizeof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_TaskBegin_3733FB3D497423EB48C054A1059843F8) == 0x000008, "Wrong size on BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_TaskBegin_3733FB3D497423EB48C054A1059843F8");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_TaskBegin_3733FB3D497423EB48C054A1059843F8, Task) == 0x000000, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_TaskBegin_3733FB3D497423EB48C054A1059843F8::Task' has a wrong offset!");

// Function BTS_QuadrupedAnimalReaction_UpdateFleeParams.BTS_QuadrupedAnimalReaction_UpdateFleeParams_C.Success_3733FB3D497423EB48C054A1059843F8
// 0x0018 (0x0018 - 0x0000)
struct BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_Success_3733FB3D497423EB48C054A1059843F8 final
{
public:
	struct FVector                                Loc;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_Success_3733FB3D497423EB48C054A1059843F8) == 0x000008, "Wrong alignment on BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_Success_3733FB3D497423EB48C054A1059843F8");
static_assert(sizeof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_Success_3733FB3D497423EB48C054A1059843F8) == 0x000018, "Wrong size on BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_Success_3733FB3D497423EB48C054A1059843F8");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_Success_3733FB3D497423EB48C054A1059843F8, Loc) == 0x000000, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_Success_3733FB3D497423EB48C054A1059843F8::Loc' has a wrong offset!");

// Function BTS_QuadrupedAnimalReaction_UpdateFleeParams.BTS_QuadrupedAnimalReaction_UpdateFleeParams_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn_0;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ReceiveTickAI) == 0x000008, "Wrong alignment on BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ReceiveTickAI");
static_assert(sizeof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ReceiveTickAI) == 0x000018, "Wrong size on BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ReceiveTickAI");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ReceiveTickAI, ControlledPawn_0) == 0x000008, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ReceiveTickAI::ControlledPawn_0' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

// Function BTS_QuadrupedAnimalReaction_UpdateFleeParams.BTS_QuadrupedAnimalReaction_UpdateFleeParams_C.ReceiveActivationAI
// 0x0010 (0x0010 - 0x0000)
struct BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ReceiveActivationAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn_0;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ReceiveActivationAI) == 0x000008, "Wrong alignment on BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ReceiveActivationAI");
static_assert(sizeof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ReceiveActivationAI) == 0x000010, "Wrong size on BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ReceiveActivationAI");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ReceiveActivationAI, OwnerController) == 0x000000, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ReceiveActivationAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ReceiveActivationAI, ControlledPawn_0) == 0x000008, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ReceiveActivationAI::ControlledPawn_0' has a wrong offset!");

// Function BTS_QuadrupedAnimalReaction_UpdateFleeParams.BTS_QuadrupedAnimalReaction_UpdateFleeParams_C.ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams
// 0x0160 (0x0160 - 0x0000)
struct BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UX6TaskAsyncBase*                       K2Node_CustomEvent_Task;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBlackboardValueAsInt_ReturnValue;      // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UX6AsyncTask_QueryAreaEscapeLoc_C*      CallFunc_SpawnObject_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_InovkeAsyncTaskStart_EventName;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FVector& Loc)>    K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController_1;                    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetStimuliSourceActor_StimuliSourceActor; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0074(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetFleeQueryParams_Center;                // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetFleeQueryParams_FleeRadius;            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetFleeQueryParams_FleeStepDistMin;       // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetFleeQueryParams_FleeStepDistMax;       // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Loc;                            // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSM_QuadrupedAnimalReaction_C*         CallFunc_GetAnimalReactionFSM_FSM;                 // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetBlackboardValueAsVector_ReturnValue;   // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0100(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_122[0x6];                                      // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UX6TaskAsyncBase* Task)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0148(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams) == 0x000008, "Wrong alignment on BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams");
static_assert(sizeof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams) == 0x000160, "Wrong size on BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, EntryPoint) == 0x000000, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, K2Node_CustomEvent_Task) == 0x000008, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::K2Node_CustomEvent_Task' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_GetBlackboardValueAsInt_ReturnValue) == 0x000010, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_GetBlackboardValueAsInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_SpawnObject_ReturnValue) == 0x000018, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_InovkeAsyncTaskStart_EventName) == 0x000020, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_InovkeAsyncTaskStart_EventName' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, K2Node_Event_OwnerController_1) == 0x000038, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::K2Node_Event_OwnerController_1' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, K2Node_Event_ControlledPawn_1) == 0x000040, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, K2Node_Event_DeltaSeconds) == 0x000048, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000050, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_GetStimuliSourceActor_StimuliSourceActor) == 0x000068, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_GetStimuliSourceActor_StimuliSourceActor' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, K2Node_CreateDelegate_OutputDelegate_1) == 0x000074, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_IsValid_ReturnValue_1) == 0x000084, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_GetFleeQueryParams_Center) == 0x000088, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_GetFleeQueryParams_Center' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_GetFleeQueryParams_FleeRadius) == 0x0000A0, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_GetFleeQueryParams_FleeRadius' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_GetFleeQueryParams_FleeStepDistMin) == 0x0000A8, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_GetFleeQueryParams_FleeStepDistMin' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_GetFleeQueryParams_FleeStepDistMax) == 0x0000B0, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_GetFleeQueryParams_FleeStepDistMax' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, K2Node_Event_OwnerController) == 0x0000B8, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, K2Node_Event_ControlledPawn) == 0x0000C0, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, K2Node_CustomEvent_Loc) == 0x0000C8, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::K2Node_CustomEvent_Loc' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_GetAnimalReactionFSM_FSM) == 0x0000E0, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_GetAnimalReactionFSM_FSM' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_GetBlackboardValueAsVector_ReturnValue) == 0x0000E8, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_GetBlackboardValueAsVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000100, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_VSize_ReturnValue) == 0x000118, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_IsValid_ReturnValue_2) == 0x000120, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000121, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000128, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_Vector_Distance_ReturnValue) == 0x000140, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, K2Node_CreateDelegate_OutputDelegate_2) == 0x000148, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x000158, "Member 'BTS_QuadrupedAnimalReaction_UpdateFleeParams_C_ExecuteUbergraph_BTS_QuadrupedAnimalReaction_UpdateFleeParams::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");

}


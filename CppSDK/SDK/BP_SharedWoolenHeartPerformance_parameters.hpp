﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SharedWoolenHeartPerformance

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "EWoolenHeartEMVersion_structs.hpp"
#include "F_SharedWoolenHeartConfig_structs.hpp"


namespace SDK::Params
{

// Function BP_SharedWoolenHeartPerformance.BP_SharedWoolenHeartPerformance_C.BP_Deinit
// 0x0010 (0x0010 - 0x0000)
struct BP_SharedWoolenHeartPerformance_C_BP_Deinit final
{
public:
	class UBP_MultiPlayerGroupMovementComponent_C* CallFunc_GetComponentByClass_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SharedWoolenHeartPerformance_C_BP_Deinit) == 0x000008, "Wrong alignment on BP_SharedWoolenHeartPerformance_C_BP_Deinit");
static_assert(sizeof(BP_SharedWoolenHeartPerformance_C_BP_Deinit) == 0x000010, "Wrong size on BP_SharedWoolenHeartPerformance_C_BP_Deinit");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_Deinit, CallFunc_GetComponentByClass_ReturnValue) == 0x000000, "Member 'BP_SharedWoolenHeartPerformance_C_BP_Deinit::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_Deinit, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_SharedWoolenHeartPerformance_C_BP_Deinit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_Deinit, CallFunc_IsValid_ReturnValue_1) == 0x000009, "Member 'BP_SharedWoolenHeartPerformance_C_BP_Deinit::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_SharedWoolenHeartPerformance.BP_SharedWoolenHeartPerformance_C.BP_FinishFlyToPlayerPerformance
// 0x0028 (0x0028 - 0x0000)
struct BP_SharedWoolenHeartPerformance_C_BP_FinishFlyToPlayerPerformance final
{
public:
	class ACharacter*                             CallFunc_GetLocalPlayerPawn_LocalPlayerPawn;       // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SharedWoolenHeartPerformance_C_BP_FinishFlyToPlayerPerformance) == 0x000008, "Wrong alignment on BP_SharedWoolenHeartPerformance_C_BP_FinishFlyToPlayerPerformance");
static_assert(sizeof(BP_SharedWoolenHeartPerformance_C_BP_FinishFlyToPlayerPerformance) == 0x000028, "Wrong size on BP_SharedWoolenHeartPerformance_C_BP_FinishFlyToPlayerPerformance");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_FinishFlyToPlayerPerformance, CallFunc_GetLocalPlayerPawn_LocalPlayerPawn) == 0x000000, "Member 'BP_SharedWoolenHeartPerformance_C_BP_FinishFlyToPlayerPerformance::CallFunc_GetLocalPlayerPawn_LocalPlayerPawn' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_FinishFlyToPlayerPerformance, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000008, "Member 'BP_SharedWoolenHeartPerformance_C_BP_FinishFlyToPlayerPerformance::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_FinishFlyToPlayerPerformance, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000010, "Member 'BP_SharedWoolenHeartPerformance_C_BP_FinishFlyToPlayerPerformance::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_FinishFlyToPlayerPerformance, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_SharedWoolenHeartPerformance_C_BP_FinishFlyToPlayerPerformance::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_FinishFlyToPlayerPerformance, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000020, "Member 'BP_SharedWoolenHeartPerformance_C_BP_FinishFlyToPlayerPerformance::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");

// Function BP_SharedWoolenHeartPerformance.BP_SharedWoolenHeartPerformance_C.BP_Init
// 0x0098 (0x0098 - 0x0000)
struct BP_SharedWoolenHeartPerformance_C_BP_Init final
{
public:
	class AActor*                                 InTargetPlayer;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EWoolenHeartEMVersion                         EMVersion_0;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            mesh;                                              // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FF_SharedWoolenHeartConfig             SharedWoolenHeartConfig_0;                         // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DeltaDistance1;                                    // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PlayerDistanceVec1;                                // 0x0038(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimelineLength_ReturnValue;            // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPlayRate_NewRate_ImplicitCast;         // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SharedWoolenHeartPerformance_C_BP_Init) == 0x000008, "Wrong alignment on BP_SharedWoolenHeartPerformance_C_BP_Init");
static_assert(sizeof(BP_SharedWoolenHeartPerformance_C_BP_Init) == 0x000098, "Wrong size on BP_SharedWoolenHeartPerformance_C_BP_Init");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_Init, InTargetPlayer) == 0x000000, "Member 'BP_SharedWoolenHeartPerformance_C_BP_Init::InTargetPlayer' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_Init, EMVersion_0) == 0x000008, "Member 'BP_SharedWoolenHeartPerformance_C_BP_Init::EMVersion_0' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_Init, mesh) == 0x000010, "Member 'BP_SharedWoolenHeartPerformance_C_BP_Init::mesh' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_Init, SharedWoolenHeartConfig_0) == 0x000018, "Member 'BP_SharedWoolenHeartPerformance_C_BP_Init::SharedWoolenHeartConfig_0' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_Init, DeltaDistance1) == 0x000030, "Member 'BP_SharedWoolenHeartPerformance_C_BP_Init::DeltaDistance1' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_Init, PlayerDistanceVec1) == 0x000038, "Member 'BP_SharedWoolenHeartPerformance_C_BP_Init::PlayerDistanceVec1' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_Init, CallFunc_SetStaticMesh_ReturnValue) == 0x000050, "Member 'BP_SharedWoolenHeartPerformance_C_BP_Init::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_Init, CallFunc_IsValid_ReturnValue) == 0x000051, "Member 'BP_SharedWoolenHeartPerformance_C_BP_Init::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_Init, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000058, "Member 'BP_SharedWoolenHeartPerformance_C_BP_Init::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_Init, CallFunc_GetTimelineLength_ReturnValue) == 0x000070, "Member 'BP_SharedWoolenHeartPerformance_C_BP_Init::CallFunc_GetTimelineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_Init, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000078, "Member 'BP_SharedWoolenHeartPerformance_C_BP_Init::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_Init, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000080, "Member 'BP_SharedWoolenHeartPerformance_C_BP_Init::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_Init, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000088, "Member 'BP_SharedWoolenHeartPerformance_C_BP_Init::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_BP_Init, CallFunc_SetPlayRate_NewRate_ImplicitCast) == 0x000090, "Member 'BP_SharedWoolenHeartPerformance_C_BP_Init::CallFunc_SetPlayRate_NewRate_ImplicitCast' has a wrong offset!");

// Function BP_SharedWoolenHeartPerformance.BP_SharedWoolenHeartPerformance_C.ChangeGravityScale
// 0x0188 (0x0188 - 0x0000)
struct BP_SharedWoolenHeartPerformance_C_ChangeGravityScale final
{
public:
	class UBP_MultiPlayerGroupMovementComponent_C* MultPlayerComp;                                   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0030(0x0010)(ConstParm, ReferenceParm)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x0078(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MultiPlayerGroupMovementComponent_C* CallFunc_GetComponentByClass_ReturnValue;         // 0x0178(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SharedWoolenHeartPerformance_C_ChangeGravityScale) == 0x000008, "Wrong alignment on BP_SharedWoolenHeartPerformance_C_ChangeGravityScale");
static_assert(sizeof(BP_SharedWoolenHeartPerformance_C_ChangeGravityScale) == 0x000188, "Wrong size on BP_SharedWoolenHeartPerformance_C_ChangeGravityScale");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ChangeGravityScale, MultPlayerComp) == 0x000000, "Member 'BP_SharedWoolenHeartPerformance_C_ChangeGravityScale::MultPlayerComp' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ChangeGravityScale, K2Node_MakeArray_Array) == 0x000008, "Member 'BP_SharedWoolenHeartPerformance_C_ChangeGravityScale::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ChangeGravityScale, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_SharedWoolenHeartPerformance_C_ChangeGravityScale::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ChangeGravityScale, K2Node_MakeArray_Array_1) == 0x000030, "Member 'BP_SharedWoolenHeartPerformance_C_ChangeGravityScale::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ChangeGravityScale, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_SharedWoolenHeartPerformance_C_ChangeGravityScale::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ChangeGravityScale, CallFunc_MakeVector_ReturnValue) == 0x000048, "Member 'BP_SharedWoolenHeartPerformance_C_ChangeGravityScale::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ChangeGravityScale, CallFunc_Add_VectorVector_ReturnValue) == 0x000060, "Member 'BP_SharedWoolenHeartPerformance_C_ChangeGravityScale::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ChangeGravityScale, CallFunc_LineTraceSingleForObjects_OutHit) == 0x000078, "Member 'BP_SharedWoolenHeartPerformance_C_ChangeGravityScale::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ChangeGravityScale, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x000170, "Member 'BP_SharedWoolenHeartPerformance_C_ChangeGravityScale::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ChangeGravityScale, CallFunc_GetComponentByClass_ReturnValue) == 0x000178, "Member 'BP_SharedWoolenHeartPerformance_C_ChangeGravityScale::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ChangeGravityScale, CallFunc_Not_PreBool_ReturnValue) == 0x000180, "Member 'BP_SharedWoolenHeartPerformance_C_ChangeGravityScale::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ChangeGravityScale, CallFunc_IsValid_ReturnValue) == 0x000181, "Member 'BP_SharedWoolenHeartPerformance_C_ChangeGravityScale::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_SharedWoolenHeartPerformance.BP_SharedWoolenHeartPerformance_C.ExecuteUbergraph_BP_SharedWoolenHeartPerformance
// 0x0220 (0x0220 - 0x0000)
struct BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_2;                          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0108(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_201[0x7];                                      // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast; // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance) == 0x000008, "Wrong alignment on BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance");
static_assert(sizeof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance) == 0x000220, "Wrong size on BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, EntryPoint) == 0x000000, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_VLerp_ReturnValue) == 0x000020, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_BreakVector_X) == 0x000038, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_BreakVector_Y) == 0x000040, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_BreakVector_Z) == 0x000048, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000050, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_BreakVector_X_1) == 0x000068, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_BreakVector_Y_1) == 0x000070, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_BreakVector_Z_1) == 0x000078, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_BreakVector_X_2) == 0x000080, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_BreakVector_Y_2) == 0x000088, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_BreakVector_Z_2) == 0x000090, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000098, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_MakeRotator_ReturnValue) == 0x0000B0, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000C8, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_Lerp_ReturnValue) == 0x0000E0, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000E8, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_MakeVector_ReturnValue) == 0x0000F0, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000108, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000200, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000208, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast) == 0x000210, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance, CallFunc_Lerp_Alpha_ImplicitCast) == 0x000218, "Member 'BP_SharedWoolenHeartPerformance_C_ExecuteUbergraph_BP_SharedWoolenHeartPerformance::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");

// Function BP_SharedWoolenHeartPerformance.BP_SharedWoolenHeartPerformance_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct BP_SharedWoolenHeartPerformance_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_SharedWoolenHeartPerformance_C_GetModuleName) == 0x000008, "Wrong alignment on BP_SharedWoolenHeartPerformance_C_GetModuleName");
static_assert(sizeof(BP_SharedWoolenHeartPerformance_C_GetModuleName) == 0x000010, "Wrong size on BP_SharedWoolenHeartPerformance_C_GetModuleName");
static_assert(offsetof(BP_SharedWoolenHeartPerformance_C_GetModuleName, ReturnValue) == 0x000000, "Member 'BP_SharedWoolenHeartPerformance_C_GetModuleName::ReturnValue' has a wrong offset!");

}


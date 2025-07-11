﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GuideTriggerVolume

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_GuideTriggerVolume.BP_GuideTriggerVolume_C.ShowVolume
// 0x0002 (0x0002 - 0x0000)
struct BP_GuideTriggerVolume_C_ShowVolume final
{
public:
	bool                                          CanShow;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GuideTriggerVolume_C_ShowVolume) == 0x000001, "Wrong alignment on BP_GuideTriggerVolume_C_ShowVolume");
static_assert(sizeof(BP_GuideTriggerVolume_C_ShowVolume) == 0x000002, "Wrong size on BP_GuideTriggerVolume_C_ShowVolume");
static_assert(offsetof(BP_GuideTriggerVolume_C_ShowVolume, CanShow) == 0x000000, "Member 'BP_GuideTriggerVolume_C_ShowVolume::CanShow' has a wrong offset!");
static_assert(offsetof(BP_GuideTriggerVolume_C_ShowVolume, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'BP_GuideTriggerVolume_C_ShowVolume::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_GuideTriggerVolume.BP_GuideTriggerVolume_C.SetVolumeID
// 0x0008 (0x0008 - 0x0000)
struct BP_GuideTriggerVolume_C_SetVolumeID final
{
public:
	int64                                         VolumeID_0;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GuideTriggerVolume_C_SetVolumeID) == 0x000008, "Wrong alignment on BP_GuideTriggerVolume_C_SetVolumeID");
static_assert(sizeof(BP_GuideTriggerVolume_C_SetVolumeID) == 0x000008, "Wrong size on BP_GuideTriggerVolume_C_SetVolumeID");
static_assert(offsetof(BP_GuideTriggerVolume_C_SetVolumeID, VolumeID_0) == 0x000000, "Member 'BP_GuideTriggerVolume_C_SetVolumeID::VolumeID_0' has a wrong offset!");

// Function BP_GuideTriggerVolume.BP_GuideTriggerVolume_C.SetTransformInfo
// 0x0340 (0x0340 - 0x0000)
struct BP_GuideTriggerVolume_C_SetTransformInfo final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation;                                          // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                Scale;                                             // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48[0x8];                                       // 0x0048(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0050(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_32ByteByte_ReturnValue;        // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x00F0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x0150(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult_1;    // 0x0248(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_GuideTriggerVolume_C_SetTransformInfo) == 0x000010, "Wrong alignment on BP_GuideTriggerVolume_C_SetTransformInfo");
static_assert(sizeof(BP_GuideTriggerVolume_C_SetTransformInfo) == 0x000340, "Wrong size on BP_GuideTriggerVolume_C_SetTransformInfo");
static_assert(offsetof(BP_GuideTriggerVolume_C_SetTransformInfo, Location) == 0x000000, "Member 'BP_GuideTriggerVolume_C_SetTransformInfo::Location' has a wrong offset!");
static_assert(offsetof(BP_GuideTriggerVolume_C_SetTransformInfo, Rotation) == 0x000018, "Member 'BP_GuideTriggerVolume_C_SetTransformInfo::Rotation' has a wrong offset!");
static_assert(offsetof(BP_GuideTriggerVolume_C_SetTransformInfo, Scale) == 0x000030, "Member 'BP_GuideTriggerVolume_C_SetTransformInfo::Scale' has a wrong offset!");
static_assert(offsetof(BP_GuideTriggerVolume_C_SetTransformInfo, CallFunc_MakeTransform_ReturnValue) == 0x000050, "Member 'BP_GuideTriggerVolume_C_SetTransformInfo::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GuideTriggerVolume_C_SetTransformInfo, CallFunc_BreakVector_X) == 0x0000B0, "Member 'BP_GuideTriggerVolume_C_SetTransformInfo::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_GuideTriggerVolume_C_SetTransformInfo, CallFunc_BreakVector_Y) == 0x0000B8, "Member 'BP_GuideTriggerVolume_C_SetTransformInfo::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_GuideTriggerVolume_C_SetTransformInfo, CallFunc_BreakVector_Z) == 0x0000C0, "Member 'BP_GuideTriggerVolume_C_SetTransformInfo::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_GuideTriggerVolume_C_SetTransformInfo, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000C8, "Member 'BP_GuideTriggerVolume_C_SetTransformInfo::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GuideTriggerVolume_C_SetTransformInfo, CallFunc_EqualEqual_32ByteByte_ReturnValue) == 0x0000D0, "Member 'BP_GuideTriggerVolume_C_SetTransformInfo::CallFunc_EqualEqual_32ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GuideTriggerVolume_C_SetTransformInfo, CallFunc_MakeVector_ReturnValue) == 0x0000D8, "Member 'BP_GuideTriggerVolume_C_SetTransformInfo::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GuideTriggerVolume_C_SetTransformInfo, CallFunc_MakeTransform_ReturnValue_1) == 0x0000F0, "Member 'BP_GuideTriggerVolume_C_SetTransformInfo::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GuideTriggerVolume_C_SetTransformInfo, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x000150, "Member 'BP_GuideTriggerVolume_C_SetTransformInfo::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_GuideTriggerVolume_C_SetTransformInfo, CallFunc_K2_SetWorldTransform_SweepHitResult_1) == 0x000248, "Member 'BP_GuideTriggerVolume_C_SetTransformInfo::CallFunc_K2_SetWorldTransform_SweepHitResult_1' has a wrong offset!");

// Function BP_GuideTriggerVolume.BP_GuideTriggerVolume_C.SetMeshType
// 0x0008 (0x0008 - 0x0000)
struct BP_GuideTriggerVolume_C_SetMeshType final
{
public:
	int32                                         MeshType_0;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_1;              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_2;              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GuideTriggerVolume_C_SetMeshType) == 0x000004, "Wrong alignment on BP_GuideTriggerVolume_C_SetMeshType");
static_assert(sizeof(BP_GuideTriggerVolume_C_SetMeshType) == 0x000008, "Wrong size on BP_GuideTriggerVolume_C_SetMeshType");
static_assert(offsetof(BP_GuideTriggerVolume_C_SetMeshType, MeshType_0) == 0x000000, "Member 'BP_GuideTriggerVolume_C_SetMeshType::MeshType_0' has a wrong offset!");
static_assert(offsetof(BP_GuideTriggerVolume_C_SetMeshType, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'BP_GuideTriggerVolume_C_SetMeshType::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_GuideTriggerVolume_C_SetMeshType, CallFunc_SetStaticMesh_ReturnValue) == 0x000005, "Member 'BP_GuideTriggerVolume_C_SetMeshType::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GuideTriggerVolume_C_SetMeshType, CallFunc_SetStaticMesh_ReturnValue_1) == 0x000006, "Member 'BP_GuideTriggerVolume_C_SetMeshType::CallFunc_SetStaticMesh_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GuideTriggerVolume_C_SetMeshType, CallFunc_SetStaticMesh_ReturnValue_2) == 0x000007, "Member 'BP_GuideTriggerVolume_C_SetMeshType::CallFunc_SetStaticMesh_ReturnValue_2' has a wrong offset!");

// Function BP_GuideTriggerVolume.BP_GuideTriggerVolume_C.SetAutoDestroy
// 0x0001 (0x0001 - 0x0000)
struct BP_GuideTriggerVolume_C_SetAutoDestroy final
{
public:
	bool                                          IsAutoDestroy_0;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GuideTriggerVolume_C_SetAutoDestroy) == 0x000001, "Wrong alignment on BP_GuideTriggerVolume_C_SetAutoDestroy");
static_assert(sizeof(BP_GuideTriggerVolume_C_SetAutoDestroy) == 0x000001, "Wrong size on BP_GuideTriggerVolume_C_SetAutoDestroy");
static_assert(offsetof(BP_GuideTriggerVolume_C_SetAutoDestroy, IsAutoDestroy_0) == 0x000000, "Member 'BP_GuideTriggerVolume_C_SetAutoDestroy::IsAutoDestroy_0' has a wrong offset!");

// Function BP_GuideTriggerVolume.BP_GuideTriggerVolume_C.ReceiveActorEndOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_GuideTriggerVolume_C_ReceiveActorEndOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GuideTriggerVolume_C_ReceiveActorEndOverlap) == 0x000008, "Wrong alignment on BP_GuideTriggerVolume_C_ReceiveActorEndOverlap");
static_assert(sizeof(BP_GuideTriggerVolume_C_ReceiveActorEndOverlap) == 0x000008, "Wrong size on BP_GuideTriggerVolume_C_ReceiveActorEndOverlap");
static_assert(offsetof(BP_GuideTriggerVolume_C_ReceiveActorEndOverlap, OtherActor) == 0x000000, "Member 'BP_GuideTriggerVolume_C_ReceiveActorEndOverlap::OtherActor' has a wrong offset!");

// Function BP_GuideTriggerVolume.BP_GuideTriggerVolume_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_GuideTriggerVolume_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GuideTriggerVolume_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_GuideTriggerVolume_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_GuideTriggerVolume_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_GuideTriggerVolume_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_GuideTriggerVolume_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_GuideTriggerVolume_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function BP_GuideTriggerVolume.BP_GuideTriggerVolume_C.OnOverlapEnd
// 0x0008 (0x0008 - 0x0000)
struct BP_GuideTriggerVolume_C_OnOverlapEnd final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GuideTriggerVolume_C_OnOverlapEnd) == 0x000008, "Wrong alignment on BP_GuideTriggerVolume_C_OnOverlapEnd");
static_assert(sizeof(BP_GuideTriggerVolume_C_OnOverlapEnd) == 0x000008, "Wrong size on BP_GuideTriggerVolume_C_OnOverlapEnd");
static_assert(offsetof(BP_GuideTriggerVolume_C_OnOverlapEnd, Actor) == 0x000000, "Member 'BP_GuideTriggerVolume_C_OnOverlapEnd::Actor' has a wrong offset!");

// Function BP_GuideTriggerVolume.BP_GuideTriggerVolume_C.OnOverlapBegin
// 0x0008 (0x0008 - 0x0000)
struct BP_GuideTriggerVolume_C_OnOverlapBegin final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GuideTriggerVolume_C_OnOverlapBegin) == 0x000008, "Wrong alignment on BP_GuideTriggerVolume_C_OnOverlapBegin");
static_assert(sizeof(BP_GuideTriggerVolume_C_OnOverlapBegin) == 0x000008, "Wrong size on BP_GuideTriggerVolume_C_OnOverlapBegin");
static_assert(offsetof(BP_GuideTriggerVolume_C_OnOverlapBegin, Actor) == 0x000000, "Member 'BP_GuideTriggerVolume_C_OnOverlapBegin::Actor' has a wrong offset!");

// Function BP_GuideTriggerVolume.BP_GuideTriggerVolume_C.GetVolumeID
// 0x0008 (0x0008 - 0x0000)
struct BP_GuideTriggerVolume_C_GetVolumeID final
{
public:
	int64                                         VolumeID_0;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GuideTriggerVolume_C_GetVolumeID) == 0x000008, "Wrong alignment on BP_GuideTriggerVolume_C_GetVolumeID");
static_assert(sizeof(BP_GuideTriggerVolume_C_GetVolumeID) == 0x000008, "Wrong size on BP_GuideTriggerVolume_C_GetVolumeID");
static_assert(offsetof(BP_GuideTriggerVolume_C_GetVolumeID, VolumeID_0) == 0x000000, "Member 'BP_GuideTriggerVolume_C_GetVolumeID::VolumeID_0' has a wrong offset!");

// Function BP_GuideTriggerVolume.BP_GuideTriggerVolume_C.GetAutoDestroy
// 0x0001 (0x0001 - 0x0000)
struct BP_GuideTriggerVolume_C_GetAutoDestroy final
{
public:
	bool                                          IsAutoDestroy_0;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GuideTriggerVolume_C_GetAutoDestroy) == 0x000001, "Wrong alignment on BP_GuideTriggerVolume_C_GetAutoDestroy");
static_assert(sizeof(BP_GuideTriggerVolume_C_GetAutoDestroy) == 0x000001, "Wrong size on BP_GuideTriggerVolume_C_GetAutoDestroy");
static_assert(offsetof(BP_GuideTriggerVolume_C_GetAutoDestroy, IsAutoDestroy_0) == 0x000000, "Member 'BP_GuideTriggerVolume_C_GetAutoDestroy::IsAutoDestroy_0' has a wrong offset!");

// Function BP_GuideTriggerVolume.BP_GuideTriggerVolume_C.ExecuteUbergraph_BP_GuideTriggerVolume
// 0x0018 (0x0018 - 0x0000)
struct BP_GuideTriggerVolume_C_ExecuteUbergraph_BP_GuideTriggerVolume final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor_1;                         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GuideTriggerVolume_C_ExecuteUbergraph_BP_GuideTriggerVolume) == 0x000008, "Wrong alignment on BP_GuideTriggerVolume_C_ExecuteUbergraph_BP_GuideTriggerVolume");
static_assert(sizeof(BP_GuideTriggerVolume_C_ExecuteUbergraph_BP_GuideTriggerVolume) == 0x000018, "Wrong size on BP_GuideTriggerVolume_C_ExecuteUbergraph_BP_GuideTriggerVolume");
static_assert(offsetof(BP_GuideTriggerVolume_C_ExecuteUbergraph_BP_GuideTriggerVolume, EntryPoint) == 0x000000, "Member 'BP_GuideTriggerVolume_C_ExecuteUbergraph_BP_GuideTriggerVolume::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GuideTriggerVolume_C_ExecuteUbergraph_BP_GuideTriggerVolume, K2Node_Event_OtherActor) == 0x000008, "Member 'BP_GuideTriggerVolume_C_ExecuteUbergraph_BP_GuideTriggerVolume::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_GuideTriggerVolume_C_ExecuteUbergraph_BP_GuideTriggerVolume, K2Node_Event_OtherActor_1) == 0x000010, "Member 'BP_GuideTriggerVolume_C_ExecuteUbergraph_BP_GuideTriggerVolume::K2Node_Event_OtherActor_1' has a wrong offset!");

// Function BP_GuideTriggerVolume.BP_GuideTriggerVolume_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct BP_GuideTriggerVolume_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_GuideTriggerVolume_C_GetModuleName) == 0x000008, "Wrong alignment on BP_GuideTriggerVolume_C_GetModuleName");
static_assert(sizeof(BP_GuideTriggerVolume_C_GetModuleName) == 0x000010, "Wrong size on BP_GuideTriggerVolume_C_GetModuleName");
static_assert(offsetof(BP_GuideTriggerVolume_C_GetModuleName, ReturnValue) == 0x000000, "Member 'BP_GuideTriggerVolume_C_GetModuleName::ReturnValue' has a wrong offset!");

}


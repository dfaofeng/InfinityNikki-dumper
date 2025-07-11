﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_X6MonsterrCharacter

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "EFeedBackReason_structs.hpp"


namespace SDK::Params
{

// Function BP_X6MonsterrCharacter.BP_X6MonsterrCharacter_C.GetDistanceToDesiredHeight
// 0x0228 (0x0228 - 0x0000)
struct BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight final
{
public:
	double                                        Distance;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0048(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0142(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_143[0x1];                                      // 0x0143(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14C[0x4];                                      // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E4[0x4];                                      // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0200(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight) == 0x000008, "Wrong alignment on BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight");
static_assert(sizeof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight) == 0x000228, "Wrong size on BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, Distance) == 0x000000, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::Distance' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, Temp_object_Variable) == 0x000008, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000018, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000030, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_LineTraceSingle_OutHit) == 0x000048, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_LineTraceSingle_ReturnValue) == 0x000140, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_BreakHitResult_bBlockingHit) == 0x000141, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_BreakHitResult_bInitialOverlap) == 0x000142, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_BreakHitResult_Time) == 0x000144, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_BreakHitResult_Distance) == 0x000148, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_BreakHitResult_Location) == 0x000150, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_BreakHitResult_ImpactPoint) == 0x000168, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_BreakHitResult_Normal) == 0x000180, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_BreakHitResult_ImpactNormal) == 0x000198, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_BreakHitResult_PhysMat) == 0x0001B0, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_BreakHitResult_HitActor) == 0x0001B8, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_BreakHitResult_HitComponent) == 0x0001C0, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_BreakHitResult_HitBoneName) == 0x0001C8, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_BreakHitResult_BoneName) == 0x0001D0, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_BreakHitResult_HitItem) == 0x0001D8, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_BreakHitResult_ElementIndex) == 0x0001DC, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_BreakHitResult_FaceIndex) == 0x0001E0, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_BreakHitResult_TraceStart) == 0x0001E8, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_BreakHitResult_TraceEnd) == 0x000200, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000218, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000220, "Member 'BP_X6MonsterrCharacter_C_GetDistanceToDesiredHeight::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function BP_X6MonsterrCharacter.BP_X6MonsterrCharacter_C.GetAIObjectClass
// 0x0010 (0x0010 - 0x0000)
struct BP_X6MonsterrCharacter_C_GetAIObjectClass final
{
public:
	class FString                                 LuaClassPath;                                      // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_X6MonsterrCharacter_C_GetAIObjectClass) == 0x000008, "Wrong alignment on BP_X6MonsterrCharacter_C_GetAIObjectClass");
static_assert(sizeof(BP_X6MonsterrCharacter_C_GetAIObjectClass) == 0x000010, "Wrong size on BP_X6MonsterrCharacter_C_GetAIObjectClass");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetAIObjectClass, LuaClassPath) == 0x000000, "Member 'BP_X6MonsterrCharacter_C_GetAIObjectClass::LuaClassPath' has a wrong offset!");

// Function BP_X6MonsterrCharacter.BP_X6MonsterrCharacter_C.ExecuteUbergraph_BP_X6MonsterrCharacter
// 0x0018 (0x0018 - 0x0000)
struct BP_X6MonsterrCharacter_C_ExecuteUbergraph_BP_X6MonsterrCharacter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         K2Node_ComponentBoundEvent_EntityID;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFeedBackReason                               K2Node_ComponentBoundEvent_Reason;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_X6MonsterrCharacter_C_ExecuteUbergraph_BP_X6MonsterrCharacter) == 0x000008, "Wrong alignment on BP_X6MonsterrCharacter_C_ExecuteUbergraph_BP_X6MonsterrCharacter");
static_assert(sizeof(BP_X6MonsterrCharacter_C_ExecuteUbergraph_BP_X6MonsterrCharacter) == 0x000018, "Wrong size on BP_X6MonsterrCharacter_C_ExecuteUbergraph_BP_X6MonsterrCharacter");
static_assert(offsetof(BP_X6MonsterrCharacter_C_ExecuteUbergraph_BP_X6MonsterrCharacter, EntryPoint) == 0x000000, "Member 'BP_X6MonsterrCharacter_C_ExecuteUbergraph_BP_X6MonsterrCharacter::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_ExecuteUbergraph_BP_X6MonsterrCharacter, K2Node_ComponentBoundEvent_EntityID) == 0x000008, "Member 'BP_X6MonsterrCharacter_C_ExecuteUbergraph_BP_X6MonsterrCharacter::K2Node_ComponentBoundEvent_EntityID' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_ExecuteUbergraph_BP_X6MonsterrCharacter, K2Node_ComponentBoundEvent_Reason) == 0x000010, "Member 'BP_X6MonsterrCharacter_C_ExecuteUbergraph_BP_X6MonsterrCharacter::K2Node_ComponentBoundEvent_Reason' has a wrong offset!");

// Function BP_X6MonsterrCharacter.BP_X6MonsterrCharacter_C.DrawHeightCylinder
// 0x02D0 (0x02D0 - 0x0000)
struct BP_X6MonsterrCharacter_C_DrawHeightCylinder final
{
public:
	struct FVector                                HItPoint;                                          // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                JumpPoint;                                         // 0x0018(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MeshLocation;                                      // 0x0030(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0078(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0088(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_183[0x1];                                      // 0x0183(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18C[0x4];                                      // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0200(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_224[0x4];                                      // 0x0224(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEditor_ReturnValue;                     // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_259[0x7];                                      // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X_1;                          // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_279[0x7];                                      // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X_2;                          // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x02A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x02B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_X6MonsterrCharacter_C_DrawHeightCylinder) == 0x000008, "Wrong alignment on BP_X6MonsterrCharacter_C_DrawHeightCylinder");
static_assert(sizeof(BP_X6MonsterrCharacter_C_DrawHeightCylinder) == 0x0002D0, "Wrong size on BP_X6MonsterrCharacter_C_DrawHeightCylinder");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, HItPoint) == 0x000000, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::HItPoint' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, JumpPoint) == 0x000018, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::JumpPoint' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, MeshLocation) == 0x000030, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::MeshLocation' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakVector_X) == 0x000048, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakVector_Y) == 0x000050, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakVector_Z) == 0x000058, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000060, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, Temp_object_Variable) == 0x000078, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_LineTraceSingle_OutHit) == 0x000088, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_LineTraceSingle_ReturnValue) == 0x000180, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakHitResult_bBlockingHit) == 0x000181, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakHitResult_bInitialOverlap) == 0x000182, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakHitResult_Time) == 0x000184, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakHitResult_Distance) == 0x000188, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakHitResult_Location) == 0x000190, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakHitResult_ImpactPoint) == 0x0001A8, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakHitResult_Normal) == 0x0001C0, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakHitResult_ImpactNormal) == 0x0001D8, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakHitResult_PhysMat) == 0x0001F0, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakHitResult_HitActor) == 0x0001F8, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakHitResult_HitComponent) == 0x000200, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakHitResult_HitBoneName) == 0x000208, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakHitResult_BoneName) == 0x000210, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakHitResult_HitItem) == 0x000218, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakHitResult_ElementIndex) == 0x00021C, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakHitResult_FaceIndex) == 0x000220, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakHitResult_TraceStart) == 0x000228, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakHitResult_TraceEnd) == 0x000240, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_IsEditor_ReturnValue) == 0x000258, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_IsEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakVector_X_1) == 0x000260, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakVector_Y_1) == 0x000268, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakVector_Z_1) == 0x000270, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000278, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakVector_X_2) == 0x000280, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakVector_Y_2) == 0x000288, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_BreakVector_Z_2) == 0x000290, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000298, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_MakeVector_ReturnValue) == 0x0002A0, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_DrawHeightCylinder, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0002B8, "Member 'BP_X6MonsterrCharacter_C_DrawHeightCylinder::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");

// Function BP_X6MonsterrCharacter.BP_X6MonsterrCharacter_C.BndEvt__BP_X6MonsterrCharacter_BP_CombatPerformanceProcessorComponent_K2Node_ComponentBoundEvent_0_ReceiveDead__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_X6MonsterrCharacter_C_BndEvt__BP_X6MonsterrCharacter_BP_CombatPerformanceProcessorComponent_K2Node_ComponentBoundEvent_0_ReceiveDead__DelegateSignature final
{
public:
	int64                                         EntityID;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFeedBackReason                               Reason;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_X6MonsterrCharacter_C_BndEvt__BP_X6MonsterrCharacter_BP_CombatPerformanceProcessorComponent_K2Node_ComponentBoundEvent_0_ReceiveDead__DelegateSignature) == 0x000008, "Wrong alignment on BP_X6MonsterrCharacter_C_BndEvt__BP_X6MonsterrCharacter_BP_CombatPerformanceProcessorComponent_K2Node_ComponentBoundEvent_0_ReceiveDead__DelegateSignature");
static_assert(sizeof(BP_X6MonsterrCharacter_C_BndEvt__BP_X6MonsterrCharacter_BP_CombatPerformanceProcessorComponent_K2Node_ComponentBoundEvent_0_ReceiveDead__DelegateSignature) == 0x000010, "Wrong size on BP_X6MonsterrCharacter_C_BndEvt__BP_X6MonsterrCharacter_BP_CombatPerformanceProcessorComponent_K2Node_ComponentBoundEvent_0_ReceiveDead__DelegateSignature");
static_assert(offsetof(BP_X6MonsterrCharacter_C_BndEvt__BP_X6MonsterrCharacter_BP_CombatPerformanceProcessorComponent_K2Node_ComponentBoundEvent_0_ReceiveDead__DelegateSignature, EntityID) == 0x000000, "Member 'BP_X6MonsterrCharacter_C_BndEvt__BP_X6MonsterrCharacter_BP_CombatPerformanceProcessorComponent_K2Node_ComponentBoundEvent_0_ReceiveDead__DelegateSignature::EntityID' has a wrong offset!");
static_assert(offsetof(BP_X6MonsterrCharacter_C_BndEvt__BP_X6MonsterrCharacter_BP_CombatPerformanceProcessorComponent_K2Node_ComponentBoundEvent_0_ReceiveDead__DelegateSignature, Reason) == 0x000008, "Member 'BP_X6MonsterrCharacter_C_BndEvt__BP_X6MonsterrCharacter_BP_CombatPerformanceProcessorComponent_K2Node_ComponentBoundEvent_0_ReceiveDead__DelegateSignature::Reason' has a wrong offset!");

// Function BP_X6MonsterrCharacter.BP_X6MonsterrCharacter_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct BP_X6MonsterrCharacter_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_X6MonsterrCharacter_C_GetModuleName) == 0x000008, "Wrong alignment on BP_X6MonsterrCharacter_C_GetModuleName");
static_assert(sizeof(BP_X6MonsterrCharacter_C_GetModuleName) == 0x000010, "Wrong size on BP_X6MonsterrCharacter_C_GetModuleName");
static_assert(offsetof(BP_X6MonsterrCharacter_C_GetModuleName, ReturnValue) == 0x000000, "Member 'BP_X6MonsterrCharacter_C_GetModuleName::ReturnValue' has a wrong offset!");

}


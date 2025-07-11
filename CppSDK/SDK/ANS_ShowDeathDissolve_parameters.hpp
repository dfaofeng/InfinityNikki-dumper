﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANS_ShowDeathDissolve

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ANS_ShowDeathDissolve.ANS_ShowDeathDissolve_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct ANS_ShowDeathDissolve_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(ANS_ShowDeathDissolve_C_GetModuleName) == 0x000008, "Wrong alignment on ANS_ShowDeathDissolve_C_GetModuleName");
static_assert(sizeof(ANS_ShowDeathDissolve_C_GetModuleName) == 0x000010, "Wrong size on ANS_ShowDeathDissolve_C_GetModuleName");
static_assert(offsetof(ANS_ShowDeathDissolve_C_GetModuleName, ReturnValue) == 0x000000, "Member 'ANS_ShowDeathDissolve_C_GetModuleName::ReturnValue' has a wrong offset!");

// Function ANS_ShowDeathDissolve.ANS_ShowDeathDissolve_C.Received_NotifyBegin
// 0x00A0 (0x00A0 - 0x0000)
struct ANS_ShowDeathDissolve_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDuration;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0018(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x004C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0054(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x005C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x0064(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_4;                              // 0x006C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_5;                              // 0x0074(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_6;                              // 0x007C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANS_ShowDeathDissolve_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on ANS_ShowDeathDissolve_C_Received_NotifyBegin");
static_assert(sizeof(ANS_ShowDeathDissolve_C_Received_NotifyBegin) == 0x0000A0, "Wrong size on ANS_ShowDeathDissolve_C_Received_NotifyBegin");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyBegin, Animation) == 0x000008, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyBegin, EventReference) == 0x000018, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyBegin::EventReference' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyBegin, ReturnValue) == 0x000048, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyBegin, Temp_name_Variable) == 0x00004C, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyBegin::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyBegin, Temp_name_Variable_1) == 0x000054, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyBegin::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyBegin, Temp_name_Variable_2) == 0x00005C, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyBegin::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyBegin, Temp_name_Variable_3) == 0x000064, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyBegin::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyBegin, Temp_name_Variable_4) == 0x00006C, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyBegin::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyBegin, Temp_name_Variable_5) == 0x000074, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyBegin::Temp_name_Variable_5' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyBegin, Temp_name_Variable_6) == 0x00007C, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyBegin::Temp_name_Variable_6' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyBegin, CallFunc_Conv_LinearColorToVector_ReturnValue) == 0x000088, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyBegin::CallFunc_Conv_LinearColorToVector_ReturnValue' has a wrong offset!");

// Function ANS_ShowDeathDissolve.ANS_ShowDeathDissolve_C.Received_NotifyEnd
// 0x0048 (0x0048 - 0x0000)
struct ANS_ShowDeathDissolve_C_Received_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANS_ShowDeathDissolve_C_Received_NotifyEnd) == 0x000008, "Wrong alignment on ANS_ShowDeathDissolve_C_Received_NotifyEnd");
static_assert(sizeof(ANS_ShowDeathDissolve_C_Received_NotifyEnd) == 0x000048, "Wrong size on ANS_ShowDeathDissolve_C_Received_NotifyEnd");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyEnd, Animation) == 0x000008, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyEnd::Animation' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyEnd, EventReference) == 0x000010, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyEnd::EventReference' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyEnd, ReturnValue) == 0x000040, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");

// Function ANS_ShowDeathDissolve.ANS_ShowDeathDissolve_C.Received_NotifyTick
// 0x0148 (0x0148 - 0x0000)
struct ANS_ShowDeathDissolve_C_Received_NotifyTick final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         FrameDeltaTime;                                    // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0018(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCurrentAnimationTime_ReturnValue;      // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurrentAnimationNotifyStateTimeRatio_ReturnValue; // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetComponentBounds_Origin;                // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent;             // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetComponentBounds_SphereRadius;          // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_Array_Get_Item;                           // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AE[0x2];                                       // 0x00AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MinTime;                     // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime;                     // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MinTime_1;                   // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime_1;                   // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x00E8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x00F0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1;   // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;   // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast_1;      // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Map_Add_Value_ImplicitCast;               // 0x0138(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Map_Add_Value_ImplicitCast_1;             // 0x0140(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANS_ShowDeathDissolve_C_Received_NotifyTick) == 0x000008, "Wrong alignment on ANS_ShowDeathDissolve_C_Received_NotifyTick");
static_assert(sizeof(ANS_ShowDeathDissolve_C_Received_NotifyTick) == 0x000148, "Wrong size on ANS_ShowDeathDissolve_C_Received_NotifyTick");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, MeshComp) == 0x000000, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::MeshComp' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, Animation) == 0x000008, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::Animation' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, FrameDeltaTime) == 0x000010, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::FrameDeltaTime' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, EventReference) == 0x000018, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::EventReference' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, ReturnValue) == 0x000048, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_GetCurrentAnimationTime_ReturnValue) == 0x00004C, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_GetCurrentAnimationTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_GetCurrentAnimationNotifyStateTimeRatio_ReturnValue) == 0x000050, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_GetCurrentAnimationNotifyStateTimeRatio_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_GetComponentBounds_Origin) == 0x000058, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_GetComponentBounds_Origin' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_GetComponentBounds_BoxExtent) == 0x000070, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_GetComponentBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_GetComponentBounds_SphereRadius) == 0x000088, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_GetComponentBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_GetOwner_ReturnValue) == 0x000090, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000098, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_Array_Length_ReturnValue) == 0x0000A8, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_IsValid_ReturnValue) == 0x0000AC, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_Greater_IntInt_ReturnValue) == 0x0000AD, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_SpawnSystemAttached_ReturnValue) == 0x0000B0, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000B8, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_Array_AddUnique_ReturnValue) == 0x0000BC, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_GetTimeRange_MinTime) == 0x0000C0, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_GetTimeRange_MinTime' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_GetTimeRange_MaxTime) == 0x0000C4, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_GetTimeRange_MaxTime' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_GetTimeRange_MinTime_1) == 0x0000C8, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_GetTimeRange_MinTime_1' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_GetTimeRange_MaxTime_1) == 0x0000CC, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_GetTimeRange_MaxTime_1' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000D0, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0000D8, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_GetFloatValue_ReturnValue) == 0x0000E0, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_GetFloatValue_ReturnValue_1) == 0x0000E4, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, Temp_name_Variable) == 0x0000E8, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, Temp_name_Variable_1) == 0x0000F0, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x0000F8, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000100, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1) == 0x000108, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000110, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000118, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x000120, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2) == 0x000128, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x000130, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_GetFloatValue_InTime_ImplicitCast_1) == 0x000134, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_GetFloatValue_InTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_Map_Add_Value_ImplicitCast) == 0x000138, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_Map_Add_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ANS_ShowDeathDissolve_C_Received_NotifyTick, CallFunc_Map_Add_Value_ImplicitCast_1) == 0x000140, "Member 'ANS_ShowDeathDissolve_C_Received_NotifyTick::CallFunc_Map_Add_Value_ImplicitCast_1' has a wrong offset!");

}


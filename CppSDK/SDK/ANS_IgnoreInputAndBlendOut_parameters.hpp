﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANS_IgnoreInputAndBlendOut

#include "Basic.hpp"

#include "FBlendOutCondition_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ANS_IgnoreInputAndBlendOut.ANS_IgnoreInputAndBlendOut_C.AddJumpData
// 0x0020 (0x0020 - 0x0000)
struct ANS_IgnoreInputAndBlendOut_C_AddJumpData final
{
public:
	double                                        Duration;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFBlendOutCondition                    K2Node_MakeStruct_FBlendOutCondition;              // 0x0008(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANS_IgnoreInputAndBlendOut_C_AddJumpData) == 0x000008, "Wrong alignment on ANS_IgnoreInputAndBlendOut_C_AddJumpData");
static_assert(sizeof(ANS_IgnoreInputAndBlendOut_C_AddJumpData) == 0x000020, "Wrong size on ANS_IgnoreInputAndBlendOut_C_AddJumpData");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_AddJumpData, Duration) == 0x000000, "Member 'ANS_IgnoreInputAndBlendOut_C_AddJumpData::Duration' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_AddJumpData, K2Node_MakeStruct_FBlendOutCondition) == 0x000008, "Member 'ANS_IgnoreInputAndBlendOut_C_AddJumpData::K2Node_MakeStruct_FBlendOutCondition' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_AddJumpData, CallFunc_Array_Add_ReturnValue) == 0x000018, "Member 'ANS_IgnoreInputAndBlendOut_C_AddJumpData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function ANS_IgnoreInputAndBlendOut.ANS_IgnoreInputAndBlendOut_C.AddMoveData
// 0x0020 (0x0020 - 0x0000)
struct ANS_IgnoreInputAndBlendOut_C_AddMoveData final
{
public:
	double                                        Duration;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFBlendOutCondition                    K2Node_MakeStruct_FBlendOutCondition;              // 0x0008(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANS_IgnoreInputAndBlendOut_C_AddMoveData) == 0x000008, "Wrong alignment on ANS_IgnoreInputAndBlendOut_C_AddMoveData");
static_assert(sizeof(ANS_IgnoreInputAndBlendOut_C_AddMoveData) == 0x000020, "Wrong size on ANS_IgnoreInputAndBlendOut_C_AddMoveData");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_AddMoveData, Duration) == 0x000000, "Member 'ANS_IgnoreInputAndBlendOut_C_AddMoveData::Duration' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_AddMoveData, K2Node_MakeStruct_FBlendOutCondition) == 0x000008, "Member 'ANS_IgnoreInputAndBlendOut_C_AddMoveData::K2Node_MakeStruct_FBlendOutCondition' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_AddMoveData, CallFunc_Array_Add_ReturnValue) == 0x000018, "Member 'ANS_IgnoreInputAndBlendOut_C_AddMoveData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function ANS_IgnoreInputAndBlendOut.ANS_IgnoreInputAndBlendOut_C.BP_TickBlendOut
// 0x00A8 (0x00A8 - 0x0000)
struct ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         FrameDeltaTime;                                    // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           AnimMontage;                                       // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          AnimInstance;                                      // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             Character;                                         // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFBlendOutCondition                    CallFunc_Array_Get_Item;                           // 0x0040(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           K2Node_DynamicCast_AsAnim_Montage;                 // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFalling_ReturnValue;                    // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82[0x6];                                       // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLastInputVector_ReturnValue;           // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_VectorVector_ReturnValue;        // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut) == 0x000008, "Wrong alignment on ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut");
static_assert(sizeof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut) == 0x0000A8, "Wrong size on ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, MeshComp) == 0x000000, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::MeshComp' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, Animation) == 0x000008, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::Animation' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, FrameDeltaTime) == 0x000010, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::FrameDeltaTime' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, ReturnValue) == 0x000014, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, AnimMontage) == 0x000018, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::AnimMontage' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, AnimInstance) == 0x000020, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::AnimInstance' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, Character) == 0x000028, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::Character' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, Temp_int_Array_Index_Variable) == 0x000030, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, CallFunc_Array_Get_Item) == 0x000040, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, K2Node_DynamicCast_AsAnim_Montage) == 0x000050, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::K2Node_DynamicCast_AsAnim_Montage' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, K2Node_SwitchEnum_CmpSuccess) == 0x000059, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, CallFunc_GetAnimInstance_ReturnValue) == 0x000068, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, CallFunc_GetOwner_ReturnValue) == 0x000070, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, K2Node_DynamicCast_AsCharacter) == 0x000078, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, CallFunc_IsFalling_ReturnValue) == 0x000081, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, CallFunc_GetLastInputVector_ReturnValue) == 0x000088, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::CallFunc_GetLastInputVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut, CallFunc_NotEqual_VectorVector_ReturnValue) == 0x0000A0, "Member 'ANS_IgnoreInputAndBlendOut_C_BP_TickBlendOut::CallFunc_NotEqual_VectorVector_ReturnValue' has a wrong offset!");

// Function ANS_IgnoreInputAndBlendOut.ANS_IgnoreInputAndBlendOut_C.CancelAbility
// 0x0048 (0x0048 - 0x0000)
struct ANS_IgnoreInputAndBlendOut_C_CancelAbility final
{
public:
	class ACharacter*                             InCharacter;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           InMontage;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UX6AbilitySystemComponent*              CallFunc_GetX6AbilitySystemComponent_ReturnValue;  // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayAbility*                       CallFunc_K2_GetAnimatingAbility_ReturnValue;       // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_GetCurrentMontage_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANS_IgnoreInputAndBlendOut_C_CancelAbility) == 0x000008, "Wrong alignment on ANS_IgnoreInputAndBlendOut_C_CancelAbility");
static_assert(sizeof(ANS_IgnoreInputAndBlendOut_C_CancelAbility) == 0x000048, "Wrong size on ANS_IgnoreInputAndBlendOut_C_CancelAbility");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_CancelAbility, InCharacter) == 0x000000, "Member 'ANS_IgnoreInputAndBlendOut_C_CancelAbility::InCharacter' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_CancelAbility, InMontage) == 0x000008, "Member 'ANS_IgnoreInputAndBlendOut_C_CancelAbility::InMontage' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_CancelAbility, Ret) == 0x000010, "Member 'ANS_IgnoreInputAndBlendOut_C_CancelAbility::Ret' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_CancelAbility, CallFunc_GetX6AbilitySystemComponent_ReturnValue) == 0x000018, "Member 'ANS_IgnoreInputAndBlendOut_C_CancelAbility::CallFunc_GetX6AbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_CancelAbility, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'ANS_IgnoreInputAndBlendOut_C_CancelAbility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_CancelAbility, CallFunc_K2_GetAnimatingAbility_ReturnValue) == 0x000028, "Member 'ANS_IgnoreInputAndBlendOut_C_CancelAbility::CallFunc_K2_GetAnimatingAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_CancelAbility, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'ANS_IgnoreInputAndBlendOut_C_CancelAbility::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_CancelAbility, CallFunc_GetCurrentMontage_ReturnValue) == 0x000038, "Member 'ANS_IgnoreInputAndBlendOut_C_CancelAbility::CallFunc_GetCurrentMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_CancelAbility, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000040, "Member 'ANS_IgnoreInputAndBlendOut_C_CancelAbility::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function ANS_IgnoreInputAndBlendOut.ANS_IgnoreInputAndBlendOut_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct ANS_IgnoreInputAndBlendOut_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(ANS_IgnoreInputAndBlendOut_C_GetModuleName) == 0x000008, "Wrong alignment on ANS_IgnoreInputAndBlendOut_C_GetModuleName");
static_assert(sizeof(ANS_IgnoreInputAndBlendOut_C_GetModuleName) == 0x000010, "Wrong size on ANS_IgnoreInputAndBlendOut_C_GetModuleName");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_GetModuleName, ReturnValue) == 0x000000, "Member 'ANS_IgnoreInputAndBlendOut_C_GetModuleName::ReturnValue' has a wrong offset!");

// Function ANS_IgnoreInputAndBlendOut.ANS_IgnoreInputAndBlendOut_C.GetNotifyName
// 0x0010 (0x0010 - 0x0000)
struct ANS_IgnoreInputAndBlendOut_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(ANS_IgnoreInputAndBlendOut_C_GetNotifyName) == 0x000008, "Wrong alignment on ANS_IgnoreInputAndBlendOut_C_GetNotifyName");
static_assert(sizeof(ANS_IgnoreInputAndBlendOut_C_GetNotifyName) == 0x000010, "Wrong size on ANS_IgnoreInputAndBlendOut_C_GetNotifyName");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'ANS_IgnoreInputAndBlendOut_C_GetNotifyName::ReturnValue' has a wrong offset!");

// Function ANS_IgnoreInputAndBlendOut.ANS_IgnoreInputAndBlendOut_C.Received_NotifyBegin_Section
// 0x0020 (0x0020 - 0x0000)
struct ANS_IgnoreInputAndBlendOut_C_Received_NotifyBegin_Section final
{
public:
	class FName                                   SectionName;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDuration;                                     // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SectionElapsedTime;                                // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyBegin_Section) == 0x000008, "Wrong alignment on ANS_IgnoreInputAndBlendOut_C_Received_NotifyBegin_Section");
static_assert(sizeof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyBegin_Section) == 0x000020, "Wrong size on ANS_IgnoreInputAndBlendOut_C_Received_NotifyBegin_Section");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyBegin_Section, SectionName) == 0x000000, "Member 'ANS_IgnoreInputAndBlendOut_C_Received_NotifyBegin_Section::SectionName' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyBegin_Section, MeshComp) == 0x000008, "Member 'ANS_IgnoreInputAndBlendOut_C_Received_NotifyBegin_Section::MeshComp' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyBegin_Section, Animation) == 0x000010, "Member 'ANS_IgnoreInputAndBlendOut_C_Received_NotifyBegin_Section::Animation' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyBegin_Section, TotalDuration) == 0x000018, "Member 'ANS_IgnoreInputAndBlendOut_C_Received_NotifyBegin_Section::TotalDuration' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyBegin_Section, SectionElapsedTime) == 0x00001C, "Member 'ANS_IgnoreInputAndBlendOut_C_Received_NotifyBegin_Section::SectionElapsedTime' has a wrong offset!");

// Function ANS_IgnoreInputAndBlendOut.ANS_IgnoreInputAndBlendOut_C.Received_NotifyEnd_Section
// 0x0020 (0x0020 - 0x0000)
struct ANS_IgnoreInputAndBlendOut_C_Received_NotifyEnd_Section final
{
public:
	class FName                                   SectionName;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         SectionElapsedTime;                                // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAnimNotifyEnd;                                    // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyEnd_Section) == 0x000008, "Wrong alignment on ANS_IgnoreInputAndBlendOut_C_Received_NotifyEnd_Section");
static_assert(sizeof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyEnd_Section) == 0x000020, "Wrong size on ANS_IgnoreInputAndBlendOut_C_Received_NotifyEnd_Section");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyEnd_Section, SectionName) == 0x000000, "Member 'ANS_IgnoreInputAndBlendOut_C_Received_NotifyEnd_Section::SectionName' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyEnd_Section, MeshComp) == 0x000008, "Member 'ANS_IgnoreInputAndBlendOut_C_Received_NotifyEnd_Section::MeshComp' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyEnd_Section, Animation) == 0x000010, "Member 'ANS_IgnoreInputAndBlendOut_C_Received_NotifyEnd_Section::Animation' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyEnd_Section, SectionElapsedTime) == 0x000018, "Member 'ANS_IgnoreInputAndBlendOut_C_Received_NotifyEnd_Section::SectionElapsedTime' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyEnd_Section, bAnimNotifyEnd) == 0x00001C, "Member 'ANS_IgnoreInputAndBlendOut_C_Received_NotifyEnd_Section::bAnimNotifyEnd' has a wrong offset!");

// Function ANS_IgnoreInputAndBlendOut.ANS_IgnoreInputAndBlendOut_C.Received_NotifyTick_Section
// 0x0020 (0x0020 - 0x0000)
struct ANS_IgnoreInputAndBlendOut_C_Received_NotifyTick_Section final
{
public:
	class FName                                   SectionName;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         FrameDeltaTime;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_TickBlendOut_ReturnValue;              // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyTick_Section) == 0x000008, "Wrong alignment on ANS_IgnoreInputAndBlendOut_C_Received_NotifyTick_Section");
static_assert(sizeof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyTick_Section) == 0x000020, "Wrong size on ANS_IgnoreInputAndBlendOut_C_Received_NotifyTick_Section");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyTick_Section, SectionName) == 0x000000, "Member 'ANS_IgnoreInputAndBlendOut_C_Received_NotifyTick_Section::SectionName' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyTick_Section, MeshComp) == 0x000008, "Member 'ANS_IgnoreInputAndBlendOut_C_Received_NotifyTick_Section::MeshComp' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyTick_Section, Animation) == 0x000010, "Member 'ANS_IgnoreInputAndBlendOut_C_Received_NotifyTick_Section::Animation' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyTick_Section, FrameDeltaTime) == 0x000018, "Member 'ANS_IgnoreInputAndBlendOut_C_Received_NotifyTick_Section::FrameDeltaTime' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyTick_Section, CallFunc_EqualEqual_NameName_ReturnValue) == 0x00001C, "Member 'ANS_IgnoreInputAndBlendOut_C_Received_NotifyTick_Section::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_Received_NotifyTick_Section, CallFunc_BP_TickBlendOut_ReturnValue) == 0x00001D, "Member 'ANS_IgnoreInputAndBlendOut_C_Received_NotifyTick_Section::CallFunc_BP_TickBlendOut_ReturnValue' has a wrong offset!");

// Function ANS_IgnoreInputAndBlendOut.ANS_IgnoreInputAndBlendOut_C.StopMontage
// 0x0028 (0x0028 - 0x0000)
struct ANS_IgnoreInputAndBlendOut_C_StopMontage final
{
public:
	class ACharacter*                             InCharacter;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          InAnimInstance;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        InBlendOutTime;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           InMontage;                                         // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CancelAbility_Ret;                        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast; // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANS_IgnoreInputAndBlendOut_C_StopMontage) == 0x000008, "Wrong alignment on ANS_IgnoreInputAndBlendOut_C_StopMontage");
static_assert(sizeof(ANS_IgnoreInputAndBlendOut_C_StopMontage) == 0x000028, "Wrong size on ANS_IgnoreInputAndBlendOut_C_StopMontage");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_StopMontage, InCharacter) == 0x000000, "Member 'ANS_IgnoreInputAndBlendOut_C_StopMontage::InCharacter' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_StopMontage, InAnimInstance) == 0x000008, "Member 'ANS_IgnoreInputAndBlendOut_C_StopMontage::InAnimInstance' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_StopMontage, InBlendOutTime) == 0x000010, "Member 'ANS_IgnoreInputAndBlendOut_C_StopMontage::InBlendOutTime' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_StopMontage, InMontage) == 0x000018, "Member 'ANS_IgnoreInputAndBlendOut_C_StopMontage::InMontage' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_StopMontage, CallFunc_CancelAbility_Ret) == 0x000020, "Member 'ANS_IgnoreInputAndBlendOut_C_StopMontage::CallFunc_CancelAbility_Ret' has a wrong offset!");
static_assert(offsetof(ANS_IgnoreInputAndBlendOut_C_StopMontage, CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast) == 0x000024, "Member 'ANS_IgnoreInputAndBlendOut_C_StopMontage::CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast' has a wrong offset!");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Nikki_Recovery_Click_V2

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GA_Nikki_Recovery_Click_V2.GA_Nikki_Recovery_Click_V2_C.ExecuteUbergraph_GA_Nikki_Recovery_Click_V2
// 0x01D0 (0x01D0 - 0x0000)
struct GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0010(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* ReturnActor)>    K2Node_CreateDelegate_OutputDelegate;              // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Temp_struct_Variable_1;                            // 0x0080(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_6;                   // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x00E8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_5;                   // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x0100(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0118(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x0130(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_5;            // 0x0148(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_6;            // 0x0160(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_ReturnActor;                    // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_X6AsyncTask_RequestSpawnBullet_V2_C* CallFunc_SpawnObject_ReturnValue;                 // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_InovkeAsyncTaskStart_EventName;           // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0190(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A2[0x2];                                      // 0x01A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x01A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AD[0x3];                                      // 0x01AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UX6AbilityTask_PlayMontageAndWait*      CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2) == 0x000010, "Wrong alignment on GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2");
static_assert(sizeof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2) == 0x0001D0, "Wrong size on GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, EntryPoint) == 0x000000, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, Temp_struct_Variable) == 0x000010, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, K2Node_CreateDelegate_OutputDelegate) == 0x000070, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, Temp_struct_Variable_1) == 0x000080, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, K2Node_CustomEvent_NotifyName_6) == 0x0000E0, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::K2Node_CustomEvent_NotifyName_6' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000E8, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, K2Node_CustomEvent_NotifyName_5) == 0x0000F8, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::K2Node_CustomEvent_NotifyName_5' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, K2Node_CreateDelegate_OutputDelegate_2) == 0x000100, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, K2Node_CustomEvent_NotifyName_4) == 0x000110, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, K2Node_CreateDelegate_OutputDelegate_3) == 0x000118, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, K2Node_CustomEvent_NotifyName_3) == 0x000128, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, K2Node_CreateDelegate_OutputDelegate_4) == 0x000130, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, K2Node_CustomEvent_NotifyName_2) == 0x000140, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, K2Node_CreateDelegate_OutputDelegate_5) == 0x000148, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, K2Node_CustomEvent_NotifyName_1) == 0x000158, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, K2Node_CreateDelegate_OutputDelegate_6) == 0x000160, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, Temp_name_Variable) == 0x000170, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, K2Node_CustomEvent_ReturnActor) == 0x000178, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::K2Node_CustomEvent_ReturnActor' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, CallFunc_SpawnObject_ReturnValue) == 0x000180, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, CallFunc_InovkeAsyncTaskStart_EventName) == 0x000188, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::CallFunc_InovkeAsyncTaskStart_EventName' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, K2Node_CreateDelegate_OutputDelegate_7) == 0x000190, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, K2Node_Event_bWasCancelled) == 0x0001A0, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, CallFunc_K2_CommitAbility_ReturnValue) == 0x0001A1, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, K2Node_CustomEvent_NotifyName) == 0x0001A4, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, K2Node_SwitchName_CmpSuccess) == 0x0001AC, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x0001B0, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x0001B8, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2, CallFunc_IsValid_ReturnValue) == 0x0001C0, "Member 'GA_Nikki_Recovery_Click_V2_C_ExecuteUbergraph_GA_Nikki_Recovery_Click_V2::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GA_Nikki_Recovery_Click_V2.GA_Nikki_Recovery_Click_V2_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Nikki_Recovery_Click_V2_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Nikki_Recovery_Click_V2_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Nikki_Recovery_Click_V2_C_K2_OnEndAbility");
static_assert(sizeof(GA_Nikki_Recovery_Click_V2_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Nikki_Recovery_Click_V2_C_K2_OnEndAbility");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Nikki_Recovery_Click_V2_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Nikki_Recovery_Click_V2.GA_Nikki_Recovery_Click_V2_C.OnBlendOut_42AD0B504F33814AD33F57B64A3C1C89
// 0x0008 (0x0008 - 0x0000)
struct GA_Nikki_Recovery_Click_V2_C_OnBlendOut_42AD0B504F33814AD33F57B64A3C1C89 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Nikki_Recovery_Click_V2_C_OnBlendOut_42AD0B504F33814AD33F57B64A3C1C89) == 0x000004, "Wrong alignment on GA_Nikki_Recovery_Click_V2_C_OnBlendOut_42AD0B504F33814AD33F57B64A3C1C89");
static_assert(sizeof(GA_Nikki_Recovery_Click_V2_C_OnBlendOut_42AD0B504F33814AD33F57B64A3C1C89) == 0x000008, "Wrong size on GA_Nikki_Recovery_Click_V2_C_OnBlendOut_42AD0B504F33814AD33F57B64A3C1C89");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_OnBlendOut_42AD0B504F33814AD33F57B64A3C1C89, NotifyName) == 0x000000, "Member 'GA_Nikki_Recovery_Click_V2_C_OnBlendOut_42AD0B504F33814AD33F57B64A3C1C89::NotifyName' has a wrong offset!");

// Function GA_Nikki_Recovery_Click_V2.GA_Nikki_Recovery_Click_V2_C.OnCancelled_42AD0B504F33814AD33F57B64A3C1C89
// 0x0008 (0x0008 - 0x0000)
struct GA_Nikki_Recovery_Click_V2_C_OnCancelled_42AD0B504F33814AD33F57B64A3C1C89 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Nikki_Recovery_Click_V2_C_OnCancelled_42AD0B504F33814AD33F57B64A3C1C89) == 0x000004, "Wrong alignment on GA_Nikki_Recovery_Click_V2_C_OnCancelled_42AD0B504F33814AD33F57B64A3C1C89");
static_assert(sizeof(GA_Nikki_Recovery_Click_V2_C_OnCancelled_42AD0B504F33814AD33F57B64A3C1C89) == 0x000008, "Wrong size on GA_Nikki_Recovery_Click_V2_C_OnCancelled_42AD0B504F33814AD33F57B64A3C1C89");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_OnCancelled_42AD0B504F33814AD33F57B64A3C1C89, NotifyName) == 0x000000, "Member 'GA_Nikki_Recovery_Click_V2_C_OnCancelled_42AD0B504F33814AD33F57B64A3C1C89::NotifyName' has a wrong offset!");

// Function GA_Nikki_Recovery_Click_V2.GA_Nikki_Recovery_Click_V2_C.OnCompleted_42AD0B504F33814AD33F57B64A3C1C89
// 0x0008 (0x0008 - 0x0000)
struct GA_Nikki_Recovery_Click_V2_C_OnCompleted_42AD0B504F33814AD33F57B64A3C1C89 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Nikki_Recovery_Click_V2_C_OnCompleted_42AD0B504F33814AD33F57B64A3C1C89) == 0x000004, "Wrong alignment on GA_Nikki_Recovery_Click_V2_C_OnCompleted_42AD0B504F33814AD33F57B64A3C1C89");
static_assert(sizeof(GA_Nikki_Recovery_Click_V2_C_OnCompleted_42AD0B504F33814AD33F57B64A3C1C89) == 0x000008, "Wrong size on GA_Nikki_Recovery_Click_V2_C_OnCompleted_42AD0B504F33814AD33F57B64A3C1C89");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_OnCompleted_42AD0B504F33814AD33F57B64A3C1C89, NotifyName) == 0x000000, "Member 'GA_Nikki_Recovery_Click_V2_C_OnCompleted_42AD0B504F33814AD33F57B64A3C1C89::NotifyName' has a wrong offset!");

// Function GA_Nikki_Recovery_Click_V2.GA_Nikki_Recovery_Click_V2_C.OnInterrupted_42AD0B504F33814AD33F57B64A3C1C89
// 0x0008 (0x0008 - 0x0000)
struct GA_Nikki_Recovery_Click_V2_C_OnInterrupted_42AD0B504F33814AD33F57B64A3C1C89 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Nikki_Recovery_Click_V2_C_OnInterrupted_42AD0B504F33814AD33F57B64A3C1C89) == 0x000004, "Wrong alignment on GA_Nikki_Recovery_Click_V2_C_OnInterrupted_42AD0B504F33814AD33F57B64A3C1C89");
static_assert(sizeof(GA_Nikki_Recovery_Click_V2_C_OnInterrupted_42AD0B504F33814AD33F57B64A3C1C89) == 0x000008, "Wrong size on GA_Nikki_Recovery_Click_V2_C_OnInterrupted_42AD0B504F33814AD33F57B64A3C1C89");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_OnInterrupted_42AD0B504F33814AD33F57B64A3C1C89, NotifyName) == 0x000000, "Member 'GA_Nikki_Recovery_Click_V2_C_OnInterrupted_42AD0B504F33814AD33F57B64A3C1C89::NotifyName' has a wrong offset!");

// Function GA_Nikki_Recovery_Click_V2.GA_Nikki_Recovery_Click_V2_C.OnNotifyBegin_42AD0B504F33814AD33F57B64A3C1C89
// 0x0008 (0x0008 - 0x0000)
struct GA_Nikki_Recovery_Click_V2_C_OnNotifyBegin_42AD0B504F33814AD33F57B64A3C1C89 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Nikki_Recovery_Click_V2_C_OnNotifyBegin_42AD0B504F33814AD33F57B64A3C1C89) == 0x000004, "Wrong alignment on GA_Nikki_Recovery_Click_V2_C_OnNotifyBegin_42AD0B504F33814AD33F57B64A3C1C89");
static_assert(sizeof(GA_Nikki_Recovery_Click_V2_C_OnNotifyBegin_42AD0B504F33814AD33F57B64A3C1C89) == 0x000008, "Wrong size on GA_Nikki_Recovery_Click_V2_C_OnNotifyBegin_42AD0B504F33814AD33F57B64A3C1C89");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_OnNotifyBegin_42AD0B504F33814AD33F57B64A3C1C89, NotifyName) == 0x000000, "Member 'GA_Nikki_Recovery_Click_V2_C_OnNotifyBegin_42AD0B504F33814AD33F57B64A3C1C89::NotifyName' has a wrong offset!");

// Function GA_Nikki_Recovery_Click_V2.GA_Nikki_Recovery_Click_V2_C.OnNotifyEnd_42AD0B504F33814AD33F57B64A3C1C89
// 0x0008 (0x0008 - 0x0000)
struct GA_Nikki_Recovery_Click_V2_C_OnNotifyEnd_42AD0B504F33814AD33F57B64A3C1C89 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Nikki_Recovery_Click_V2_C_OnNotifyEnd_42AD0B504F33814AD33F57B64A3C1C89) == 0x000004, "Wrong alignment on GA_Nikki_Recovery_Click_V2_C_OnNotifyEnd_42AD0B504F33814AD33F57B64A3C1C89");
static_assert(sizeof(GA_Nikki_Recovery_Click_V2_C_OnNotifyEnd_42AD0B504F33814AD33F57B64A3C1C89) == 0x000008, "Wrong size on GA_Nikki_Recovery_Click_V2_C_OnNotifyEnd_42AD0B504F33814AD33F57B64A3C1C89");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_OnNotifyEnd_42AD0B504F33814AD33F57B64A3C1C89, NotifyName) == 0x000000, "Member 'GA_Nikki_Recovery_Click_V2_C_OnNotifyEnd_42AD0B504F33814AD33F57B64A3C1C89::NotifyName' has a wrong offset!");

// Function GA_Nikki_Recovery_Click_V2.GA_Nikki_Recovery_Click_V2_C.OnSpawnFinished_4EDF40B54A050B43BBC0CCAE07E0E111
// 0x0008 (0x0008 - 0x0000)
struct GA_Nikki_Recovery_Click_V2_C_OnSpawnFinished_4EDF40B54A050B43BBC0CCAE07E0E111 final
{
public:
	class AActor*                                 ReturnActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Nikki_Recovery_Click_V2_C_OnSpawnFinished_4EDF40B54A050B43BBC0CCAE07E0E111) == 0x000008, "Wrong alignment on GA_Nikki_Recovery_Click_V2_C_OnSpawnFinished_4EDF40B54A050B43BBC0CCAE07E0E111");
static_assert(sizeof(GA_Nikki_Recovery_Click_V2_C_OnSpawnFinished_4EDF40B54A050B43BBC0CCAE07E0E111) == 0x000008, "Wrong size on GA_Nikki_Recovery_Click_V2_C_OnSpawnFinished_4EDF40B54A050B43BBC0CCAE07E0E111");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_OnSpawnFinished_4EDF40B54A050B43BBC0CCAE07E0E111, ReturnActor) == 0x000000, "Member 'GA_Nikki_Recovery_Click_V2_C_OnSpawnFinished_4EDF40B54A050B43BBC0CCAE07E0E111::ReturnActor' has a wrong offset!");

// Function GA_Nikki_Recovery_Click_V2.GA_Nikki_Recovery_Click_V2_C.PlayFullBodyMontage
// 0x0068 (0x0068 - 0x0000)
struct GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage final
{
public:
	class USkeletalMeshComponent*                 CallFunc_GetOwningComponentFromActorInfo_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Montage_Play_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWalking_ReturnValue;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage) == 0x000008, "Wrong alignment on GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage");
static_assert(sizeof(GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage) == 0x000068, "Wrong size on GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage, CallFunc_GetOwningComponentFromActorInfo_ReturnValue) == 0x000000, "Member 'GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage::CallFunc_GetOwningComponentFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage, CallFunc_GetAnimInstance_ReturnValue) == 0x000010, "Member 'GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage, CallFunc_Montage_Play_ReturnValue) == 0x000018, "Member 'GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage::CallFunc_Montage_Play_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000020, "Member 'GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage, K2Node_DynamicCast_AsCharacter) == 0x000028, "Member 'GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage, CallFunc_GetVelocity_ReturnValue) == 0x000038, "Member 'GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage, CallFunc_IsWalking_ReturnValue) == 0x000050, "Member 'GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage::CallFunc_IsWalking_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage, CallFunc_VSize_ReturnValue) == 0x000058, "Member 'GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000060, "Member 'GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage, CallFunc_BooleanAND_ReturnValue) == 0x000061, "Member 'GA_Nikki_Recovery_Click_V2_C_PlayFullBodyMontage::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function GA_Nikki_Recovery_Click_V2.GA_Nikki_Recovery_Click_V2_C.Shoot
// 0x0008 (0x0008 - 0x0000)
struct GA_Nikki_Recovery_Click_V2_C_Shoot final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Nikki_Recovery_Click_V2_C_Shoot) == 0x000004, "Wrong alignment on GA_Nikki_Recovery_Click_V2_C_Shoot");
static_assert(sizeof(GA_Nikki_Recovery_Click_V2_C_Shoot) == 0x000008, "Wrong size on GA_Nikki_Recovery_Click_V2_C_Shoot");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_Shoot, NotifyName) == 0x000000, "Member 'GA_Nikki_Recovery_Click_V2_C_Shoot::NotifyName' has a wrong offset!");

// Function GA_Nikki_Recovery_Click_V2.GA_Nikki_Recovery_Click_V2_C.StopFullBodyMontage
// 0x0020 (0x0020 - 0x0000)
struct GA_Nikki_Recovery_Click_V2_C_StopFullBodyMontage final
{
public:
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Nikki_Recovery_Click_V2_C_StopFullBodyMontage) == 0x000008, "Wrong alignment on GA_Nikki_Recovery_Click_V2_C_StopFullBodyMontage");
static_assert(sizeof(GA_Nikki_Recovery_Click_V2_C_StopFullBodyMontage) == 0x000020, "Wrong size on GA_Nikki_Recovery_Click_V2_C_StopFullBodyMontage");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_StopFullBodyMontage, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000000, "Member 'GA_Nikki_Recovery_Click_V2_C_StopFullBodyMontage::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_StopFullBodyMontage, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'GA_Nikki_Recovery_Click_V2_C_StopFullBodyMontage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_StopFullBodyMontage, K2Node_DynamicCast_AsCharacter) == 0x000010, "Member 'GA_Nikki_Recovery_Click_V2_C_StopFullBodyMontage::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_StopFullBodyMontage, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GA_Nikki_Recovery_Click_V2_C_StopFullBodyMontage::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function GA_Nikki_Recovery_Click_V2.GA_Nikki_Recovery_Click_V2_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct GA_Nikki_Recovery_Click_V2_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(GA_Nikki_Recovery_Click_V2_C_GetModuleName) == 0x000008, "Wrong alignment on GA_Nikki_Recovery_Click_V2_C_GetModuleName");
static_assert(sizeof(GA_Nikki_Recovery_Click_V2_C_GetModuleName) == 0x000010, "Wrong size on GA_Nikki_Recovery_Click_V2_C_GetModuleName");
static_assert(offsetof(GA_Nikki_Recovery_Click_V2_C_GetModuleName, ReturnValue) == 0x000000, "Member 'GA_Nikki_Recovery_Click_V2_C_GetModuleName::ReturnValue' has a wrong offset!");

}


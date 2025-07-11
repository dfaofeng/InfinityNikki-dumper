﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPCAttractorDynamicGameplayContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_NPCAttractorDynamicGameplayContainer.BP_NPCAttractorDynamicGameplayContainer_C.BindNPCOnEndPlay
// 0x0008 (0x0008 - 0x0000)
struct BP_NPCAttractorDynamicGameplayContainer_C_BindNPCOnEndPlay final
{
public:
	class AActor*                                 InNPCActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAttractorDynamicGameplayContainer_C_BindNPCOnEndPlay) == 0x000008, "Wrong alignment on BP_NPCAttractorDynamicGameplayContainer_C_BindNPCOnEndPlay");
static_assert(sizeof(BP_NPCAttractorDynamicGameplayContainer_C_BindNPCOnEndPlay) == 0x000008, "Wrong size on BP_NPCAttractorDynamicGameplayContainer_C_BindNPCOnEndPlay");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_BindNPCOnEndPlay, InNPCActor) == 0x000000, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_BindNPCOnEndPlay::InNPCActor' has a wrong offset!");

// Function BP_NPCAttractorDynamicGameplayContainer.BP_NPCAttractorDynamicGameplayContainer_C.ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer
// 0x0040 (0x0040 - 0x0000)
struct BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_InNPCActor;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_InNPCActpr;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Actor, EEndPlayReason EndPlayReason)> K2Node_CreateDelegate_OutputDelegate; // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_OnUpdateGameplay_DeltaSeconds_ImplicitCast; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer) == 0x000008, "Wrong alignment on BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer");
static_assert(sizeof(BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer) == 0x000040, "Wrong size on BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer, EntryPoint) == 0x000000, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer, K2Node_Event_EndPlayReason) == 0x000008, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer, K2Node_CustomEvent_InNPCActor) == 0x000010, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer::K2Node_CustomEvent_InNPCActor' has a wrong offset!");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer, K2Node_CustomEvent_InNPCActpr) == 0x000018, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer::K2Node_CustomEvent_InNPCActpr' has a wrong offset!");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer, CallFunc_OnUpdateGameplay_DeltaSeconds_ImplicitCast) == 0x000038, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_ExecuteUbergraph_BP_NPCAttractorDynamicGameplayContainer::CallFunc_OnUpdateGameplay_DeltaSeconds_ImplicitCast' has a wrong offset!");

// Function BP_NPCAttractorDynamicGameplayContainer.BP_NPCAttractorDynamicGameplayContainer_C.OnStartGameplay
// 0x0010 (0x0010 - 0x0000)
struct BP_NPCAttractorDynamicGameplayContainer_C_OnStartGameplay final
{
public:
	class UBP_NPCAttractorDynamicGameplayData_Template_C* InGameplayData;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 InNPCActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAttractorDynamicGameplayContainer_C_OnStartGameplay) == 0x000008, "Wrong alignment on BP_NPCAttractorDynamicGameplayContainer_C_OnStartGameplay");
static_assert(sizeof(BP_NPCAttractorDynamicGameplayContainer_C_OnStartGameplay) == 0x000010, "Wrong size on BP_NPCAttractorDynamicGameplayContainer_C_OnStartGameplay");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_OnStartGameplay, InGameplayData) == 0x000000, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_OnStartGameplay::InGameplayData' has a wrong offset!");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_OnStartGameplay, InNPCActor) == 0x000008, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_OnStartGameplay::InNPCActor' has a wrong offset!");

// Function BP_NPCAttractorDynamicGameplayContainer.BP_NPCAttractorDynamicGameplayContainer_C.OnUpdateGameplay
// 0x0008 (0x0008 - 0x0000)
struct BP_NPCAttractorDynamicGameplayContainer_C_OnUpdateGameplay final
{
public:
	double                                        DeltaSeconds;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAttractorDynamicGameplayContainer_C_OnUpdateGameplay) == 0x000008, "Wrong alignment on BP_NPCAttractorDynamicGameplayContainer_C_OnUpdateGameplay");
static_assert(sizeof(BP_NPCAttractorDynamicGameplayContainer_C_OnUpdateGameplay) == 0x000008, "Wrong size on BP_NPCAttractorDynamicGameplayContainer_C_OnUpdateGameplay");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_OnUpdateGameplay, DeltaSeconds) == 0x000000, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_OnUpdateGameplay::DeltaSeconds' has a wrong offset!");

// Function BP_NPCAttractorDynamicGameplayContainer.BP_NPCAttractorDynamicGameplayContainer_C.Pause
// 0x0001 (0x0001 - 0x0000)
struct BP_NPCAttractorDynamicGameplayContainer_C_Pause final
{
public:
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAttractorDynamicGameplayContainer_C_Pause) == 0x000001, "Wrong alignment on BP_NPCAttractorDynamicGameplayContainer_C_Pause");
static_assert(sizeof(BP_NPCAttractorDynamicGameplayContainer_C_Pause) == 0x000001, "Wrong size on BP_NPCAttractorDynamicGameplayContainer_C_Pause");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_Pause, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000000, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_Pause::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_NPCAttractorDynamicGameplayContainer.BP_NPCAttractorDynamicGameplayContainer_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_NPCAttractorDynamicGameplayContainer_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAttractorDynamicGameplayContainer_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_NPCAttractorDynamicGameplayContainer_C_ReceiveEndPlay");
static_assert(sizeof(BP_NPCAttractorDynamicGameplayContainer_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_NPCAttractorDynamicGameplayContainer_C_ReceiveEndPlay");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_NPCAttractorDynamicGameplayContainer.BP_NPCAttractorDynamicGameplayContainer_C.ReceiveNPCActorEndPlay
// 0x0010 (0x0010 - 0x0000)
struct BP_NPCAttractorDynamicGameplayContainer_C_ReceiveNPCActorEndPlay final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                EndPlayReason;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAttractorDynamicGameplayContainer_C_ReceiveNPCActorEndPlay) == 0x000008, "Wrong alignment on BP_NPCAttractorDynamicGameplayContainer_C_ReceiveNPCActorEndPlay");
static_assert(sizeof(BP_NPCAttractorDynamicGameplayContainer_C_ReceiveNPCActorEndPlay) == 0x000010, "Wrong size on BP_NPCAttractorDynamicGameplayContainer_C_ReceiveNPCActorEndPlay");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_ReceiveNPCActorEndPlay, Actor) == 0x000000, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_ReceiveNPCActorEndPlay::Actor' has a wrong offset!");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_ReceiveNPCActorEndPlay, EndPlayReason) == 0x000008, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_ReceiveNPCActorEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_NPCAttractorDynamicGameplayContainer.BP_NPCAttractorDynamicGameplayContainer_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_NPCAttractorDynamicGameplayContainer_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAttractorDynamicGameplayContainer_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_NPCAttractorDynamicGameplayContainer_C_ReceiveTick");
static_assert(sizeof(BP_NPCAttractorDynamicGameplayContainer_C_ReceiveTick) == 0x000004, "Wrong size on BP_NPCAttractorDynamicGameplayContainer_C_ReceiveTick");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_NPCAttractorDynamicGameplayContainer.BP_NPCAttractorDynamicGameplayContainer_C.Start
// 0x0058 (0x0058 - 0x0000)
struct BP_NPCAttractorDynamicGameplayContainer_C_Start final
{
public:
	class UBP_NPCAttractorDynamicGameplayData_Template_C* InDataAsset;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 InNPCActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13[0x5];                                       // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   CallFunc_GetGameplayContainerClassRef_RetClassRef; // 0x0018(0x0028)(HasGetValueTypeHash)
	TSubclassOf<class UObject>                    CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsBP_NPCAttractor_Dynamic_Gameplay_Container; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ObjectIsA_ReturnValue;                    // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAttractorDynamicGameplayContainer_C_Start) == 0x000008, "Wrong alignment on BP_NPCAttractorDynamicGameplayContainer_C_Start");
static_assert(sizeof(BP_NPCAttractorDynamicGameplayContainer_C_Start) == 0x000058, "Wrong size on BP_NPCAttractorDynamicGameplayContainer_C_Start");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_Start, InDataAsset) == 0x000000, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_Start::InDataAsset' has a wrong offset!");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_Start, InNPCActor) == 0x000008, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_Start::InNPCActor' has a wrong offset!");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_Start, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_Start::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_Start, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_Start::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_Start, CallFunc_BooleanAND_ReturnValue) == 0x000012, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_Start::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_Start, CallFunc_GetGameplayContainerClassRef_RetClassRef) == 0x000018, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_Start::CallFunc_GetGameplayContainerClassRef_RetClassRef' has a wrong offset!");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_Start, CallFunc_Conv_SoftClassReferenceToClass_ReturnValue) == 0x000040, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_Start::CallFunc_Conv_SoftClassReferenceToClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_Start, K2Node_ClassDynamicCast_AsBP_NPCAttractor_Dynamic_Gameplay_Container) == 0x000048, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_Start::K2Node_ClassDynamicCast_AsBP_NPCAttractor_Dynamic_Gameplay_Container' has a wrong offset!");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_Start, K2Node_ClassDynamicCast_bSuccess) == 0x000050, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_Start::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_Start, CallFunc_IsValidClass_ReturnValue) == 0x000051, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_Start::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_Start, CallFunc_ObjectIsA_ReturnValue) == 0x000052, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_Start::CallFunc_ObjectIsA_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_Start, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000053, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_Start::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_NPCAttractorDynamicGameplayContainer.BP_NPCAttractorDynamicGameplayContainer_C.Stop
// 0x0001 (0x0001 - 0x0000)
struct BP_NPCAttractorDynamicGameplayContainer_C_Stop final
{
public:
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAttractorDynamicGameplayContainer_C_Stop) == 0x000001, "Wrong alignment on BP_NPCAttractorDynamicGameplayContainer_C_Stop");
static_assert(sizeof(BP_NPCAttractorDynamicGameplayContainer_C_Stop) == 0x000001, "Wrong size on BP_NPCAttractorDynamicGameplayContainer_C_Stop");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_Stop, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000000, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_Stop::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_NPCAttractorDynamicGameplayContainer.BP_NPCAttractorDynamicGameplayContainer_C.UnbindNPCOnEndPlay
// 0x0008 (0x0008 - 0x0000)
struct BP_NPCAttractorDynamicGameplayContainer_C_UnbindNPCOnEndPlay final
{
public:
	class AActor*                                 InNPCActpr;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAttractorDynamicGameplayContainer_C_UnbindNPCOnEndPlay) == 0x000008, "Wrong alignment on BP_NPCAttractorDynamicGameplayContainer_C_UnbindNPCOnEndPlay");
static_assert(sizeof(BP_NPCAttractorDynamicGameplayContainer_C_UnbindNPCOnEndPlay) == 0x000008, "Wrong size on BP_NPCAttractorDynamicGameplayContainer_C_UnbindNPCOnEndPlay");
static_assert(offsetof(BP_NPCAttractorDynamicGameplayContainer_C_UnbindNPCOnEndPlay, InNPCActpr) == 0x000000, "Member 'BP_NPCAttractorDynamicGameplayContainer_C_UnbindNPCOnEndPlay::InNPCActpr' has a wrong offset!");

}


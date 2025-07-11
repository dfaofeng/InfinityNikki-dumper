﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DaMiaoRPCHelperComponent

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_DaMiaoRPCHelperComponent.BP_DaMiaoRPCHelperComponent_C.BP_OnMulticast_EnterPole
// 0x0010 (0x0010 - 0x0000)
struct BP_DaMiaoRPCHelperComponent_C_BP_OnMulticast_EnterPole final
{
public:
	class FString                                 PoleActorPath;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DaMiaoRPCHelperComponent_C_BP_OnMulticast_EnterPole) == 0x000008, "Wrong alignment on BP_DaMiaoRPCHelperComponent_C_BP_OnMulticast_EnterPole");
static_assert(sizeof(BP_DaMiaoRPCHelperComponent_C_BP_OnMulticast_EnterPole) == 0x000010, "Wrong size on BP_DaMiaoRPCHelperComponent_C_BP_OnMulticast_EnterPole");
static_assert(offsetof(BP_DaMiaoRPCHelperComponent_C_BP_OnMulticast_EnterPole, PoleActorPath) == 0x000000, "Member 'BP_DaMiaoRPCHelperComponent_C_BP_OnMulticast_EnterPole::PoleActorPath' has a wrong offset!");

// Function BP_DaMiaoRPCHelperComponent.BP_DaMiaoRPCHelperComponent_C.BP_OnMulticast_ExitPole
// 0x0002 (0x0002 - 0x0000)
struct BP_DaMiaoRPCHelperComponent_C_BP_OnMulticast_ExitPole final
{
public:
	uint8                                         EnterExitPoleType;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         DamagePerformanceType;                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DaMiaoRPCHelperComponent_C_BP_OnMulticast_ExitPole) == 0x000001, "Wrong alignment on BP_DaMiaoRPCHelperComponent_C_BP_OnMulticast_ExitPole");
static_assert(sizeof(BP_DaMiaoRPCHelperComponent_C_BP_OnMulticast_ExitPole) == 0x000002, "Wrong size on BP_DaMiaoRPCHelperComponent_C_BP_OnMulticast_ExitPole");
static_assert(offsetof(BP_DaMiaoRPCHelperComponent_C_BP_OnMulticast_ExitPole, EnterExitPoleType) == 0x000000, "Member 'BP_DaMiaoRPCHelperComponent_C_BP_OnMulticast_ExitPole::EnterExitPoleType' has a wrong offset!");
static_assert(offsetof(BP_DaMiaoRPCHelperComponent_C_BP_OnMulticast_ExitPole, DamagePerformanceType) == 0x000001, "Member 'BP_DaMiaoRPCHelperComponent_C_BP_OnMulticast_ExitPole::DamagePerformanceType' has a wrong offset!");

// Function BP_DaMiaoRPCHelperComponent.BP_DaMiaoRPCHelperComponent_C.ExecuteUbergraph_BP_DaMiaoRPCHelperComponent
// 0x0018 (0x0018 - 0x0000)
struct BP_DaMiaoRPCHelperComponent_C_ExecuteUbergraph_BP_DaMiaoRPCHelperComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         K2Node_CustomEvent_EnterExitPoleType;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         K2Node_CustomEvent_DamagePerformanceType;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_PoleActorPath;                  // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DaMiaoRPCHelperComponent_C_ExecuteUbergraph_BP_DaMiaoRPCHelperComponent) == 0x000008, "Wrong alignment on BP_DaMiaoRPCHelperComponent_C_ExecuteUbergraph_BP_DaMiaoRPCHelperComponent");
static_assert(sizeof(BP_DaMiaoRPCHelperComponent_C_ExecuteUbergraph_BP_DaMiaoRPCHelperComponent) == 0x000018, "Wrong size on BP_DaMiaoRPCHelperComponent_C_ExecuteUbergraph_BP_DaMiaoRPCHelperComponent");
static_assert(offsetof(BP_DaMiaoRPCHelperComponent_C_ExecuteUbergraph_BP_DaMiaoRPCHelperComponent, EntryPoint) == 0x000000, "Member 'BP_DaMiaoRPCHelperComponent_C_ExecuteUbergraph_BP_DaMiaoRPCHelperComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DaMiaoRPCHelperComponent_C_ExecuteUbergraph_BP_DaMiaoRPCHelperComponent, K2Node_CustomEvent_EnterExitPoleType) == 0x000004, "Member 'BP_DaMiaoRPCHelperComponent_C_ExecuteUbergraph_BP_DaMiaoRPCHelperComponent::K2Node_CustomEvent_EnterExitPoleType' has a wrong offset!");
static_assert(offsetof(BP_DaMiaoRPCHelperComponent_C_ExecuteUbergraph_BP_DaMiaoRPCHelperComponent, K2Node_CustomEvent_DamagePerformanceType) == 0x000005, "Member 'BP_DaMiaoRPCHelperComponent_C_ExecuteUbergraph_BP_DaMiaoRPCHelperComponent::K2Node_CustomEvent_DamagePerformanceType' has a wrong offset!");
static_assert(offsetof(BP_DaMiaoRPCHelperComponent_C_ExecuteUbergraph_BP_DaMiaoRPCHelperComponent, K2Node_CustomEvent_PoleActorPath) == 0x000008, "Member 'BP_DaMiaoRPCHelperComponent_C_ExecuteUbergraph_BP_DaMiaoRPCHelperComponent::K2Node_CustomEvent_PoleActorPath' has a wrong offset!");

// Function BP_DaMiaoRPCHelperComponent.BP_DaMiaoRPCHelperComponent_C.Multicast_EnterPole
// 0x0010 (0x0010 - 0x0000)
struct BP_DaMiaoRPCHelperComponent_C_Multicast_EnterPole final
{
public:
	class FString                                 PoleActorPath;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DaMiaoRPCHelperComponent_C_Multicast_EnterPole) == 0x000008, "Wrong alignment on BP_DaMiaoRPCHelperComponent_C_Multicast_EnterPole");
static_assert(sizeof(BP_DaMiaoRPCHelperComponent_C_Multicast_EnterPole) == 0x000010, "Wrong size on BP_DaMiaoRPCHelperComponent_C_Multicast_EnterPole");
static_assert(offsetof(BP_DaMiaoRPCHelperComponent_C_Multicast_EnterPole, PoleActorPath) == 0x000000, "Member 'BP_DaMiaoRPCHelperComponent_C_Multicast_EnterPole::PoleActorPath' has a wrong offset!");

// Function BP_DaMiaoRPCHelperComponent.BP_DaMiaoRPCHelperComponent_C.Multicast_ExitPole
// 0x0002 (0x0002 - 0x0000)
struct BP_DaMiaoRPCHelperComponent_C_Multicast_ExitPole final
{
public:
	uint8                                         EnterExitPoleType;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         DamagePerformanceType;                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DaMiaoRPCHelperComponent_C_Multicast_ExitPole) == 0x000001, "Wrong alignment on BP_DaMiaoRPCHelperComponent_C_Multicast_ExitPole");
static_assert(sizeof(BP_DaMiaoRPCHelperComponent_C_Multicast_ExitPole) == 0x000002, "Wrong size on BP_DaMiaoRPCHelperComponent_C_Multicast_ExitPole");
static_assert(offsetof(BP_DaMiaoRPCHelperComponent_C_Multicast_ExitPole, EnterExitPoleType) == 0x000000, "Member 'BP_DaMiaoRPCHelperComponent_C_Multicast_ExitPole::EnterExitPoleType' has a wrong offset!");
static_assert(offsetof(BP_DaMiaoRPCHelperComponent_C_Multicast_ExitPole, DamagePerformanceType) == 0x000001, "Member 'BP_DaMiaoRPCHelperComponent_C_Multicast_ExitPole::DamagePerformanceType' has a wrong offset!");

// Function BP_DaMiaoRPCHelperComponent.BP_DaMiaoRPCHelperComponent_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct BP_DaMiaoRPCHelperComponent_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_DaMiaoRPCHelperComponent_C_GetModuleName) == 0x000008, "Wrong alignment on BP_DaMiaoRPCHelperComponent_C_GetModuleName");
static_assert(sizeof(BP_DaMiaoRPCHelperComponent_C_GetModuleName) == 0x000010, "Wrong size on BP_DaMiaoRPCHelperComponent_C_GetModuleName");
static_assert(offsetof(BP_DaMiaoRPCHelperComponent_C_GetModuleName, ReturnValue) == 0x000000, "Member 'BP_DaMiaoRPCHelperComponent_C_GetModuleName::ReturnValue' has a wrong offset!");

}


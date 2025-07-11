﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DaMiaoVisitorCharacter

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_DaMiaoVisitorCharacter.BP_DaMiaoVisitorCharacter_C.BPI_SetPlayerToControlActor
// 0x0010 (0x0010 - 0x0000)
struct BP_DaMiaoVisitorCharacter_C_BPI_SetPlayerToControlActor final
{
public:
	class AActor*                                 ActorToControl;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Controlled;                                        // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DaMiaoVisitorCharacter_C_BPI_SetPlayerToControlActor) == 0x000008, "Wrong alignment on BP_DaMiaoVisitorCharacter_C_BPI_SetPlayerToControlActor");
static_assert(sizeof(BP_DaMiaoVisitorCharacter_C_BPI_SetPlayerToControlActor) == 0x000010, "Wrong size on BP_DaMiaoVisitorCharacter_C_BPI_SetPlayerToControlActor");
static_assert(offsetof(BP_DaMiaoVisitorCharacter_C_BPI_SetPlayerToControlActor, ActorToControl) == 0x000000, "Member 'BP_DaMiaoVisitorCharacter_C_BPI_SetPlayerToControlActor::ActorToControl' has a wrong offset!");
static_assert(offsetof(BP_DaMiaoVisitorCharacter_C_BPI_SetPlayerToControlActor, Controlled) == 0x000008, "Member 'BP_DaMiaoVisitorCharacter_C_BPI_SetPlayerToControlActor::Controlled' has a wrong offset!");

// Function BP_DaMiaoVisitorCharacter.BP_DaMiaoVisitorCharacter_C.ExecuteUbergraph_BP_DaMiaoVisitorCharacter
// 0x0004 (0x0004 - 0x0000)
struct BP_DaMiaoVisitorCharacter_C_ExecuteUbergraph_BP_DaMiaoVisitorCharacter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DaMiaoVisitorCharacter_C_ExecuteUbergraph_BP_DaMiaoVisitorCharacter) == 0x000004, "Wrong alignment on BP_DaMiaoVisitorCharacter_C_ExecuteUbergraph_BP_DaMiaoVisitorCharacter");
static_assert(sizeof(BP_DaMiaoVisitorCharacter_C_ExecuteUbergraph_BP_DaMiaoVisitorCharacter) == 0x000004, "Wrong size on BP_DaMiaoVisitorCharacter_C_ExecuteUbergraph_BP_DaMiaoVisitorCharacter");
static_assert(offsetof(BP_DaMiaoVisitorCharacter_C_ExecuteUbergraph_BP_DaMiaoVisitorCharacter, EntryPoint) == 0x000000, "Member 'BP_DaMiaoVisitorCharacter_C_ExecuteUbergraph_BP_DaMiaoVisitorCharacter::EntryPoint' has a wrong offset!");

// Function BP_DaMiaoVisitorCharacter.BP_DaMiaoVisitorCharacter_C.GetAIObjectClass
// 0x0010 (0x0010 - 0x0000)
struct BP_DaMiaoVisitorCharacter_C_GetAIObjectClass final
{
public:
	class FString                                 LuaClassPath;                                      // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DaMiaoVisitorCharacter_C_GetAIObjectClass) == 0x000008, "Wrong alignment on BP_DaMiaoVisitorCharacter_C_GetAIObjectClass");
static_assert(sizeof(BP_DaMiaoVisitorCharacter_C_GetAIObjectClass) == 0x000010, "Wrong size on BP_DaMiaoVisitorCharacter_C_GetAIObjectClass");
static_assert(offsetof(BP_DaMiaoVisitorCharacter_C_GetAIObjectClass, LuaClassPath) == 0x000000, "Member 'BP_DaMiaoVisitorCharacter_C_GetAIObjectClass::LuaClassPath' has a wrong offset!");

// Function BP_DaMiaoVisitorCharacter.BP_DaMiaoVisitorCharacter_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct BP_DaMiaoVisitorCharacter_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_DaMiaoVisitorCharacter_C_GetModuleName) == 0x000008, "Wrong alignment on BP_DaMiaoVisitorCharacter_C_GetModuleName");
static_assert(sizeof(BP_DaMiaoVisitorCharacter_C_GetModuleName) == 0x000010, "Wrong size on BP_DaMiaoVisitorCharacter_C_GetModuleName");
static_assert(offsetof(BP_DaMiaoVisitorCharacter_C_GetModuleName, ReturnValue) == 0x000000, "Member 'BP_DaMiaoVisitorCharacter_C_GetModuleName::ReturnValue' has a wrong offset!");

}


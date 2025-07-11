﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StarSeaCameraModifier

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_StarSeaCameraModifier.BP_StarSeaCameraModifier_C.BlueprintModifyPostProcess
// 0x10E0 (0x10E0 - 0x0000)
struct BP_StarSeaCameraModifier_C_BlueprintModifyPostProcess final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PostProcessBlendWeight;                            // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   PostProcessSettings;                               // 0x0010(0x0850)(Parm, OutParm)
	struct FWeightedBlendable                     K2Node_MakeStruct_WeightedBlendable;               // 0x0860(0x0010)(NoDestructor)
	struct FWeightedBlendables                    K2Node_MakeStruct_WeightedBlendables;              // 0x0870(0x0010)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0880(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_884[0xC];                                      // 0x0884(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   K2Node_MakeStruct_PostProcessSettings;             // 0x0890(0x0850)()
};
static_assert(alignof(BP_StarSeaCameraModifier_C_BlueprintModifyPostProcess) == 0x000010, "Wrong alignment on BP_StarSeaCameraModifier_C_BlueprintModifyPostProcess");
static_assert(sizeof(BP_StarSeaCameraModifier_C_BlueprintModifyPostProcess) == 0x0010E0, "Wrong size on BP_StarSeaCameraModifier_C_BlueprintModifyPostProcess");
static_assert(offsetof(BP_StarSeaCameraModifier_C_BlueprintModifyPostProcess, DeltaTime) == 0x000000, "Member 'BP_StarSeaCameraModifier_C_BlueprintModifyPostProcess::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_StarSeaCameraModifier_C_BlueprintModifyPostProcess, PostProcessBlendWeight) == 0x000004, "Member 'BP_StarSeaCameraModifier_C_BlueprintModifyPostProcess::PostProcessBlendWeight' has a wrong offset!");
static_assert(offsetof(BP_StarSeaCameraModifier_C_BlueprintModifyPostProcess, PostProcessSettings) == 0x000010, "Member 'BP_StarSeaCameraModifier_C_BlueprintModifyPostProcess::PostProcessSettings' has a wrong offset!");
static_assert(offsetof(BP_StarSeaCameraModifier_C_BlueprintModifyPostProcess, K2Node_MakeStruct_WeightedBlendable) == 0x000860, "Member 'BP_StarSeaCameraModifier_C_BlueprintModifyPostProcess::K2Node_MakeStruct_WeightedBlendable' has a wrong offset!");
static_assert(offsetof(BP_StarSeaCameraModifier_C_BlueprintModifyPostProcess, K2Node_MakeStruct_WeightedBlendables) == 0x000870, "Member 'BP_StarSeaCameraModifier_C_BlueprintModifyPostProcess::K2Node_MakeStruct_WeightedBlendables' has a wrong offset!");
static_assert(offsetof(BP_StarSeaCameraModifier_C_BlueprintModifyPostProcess, CallFunc_Array_Add_ReturnValue) == 0x000880, "Member 'BP_StarSeaCameraModifier_C_BlueprintModifyPostProcess::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_StarSeaCameraModifier_C_BlueprintModifyPostProcess, K2Node_MakeStruct_PostProcessSettings) == 0x000890, "Member 'BP_StarSeaCameraModifier_C_BlueprintModifyPostProcess::K2Node_MakeStruct_PostProcessSettings' has a wrong offset!");

// Function BP_StarSeaCameraModifier.BP_StarSeaCameraModifier_C.BP_SetDynamicMat
// 0x0008 (0x0008 - 0x0000)
struct BP_StarSeaCameraModifier_C_BP_SetDynamicMat final
{
public:
	class UMaterialInstanceDynamic*               Mat;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_StarSeaCameraModifier_C_BP_SetDynamicMat) == 0x000008, "Wrong alignment on BP_StarSeaCameraModifier_C_BP_SetDynamicMat");
static_assert(sizeof(BP_StarSeaCameraModifier_C_BP_SetDynamicMat) == 0x000008, "Wrong size on BP_StarSeaCameraModifier_C_BP_SetDynamicMat");
static_assert(offsetof(BP_StarSeaCameraModifier_C_BP_SetDynamicMat, Mat) == 0x000000, "Member 'BP_StarSeaCameraModifier_C_BP_SetDynamicMat::Mat' has a wrong offset!");

}


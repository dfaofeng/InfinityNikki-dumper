﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FDialogueTypeConfigStruct

#include "Basic.hpp"

#include "Enum_DialogueType_structs.hpp"
#include "EDialogueCameraQuitMode_structs.hpp"
#include "EDialogueMouseCursorShowType_structs.hpp"


namespace SDK
{

// UserDefinedStruct FDialogueTypeConfigStruct.FDialogueTypeConfigStruct
// 0x000B (0x000B - 0x0000)
struct FFDialogueTypeConfigStruct final
{
public:
	Enum_DialogueType                             DialogueType_27_7376D06740AD1AD7032E04BB3F67D7E6;  // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnterCinematiceMode_52_4719FC124CEDD362A5407387688A8501; // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSendDialogueStateToNPC_6_0033DC2D463A52837D4B9081AB96FC1E; // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAutoPlay_24_F01BD36A4163849421A68093281FB0B2;     // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowAutoPlayButton_42_7598A1D045CC800104931BA57E54E002; // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseX6Camera_29_4EB7B31942AC1FAAD12DCBA741290D73;  // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogueCameraQuitMode                       CameraQuitMode_32_78868BF24DFE763235B3C08795BF6ABF; // 0x0006(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanRotateCameraInDlg_34_A7A2F3834075C5356F6D25A55AE0BE89; // 0x0007(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogueMouseCursorShowType                  MouseCursorShowType_47_1FE9F0764177FDA2022E38B4F3F905F4; // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bGlobalDissolveEnable_49_58C7348F449DE6B8366D7DA3332FF66C; // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanSkip_51_0DDDFA36475E59EA8DF52C9611DA610C;      // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFDialogueTypeConfigStruct) == 0x000001, "Wrong alignment on FFDialogueTypeConfigStruct");
static_assert(sizeof(FFDialogueTypeConfigStruct) == 0x00000B, "Wrong size on FFDialogueTypeConfigStruct");
static_assert(offsetof(FFDialogueTypeConfigStruct, DialogueType_27_7376D06740AD1AD7032E04BB3F67D7E6) == 0x000000, "Member 'FFDialogueTypeConfigStruct::DialogueType_27_7376D06740AD1AD7032E04BB3F67D7E6' has a wrong offset!");
static_assert(offsetof(FFDialogueTypeConfigStruct, bEnterCinematiceMode_52_4719FC124CEDD362A5407387688A8501) == 0x000001, "Member 'FFDialogueTypeConfigStruct::bEnterCinematiceMode_52_4719FC124CEDD362A5407387688A8501' has a wrong offset!");
static_assert(offsetof(FFDialogueTypeConfigStruct, bSendDialogueStateToNPC_6_0033DC2D463A52837D4B9081AB96FC1E) == 0x000002, "Member 'FFDialogueTypeConfigStruct::bSendDialogueStateToNPC_6_0033DC2D463A52837D4B9081AB96FC1E' has a wrong offset!");
static_assert(offsetof(FFDialogueTypeConfigStruct, bAutoPlay_24_F01BD36A4163849421A68093281FB0B2) == 0x000003, "Member 'FFDialogueTypeConfigStruct::bAutoPlay_24_F01BD36A4163849421A68093281FB0B2' has a wrong offset!");
static_assert(offsetof(FFDialogueTypeConfigStruct, bShowAutoPlayButton_42_7598A1D045CC800104931BA57E54E002) == 0x000004, "Member 'FFDialogueTypeConfigStruct::bShowAutoPlayButton_42_7598A1D045CC800104931BA57E54E002' has a wrong offset!");
static_assert(offsetof(FFDialogueTypeConfigStruct, bUseX6Camera_29_4EB7B31942AC1FAAD12DCBA741290D73) == 0x000005, "Member 'FFDialogueTypeConfigStruct::bUseX6Camera_29_4EB7B31942AC1FAAD12DCBA741290D73' has a wrong offset!");
static_assert(offsetof(FFDialogueTypeConfigStruct, CameraQuitMode_32_78868BF24DFE763235B3C08795BF6ABF) == 0x000006, "Member 'FFDialogueTypeConfigStruct::CameraQuitMode_32_78868BF24DFE763235B3C08795BF6ABF' has a wrong offset!");
static_assert(offsetof(FFDialogueTypeConfigStruct, bCanRotateCameraInDlg_34_A7A2F3834075C5356F6D25A55AE0BE89) == 0x000007, "Member 'FFDialogueTypeConfigStruct::bCanRotateCameraInDlg_34_A7A2F3834075C5356F6D25A55AE0BE89' has a wrong offset!");
static_assert(offsetof(FFDialogueTypeConfigStruct, MouseCursorShowType_47_1FE9F0764177FDA2022E38B4F3F905F4) == 0x000008, "Member 'FFDialogueTypeConfigStruct::MouseCursorShowType_47_1FE9F0764177FDA2022E38B4F3F905F4' has a wrong offset!");
static_assert(offsetof(FFDialogueTypeConfigStruct, bGlobalDissolveEnable_49_58C7348F449DE6B8366D7DA3332FF66C) == 0x000009, "Member 'FFDialogueTypeConfigStruct::bGlobalDissolveEnable_49_58C7348F449DE6B8366D7DA3332FF66C' has a wrong offset!");
static_assert(offsetof(FFDialogueTypeConfigStruct, bCanSkip_51_0DDDFA36475E59EA8DF52C9611DA610C) == 0x00000A, "Member 'FFDialogueTypeConfigStruct::bCanSkip_51_0DDDFA36475E59EA8DF52C9611DA610C' has a wrong offset!");

}


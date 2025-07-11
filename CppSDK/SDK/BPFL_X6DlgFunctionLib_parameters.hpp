﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_X6DlgFunctionLib

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ESubtitleShowEffectType_structs.hpp"
#include "ESubtitleSourceType_structs.hpp"


namespace SDK::Params
{

// Function BPFL_X6DlgFunctionLib.BPFL_X6DlgFunctionLib_C.BP_UnmountDlg
// 0x0020 (0x0020 - 0x0000)
struct BPFL_X6DlgFunctionLib_C_BP_UnmountDlg final
{
public:
	class FString                                 DlgName;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int64                                         TargetId;                                          // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_X6DlgFunctionLib_C_BP_UnmountDlg) == 0x000008, "Wrong alignment on BPFL_X6DlgFunctionLib_C_BP_UnmountDlg");
static_assert(sizeof(BPFL_X6DlgFunctionLib_C_BP_UnmountDlg) == 0x000020, "Wrong size on BPFL_X6DlgFunctionLib_C_BP_UnmountDlg");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_UnmountDlg, DlgName) == 0x000000, "Member 'BPFL_X6DlgFunctionLib_C_BP_UnmountDlg::DlgName' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_UnmountDlg, TargetId) == 0x000010, "Member 'BPFL_X6DlgFunctionLib_C_BP_UnmountDlg::TargetId' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_UnmountDlg, __WorldContext) == 0x000018, "Member 'BPFL_X6DlgFunctionLib_C_BP_UnmountDlg::__WorldContext' has a wrong offset!");

// Function BPFL_X6DlgFunctionLib.BPFL_X6DlgFunctionLib_C.BP_UnmountChatBubble
// 0x0020 (0x0020 - 0x0000)
struct BPFL_X6DlgFunctionLib_C_BP_UnmountChatBubble final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 ChatBubbleName;                                    // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_X6DlgFunctionLib_C_BP_UnmountChatBubble) == 0x000008, "Wrong alignment on BPFL_X6DlgFunctionLib_C_BP_UnmountChatBubble");
static_assert(sizeof(BPFL_X6DlgFunctionLib_C_BP_UnmountChatBubble) == 0x000020, "Wrong size on BPFL_X6DlgFunctionLib_C_BP_UnmountChatBubble");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_UnmountChatBubble, Actor) == 0x000000, "Member 'BPFL_X6DlgFunctionLib_C_BP_UnmountChatBubble::Actor' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_UnmountChatBubble, ChatBubbleName) == 0x000008, "Member 'BPFL_X6DlgFunctionLib_C_BP_UnmountChatBubble::ChatBubbleName' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_UnmountChatBubble, __WorldContext) == 0x000018, "Member 'BPFL_X6DlgFunctionLib_C_BP_UnmountChatBubble::__WorldContext' has a wrong offset!");

// Function BPFL_X6DlgFunctionLib.BPFL_X6DlgFunctionLib_C.BP_ShowDlgSubtitleByIDV2
// 0x0058 (0x0058 - 0x0000)
struct BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2 final
{
public:
	class FString                                 DlgLineID;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	double                                        ShowDuration;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayVoice;                                        // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseSpecialWidget;                                 // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   Widget;                                            // 0x0020(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	ESubtitleShowEffectType                       ShowEffect;                                        // 0x0048(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubtitleSourceType                           SourceType;                                        // 0x0049(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0050(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2) == 0x000008, "Wrong alignment on BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2");
static_assert(sizeof(BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2) == 0x000058, "Wrong size on BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2, DlgLineID) == 0x000000, "Member 'BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2::DlgLineID' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2, ShowDuration) == 0x000010, "Member 'BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2::ShowDuration' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2, bPlayVoice) == 0x000018, "Member 'BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2::bPlayVoice' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2, bUseSpecialWidget) == 0x000019, "Member 'BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2::bUseSpecialWidget' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2, Widget) == 0x000020, "Member 'BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2::Widget' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2, ShowEffect) == 0x000048, "Member 'BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2::ShowEffect' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2, SourceType) == 0x000049, "Member 'BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2::SourceType' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2, __WorldContext) == 0x000050, "Member 'BPFL_X6DlgFunctionLib_C_BP_ShowDlgSubtitleByIDV2::__WorldContext' has a wrong offset!");

// Function BPFL_X6DlgFunctionLib.BPFL_X6DlgFunctionLib_C.BP_PrintDlgDebugInfo
// 0x0018 (0x0018 - 0x0000)
struct BPFL_X6DlgFunctionLib_C_BP_PrintDlgDebugInfo final
{
public:
	class FString                                 InDebugInfo;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_X6DlgFunctionLib_C_BP_PrintDlgDebugInfo) == 0x000008, "Wrong alignment on BPFL_X6DlgFunctionLib_C_BP_PrintDlgDebugInfo");
static_assert(sizeof(BPFL_X6DlgFunctionLib_C_BP_PrintDlgDebugInfo) == 0x000018, "Wrong size on BPFL_X6DlgFunctionLib_C_BP_PrintDlgDebugInfo");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_PrintDlgDebugInfo, InDebugInfo) == 0x000000, "Member 'BPFL_X6DlgFunctionLib_C_BP_PrintDlgDebugInfo::InDebugInfo' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_PrintDlgDebugInfo, __WorldContext) == 0x000010, "Member 'BPFL_X6DlgFunctionLib_C_BP_PrintDlgDebugInfo::__WorldContext' has a wrong offset!");

// Function BPFL_X6DlgFunctionLib.BPFL_X6DlgFunctionLib_C.BP_PlayDialogue
// 0x0020 (0x0020 - 0x0000)
struct BPFL_X6DlgFunctionLib_C_BP_PlayDialogue final
{
public:
	class FString                                 DialogueName;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int64                                         TargetId;                                          // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_X6DlgFunctionLib_C_BP_PlayDialogue) == 0x000008, "Wrong alignment on BPFL_X6DlgFunctionLib_C_BP_PlayDialogue");
static_assert(sizeof(BPFL_X6DlgFunctionLib_C_BP_PlayDialogue) == 0x000020, "Wrong size on BPFL_X6DlgFunctionLib_C_BP_PlayDialogue");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_PlayDialogue, DialogueName) == 0x000000, "Member 'BPFL_X6DlgFunctionLib_C_BP_PlayDialogue::DialogueName' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_PlayDialogue, TargetId) == 0x000010, "Member 'BPFL_X6DlgFunctionLib_C_BP_PlayDialogue::TargetId' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_PlayDialogue, __WorldContext) == 0x000018, "Member 'BPFL_X6DlgFunctionLib_C_BP_PlayDialogue::__WorldContext' has a wrong offset!");

// Function BPFL_X6DlgFunctionLib.BPFL_X6DlgFunctionLib_C.BP_MountDlg
// 0x0020 (0x0020 - 0x0000)
struct BPFL_X6DlgFunctionLib_C_BP_MountDlg final
{
public:
	class FString                                 DlgName;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int64                                         TargetId;                                          // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_X6DlgFunctionLib_C_BP_MountDlg) == 0x000008, "Wrong alignment on BPFL_X6DlgFunctionLib_C_BP_MountDlg");
static_assert(sizeof(BPFL_X6DlgFunctionLib_C_BP_MountDlg) == 0x000020, "Wrong size on BPFL_X6DlgFunctionLib_C_BP_MountDlg");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_MountDlg, DlgName) == 0x000000, "Member 'BPFL_X6DlgFunctionLib_C_BP_MountDlg::DlgName' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_MountDlg, TargetId) == 0x000010, "Member 'BPFL_X6DlgFunctionLib_C_BP_MountDlg::TargetId' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_MountDlg, __WorldContext) == 0x000018, "Member 'BPFL_X6DlgFunctionLib_C_BP_MountDlg::__WorldContext' has a wrong offset!");

// Function BPFL_X6DlgFunctionLib.BPFL_X6DlgFunctionLib_C.BP_MountChatBubble
// 0x0020 (0x0020 - 0x0000)
struct BPFL_X6DlgFunctionLib_C_BP_MountChatBubble final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 ChatBubbleName;                                    // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_X6DlgFunctionLib_C_BP_MountChatBubble) == 0x000008, "Wrong alignment on BPFL_X6DlgFunctionLib_C_BP_MountChatBubble");
static_assert(sizeof(BPFL_X6DlgFunctionLib_C_BP_MountChatBubble) == 0x000020, "Wrong size on BPFL_X6DlgFunctionLib_C_BP_MountChatBubble");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_MountChatBubble, Actor) == 0x000000, "Member 'BPFL_X6DlgFunctionLib_C_BP_MountChatBubble::Actor' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_MountChatBubble, ChatBubbleName) == 0x000008, "Member 'BPFL_X6DlgFunctionLib_C_BP_MountChatBubble::ChatBubbleName' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_MountChatBubble, __WorldContext) == 0x000018, "Member 'BPFL_X6DlgFunctionLib_C_BP_MountChatBubble::__WorldContext' has a wrong offset!");

// Function BPFL_X6DlgFunctionLib.BPFL_X6DlgFunctionLib_C.BP_GetVoicePathByLineID
// 0x0030 (0x0030 - 0x0000)
struct BPFL_X6DlgFunctionLib_C_BP_GetVoicePathByLineID final
{
public:
	class FName                                   DlgLineID;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSoftObjectPath                        AkEventSoftPath;                                   // 0x0010(0x0020)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_X6DlgFunctionLib_C_BP_GetVoicePathByLineID) == 0x000008, "Wrong alignment on BPFL_X6DlgFunctionLib_C_BP_GetVoicePathByLineID");
static_assert(sizeof(BPFL_X6DlgFunctionLib_C_BP_GetVoicePathByLineID) == 0x000030, "Wrong size on BPFL_X6DlgFunctionLib_C_BP_GetVoicePathByLineID");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_GetVoicePathByLineID, DlgLineID) == 0x000000, "Member 'BPFL_X6DlgFunctionLib_C_BP_GetVoicePathByLineID::DlgLineID' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_GetVoicePathByLineID, __WorldContext) == 0x000008, "Member 'BPFL_X6DlgFunctionLib_C_BP_GetVoicePathByLineID::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_GetVoicePathByLineID, AkEventSoftPath) == 0x000010, "Member 'BPFL_X6DlgFunctionLib_C_BP_GetVoicePathByLineID::AkEventSoftPath' has a wrong offset!");

// Function BPFL_X6DlgFunctionLib.BPFL_X6DlgFunctionLib_C.BP_GetTransformBySemPointID
// 0x0070 (0x0070 - 0x0000)
struct BPFL_X6DlgFunctionLib_C_BP_GetTransformBySemPointID final
{
public:
	int64                                         PlayPointID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Transform;                                         // 0x0010(0x0060)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_X6DlgFunctionLib_C_BP_GetTransformBySemPointID) == 0x000010, "Wrong alignment on BPFL_X6DlgFunctionLib_C_BP_GetTransformBySemPointID");
static_assert(sizeof(BPFL_X6DlgFunctionLib_C_BP_GetTransformBySemPointID) == 0x000070, "Wrong size on BPFL_X6DlgFunctionLib_C_BP_GetTransformBySemPointID");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_GetTransformBySemPointID, PlayPointID) == 0x000000, "Member 'BPFL_X6DlgFunctionLib_C_BP_GetTransformBySemPointID::PlayPointID' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_GetTransformBySemPointID, __WorldContext) == 0x000008, "Member 'BPFL_X6DlgFunctionLib_C_BP_GetTransformBySemPointID::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_GetTransformBySemPointID, Transform) == 0x000010, "Member 'BPFL_X6DlgFunctionLib_C_BP_GetTransformBySemPointID::Transform' has a wrong offset!");

// Function BPFL_X6DlgFunctionLib.BPFL_X6DlgFunctionLib_C.BP_GetFloorSufaceZ
// 0x0010 (0x0010 - 0x0000)
struct BPFL_X6DlgFunctionLib_C_BP_GetFloorSufaceZ final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        LocationZ;                                         // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_X6DlgFunctionLib_C_BP_GetFloorSufaceZ) == 0x000008, "Wrong alignment on BPFL_X6DlgFunctionLib_C_BP_GetFloorSufaceZ");
static_assert(sizeof(BPFL_X6DlgFunctionLib_C_BP_GetFloorSufaceZ) == 0x000010, "Wrong size on BPFL_X6DlgFunctionLib_C_BP_GetFloorSufaceZ");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_GetFloorSufaceZ, __WorldContext) == 0x000000, "Member 'BPFL_X6DlgFunctionLib_C_BP_GetFloorSufaceZ::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_GetFloorSufaceZ, LocationZ) == 0x000008, "Member 'BPFL_X6DlgFunctionLib_C_BP_GetFloorSufaceZ::LocationZ' has a wrong offset!");

// Function BPFL_X6DlgFunctionLib.BPFL_X6DlgFunctionLib_C.BP_GetDlgActorFloorTransform
// 0x0070 (0x0070 - 0x0000)
struct BPFL_X6DlgFunctionLib_C_BP_GetDlgActorFloorTransform final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Tranform;                                          // 0x0010(0x0060)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_X6DlgFunctionLib_C_BP_GetDlgActorFloorTransform) == 0x000010, "Wrong alignment on BPFL_X6DlgFunctionLib_C_BP_GetDlgActorFloorTransform");
static_assert(sizeof(BPFL_X6DlgFunctionLib_C_BP_GetDlgActorFloorTransform) == 0x000070, "Wrong size on BPFL_X6DlgFunctionLib_C_BP_GetDlgActorFloorTransform");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_GetDlgActorFloorTransform, Actor) == 0x000000, "Member 'BPFL_X6DlgFunctionLib_C_BP_GetDlgActorFloorTransform::Actor' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_GetDlgActorFloorTransform, __WorldContext) == 0x000008, "Member 'BPFL_X6DlgFunctionLib_C_BP_GetDlgActorFloorTransform::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_X6DlgFunctionLib_C_BP_GetDlgActorFloorTransform, Tranform) == 0x000010, "Member 'BPFL_X6DlgFunctionLib_C_BP_GetDlgActorFloorTransform::Tranform' has a wrong offset!");

}


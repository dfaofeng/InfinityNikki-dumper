﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PixelStreaming

#include "Basic.hpp"


namespace SDK::Params
{

// Function PixelStreaming.PixelStreamingAudioComponent.IsListeningToPlayer
// 0x0001 (0x0001 - 0x0000)
struct PixelStreamingAudioComponent_IsListeningToPlayer final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingAudioComponent_IsListeningToPlayer) == 0x000001, "Wrong alignment on PixelStreamingAudioComponent_IsListeningToPlayer");
static_assert(sizeof(PixelStreamingAudioComponent_IsListeningToPlayer) == 0x000001, "Wrong size on PixelStreamingAudioComponent_IsListeningToPlayer");
static_assert(offsetof(PixelStreamingAudioComponent_IsListeningToPlayer, ReturnValue) == 0x000000, "Member 'PixelStreamingAudioComponent_IsListeningToPlayer::ReturnValue' has a wrong offset!");

// Function PixelStreaming.PixelStreamingAudioComponent.ListenTo
// 0x0018 (0x0018 - 0x0000)
struct PixelStreamingAudioComponent_ListenTo final
{
public:
	class FString                                 PlayerToListenTo;                                  // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PixelStreamingAudioComponent_ListenTo) == 0x000008, "Wrong alignment on PixelStreamingAudioComponent_ListenTo");
static_assert(sizeof(PixelStreamingAudioComponent_ListenTo) == 0x000018, "Wrong size on PixelStreamingAudioComponent_ListenTo");
static_assert(offsetof(PixelStreamingAudioComponent_ListenTo, PlayerToListenTo) == 0x000000, "Member 'PixelStreamingAudioComponent_ListenTo::PlayerToListenTo' has a wrong offset!");
static_assert(offsetof(PixelStreamingAudioComponent_ListenTo, ReturnValue) == 0x000010, "Member 'PixelStreamingAudioComponent_ListenTo::ReturnValue' has a wrong offset!");

// Function PixelStreaming.PixelStreamingAudioComponent.StreamerListenTo
// 0x0028 (0x0028 - 0x0000)
struct PixelStreamingAudioComponent_StreamerListenTo final
{
public:
	class FString                                 StreamerId;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PlayerToListenTo;                                  // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PixelStreamingAudioComponent_StreamerListenTo) == 0x000008, "Wrong alignment on PixelStreamingAudioComponent_StreamerListenTo");
static_assert(sizeof(PixelStreamingAudioComponent_StreamerListenTo) == 0x000028, "Wrong size on PixelStreamingAudioComponent_StreamerListenTo");
static_assert(offsetof(PixelStreamingAudioComponent_StreamerListenTo, StreamerId) == 0x000000, "Member 'PixelStreamingAudioComponent_StreamerListenTo::StreamerId' has a wrong offset!");
static_assert(offsetof(PixelStreamingAudioComponent_StreamerListenTo, PlayerToListenTo) == 0x000010, "Member 'PixelStreamingAudioComponent_StreamerListenTo::PlayerToListenTo' has a wrong offset!");
static_assert(offsetof(PixelStreamingAudioComponent_StreamerListenTo, ReturnValue) == 0x000020, "Member 'PixelStreamingAudioComponent_StreamerListenTo::ReturnValue' has a wrong offset!");

// Function PixelStreaming.PixelStreamingBlueprints.FreezeFrame
// 0x0008 (0x0008 - 0x0000)
struct PixelStreamingBlueprints_FreezeFrame final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingBlueprints_FreezeFrame) == 0x000008, "Wrong alignment on PixelStreamingBlueprints_FreezeFrame");
static_assert(sizeof(PixelStreamingBlueprints_FreezeFrame) == 0x000008, "Wrong size on PixelStreamingBlueprints_FreezeFrame");
static_assert(offsetof(PixelStreamingBlueprints_FreezeFrame, Texture) == 0x000000, "Member 'PixelStreamingBlueprints_FreezeFrame::Texture' has a wrong offset!");

// Function PixelStreaming.PixelStreamingBlueprints.GetConnectedPlayers
// 0x0010 (0x0010 - 0x0000)
struct PixelStreamingBlueprints_GetConnectedPlayers final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingBlueprints_GetConnectedPlayers) == 0x000008, "Wrong alignment on PixelStreamingBlueprints_GetConnectedPlayers");
static_assert(sizeof(PixelStreamingBlueprints_GetConnectedPlayers) == 0x000010, "Wrong size on PixelStreamingBlueprints_GetConnectedPlayers");
static_assert(offsetof(PixelStreamingBlueprints_GetConnectedPlayers, ReturnValue) == 0x000000, "Member 'PixelStreamingBlueprints_GetConnectedPlayers::ReturnValue' has a wrong offset!");

// Function PixelStreaming.PixelStreamingBlueprints.GetDefaultStreamerID
// 0x0010 (0x0010 - 0x0000)
struct PixelStreamingBlueprints_GetDefaultStreamerID final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingBlueprints_GetDefaultStreamerID) == 0x000008, "Wrong alignment on PixelStreamingBlueprints_GetDefaultStreamerID");
static_assert(sizeof(PixelStreamingBlueprints_GetDefaultStreamerID) == 0x000010, "Wrong size on PixelStreamingBlueprints_GetDefaultStreamerID");
static_assert(offsetof(PixelStreamingBlueprints_GetDefaultStreamerID, ReturnValue) == 0x000000, "Member 'PixelStreamingBlueprints_GetDefaultStreamerID::ReturnValue' has a wrong offset!");

// Function PixelStreaming.PixelStreamingBlueprints.GetPixelStreamingDelegates
// 0x0008 (0x0008 - 0x0000)
struct PixelStreamingBlueprints_GetPixelStreamingDelegates final
{
public:
	class UPixelStreamingDelegates*               ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingBlueprints_GetPixelStreamingDelegates) == 0x000008, "Wrong alignment on PixelStreamingBlueprints_GetPixelStreamingDelegates");
static_assert(sizeof(PixelStreamingBlueprints_GetPixelStreamingDelegates) == 0x000008, "Wrong size on PixelStreamingBlueprints_GetPixelStreamingDelegates");
static_assert(offsetof(PixelStreamingBlueprints_GetPixelStreamingDelegates, ReturnValue) == 0x000000, "Member 'PixelStreamingBlueprints_GetPixelStreamingDelegates::ReturnValue' has a wrong offset!");

// Function PixelStreaming.PixelStreamingBlueprints.KickPlayer
// 0x0010 (0x0010 - 0x0000)
struct PixelStreamingBlueprints_KickPlayer final
{
public:
	class FString                                 playerId;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingBlueprints_KickPlayer) == 0x000008, "Wrong alignment on PixelStreamingBlueprints_KickPlayer");
static_assert(sizeof(PixelStreamingBlueprints_KickPlayer) == 0x000010, "Wrong size on PixelStreamingBlueprints_KickPlayer");
static_assert(offsetof(PixelStreamingBlueprints_KickPlayer, playerId) == 0x000000, "Member 'PixelStreamingBlueprints_KickPlayer::playerId' has a wrong offset!");

// Function PixelStreaming.PixelStreamingBlueprints.SendFile
// 0x0030 (0x0030 - 0x0000)
struct PixelStreamingBlueprints_SendFile final
{
public:
	class FString                                 FilePath;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MimeType;                                          // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FileExtension;                                     // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingBlueprints_SendFile) == 0x000008, "Wrong alignment on PixelStreamingBlueprints_SendFile");
static_assert(sizeof(PixelStreamingBlueprints_SendFile) == 0x000030, "Wrong size on PixelStreamingBlueprints_SendFile");
static_assert(offsetof(PixelStreamingBlueprints_SendFile, FilePath) == 0x000000, "Member 'PixelStreamingBlueprints_SendFile::FilePath' has a wrong offset!");
static_assert(offsetof(PixelStreamingBlueprints_SendFile, MimeType) == 0x000010, "Member 'PixelStreamingBlueprints_SendFile::MimeType' has a wrong offset!");
static_assert(offsetof(PixelStreamingBlueprints_SendFile, FileExtension) == 0x000020, "Member 'PixelStreamingBlueprints_SendFile::FileExtension' has a wrong offset!");

// Function PixelStreaming.PixelStreamingBlueprints.SendFileAsByteArray
// 0x0030 (0x0030 - 0x0000)
struct PixelStreamingBlueprints_SendFileAsByteArray final
{
public:
	TArray<uint8>                                 ByteArray;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                 MimeType;                                          // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FileExtension;                                     // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingBlueprints_SendFileAsByteArray) == 0x000008, "Wrong alignment on PixelStreamingBlueprints_SendFileAsByteArray");
static_assert(sizeof(PixelStreamingBlueprints_SendFileAsByteArray) == 0x000030, "Wrong size on PixelStreamingBlueprints_SendFileAsByteArray");
static_assert(offsetof(PixelStreamingBlueprints_SendFileAsByteArray, ByteArray) == 0x000000, "Member 'PixelStreamingBlueprints_SendFileAsByteArray::ByteArray' has a wrong offset!");
static_assert(offsetof(PixelStreamingBlueprints_SendFileAsByteArray, MimeType) == 0x000010, "Member 'PixelStreamingBlueprints_SendFileAsByteArray::MimeType' has a wrong offset!");
static_assert(offsetof(PixelStreamingBlueprints_SendFileAsByteArray, FileExtension) == 0x000020, "Member 'PixelStreamingBlueprints_SendFileAsByteArray::FileExtension' has a wrong offset!");

// Function PixelStreaming.PixelStreamingBlueprints.SetPlayerLayerPreference
// 0x0018 (0x0018 - 0x0000)
struct PixelStreamingBlueprints_SetPlayerLayerPreference final
{
public:
	class FString                                 playerId;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SpatialLayerId;                                    // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TemporalLayerId;                                   // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingBlueprints_SetPlayerLayerPreference) == 0x000008, "Wrong alignment on PixelStreamingBlueprints_SetPlayerLayerPreference");
static_assert(sizeof(PixelStreamingBlueprints_SetPlayerLayerPreference) == 0x000018, "Wrong size on PixelStreamingBlueprints_SetPlayerLayerPreference");
static_assert(offsetof(PixelStreamingBlueprints_SetPlayerLayerPreference, playerId) == 0x000000, "Member 'PixelStreamingBlueprints_SetPlayerLayerPreference::playerId' has a wrong offset!");
static_assert(offsetof(PixelStreamingBlueprints_SetPlayerLayerPreference, SpatialLayerId) == 0x000010, "Member 'PixelStreamingBlueprints_SetPlayerLayerPreference::SpatialLayerId' has a wrong offset!");
static_assert(offsetof(PixelStreamingBlueprints_SetPlayerLayerPreference, TemporalLayerId) == 0x000014, "Member 'PixelStreamingBlueprints_SetPlayerLayerPreference::TemporalLayerId' has a wrong offset!");

// Function PixelStreaming.PixelStreamingBlueprints.StreamerFreezeStream
// 0x0018 (0x0018 - 0x0000)
struct PixelStreamingBlueprints_StreamerFreezeStream final
{
public:
	class FString                                 StreamerId;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Texture;                                           // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingBlueprints_StreamerFreezeStream) == 0x000008, "Wrong alignment on PixelStreamingBlueprints_StreamerFreezeStream");
static_assert(sizeof(PixelStreamingBlueprints_StreamerFreezeStream) == 0x000018, "Wrong size on PixelStreamingBlueprints_StreamerFreezeStream");
static_assert(offsetof(PixelStreamingBlueprints_StreamerFreezeStream, StreamerId) == 0x000000, "Member 'PixelStreamingBlueprints_StreamerFreezeStream::StreamerId' has a wrong offset!");
static_assert(offsetof(PixelStreamingBlueprints_StreamerFreezeStream, Texture) == 0x000010, "Member 'PixelStreamingBlueprints_StreamerFreezeStream::Texture' has a wrong offset!");

// Function PixelStreaming.PixelStreamingBlueprints.StreamerGetConnectedPlayers
// 0x0020 (0x0020 - 0x0000)
struct PixelStreamingBlueprints_StreamerGetConnectedPlayers final
{
public:
	class FString                                 StreamerId;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingBlueprints_StreamerGetConnectedPlayers) == 0x000008, "Wrong alignment on PixelStreamingBlueprints_StreamerGetConnectedPlayers");
static_assert(sizeof(PixelStreamingBlueprints_StreamerGetConnectedPlayers) == 0x000020, "Wrong size on PixelStreamingBlueprints_StreamerGetConnectedPlayers");
static_assert(offsetof(PixelStreamingBlueprints_StreamerGetConnectedPlayers, StreamerId) == 0x000000, "Member 'PixelStreamingBlueprints_StreamerGetConnectedPlayers::StreamerId' has a wrong offset!");
static_assert(offsetof(PixelStreamingBlueprints_StreamerGetConnectedPlayers, ReturnValue) == 0x000010, "Member 'PixelStreamingBlueprints_StreamerGetConnectedPlayers::ReturnValue' has a wrong offset!");

// Function PixelStreaming.PixelStreamingBlueprints.StreamerKickPlayer
// 0x0020 (0x0020 - 0x0000)
struct PixelStreamingBlueprints_StreamerKickPlayer final
{
public:
	class FString                                 StreamerId;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 playerId;                                          // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingBlueprints_StreamerKickPlayer) == 0x000008, "Wrong alignment on PixelStreamingBlueprints_StreamerKickPlayer");
static_assert(sizeof(PixelStreamingBlueprints_StreamerKickPlayer) == 0x000020, "Wrong size on PixelStreamingBlueprints_StreamerKickPlayer");
static_assert(offsetof(PixelStreamingBlueprints_StreamerKickPlayer, StreamerId) == 0x000000, "Member 'PixelStreamingBlueprints_StreamerKickPlayer::StreamerId' has a wrong offset!");
static_assert(offsetof(PixelStreamingBlueprints_StreamerKickPlayer, playerId) == 0x000010, "Member 'PixelStreamingBlueprints_StreamerKickPlayer::playerId' has a wrong offset!");

// Function PixelStreaming.PixelStreamingBlueprints.StreamerSendFile
// 0x0040 (0x0040 - 0x0000)
struct PixelStreamingBlueprints_StreamerSendFile final
{
public:
	class FString                                 StreamerId;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FilePath;                                          // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MimeType;                                          // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FileExtension;                                     // 0x0030(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingBlueprints_StreamerSendFile) == 0x000008, "Wrong alignment on PixelStreamingBlueprints_StreamerSendFile");
static_assert(sizeof(PixelStreamingBlueprints_StreamerSendFile) == 0x000040, "Wrong size on PixelStreamingBlueprints_StreamerSendFile");
static_assert(offsetof(PixelStreamingBlueprints_StreamerSendFile, StreamerId) == 0x000000, "Member 'PixelStreamingBlueprints_StreamerSendFile::StreamerId' has a wrong offset!");
static_assert(offsetof(PixelStreamingBlueprints_StreamerSendFile, FilePath) == 0x000010, "Member 'PixelStreamingBlueprints_StreamerSendFile::FilePath' has a wrong offset!");
static_assert(offsetof(PixelStreamingBlueprints_StreamerSendFile, MimeType) == 0x000020, "Member 'PixelStreamingBlueprints_StreamerSendFile::MimeType' has a wrong offset!");
static_assert(offsetof(PixelStreamingBlueprints_StreamerSendFile, FileExtension) == 0x000030, "Member 'PixelStreamingBlueprints_StreamerSendFile::FileExtension' has a wrong offset!");

// Function PixelStreaming.PixelStreamingBlueprints.StreamerSendFileAsByteArray
// 0x0040 (0x0040 - 0x0000)
struct PixelStreamingBlueprints_StreamerSendFileAsByteArray final
{
public:
	class FString                                 StreamerId;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                 ByteArray;                                         // 0x0010(0x0010)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                 MimeType;                                          // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FileExtension;                                     // 0x0030(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingBlueprints_StreamerSendFileAsByteArray) == 0x000008, "Wrong alignment on PixelStreamingBlueprints_StreamerSendFileAsByteArray");
static_assert(sizeof(PixelStreamingBlueprints_StreamerSendFileAsByteArray) == 0x000040, "Wrong size on PixelStreamingBlueprints_StreamerSendFileAsByteArray");
static_assert(offsetof(PixelStreamingBlueprints_StreamerSendFileAsByteArray, StreamerId) == 0x000000, "Member 'PixelStreamingBlueprints_StreamerSendFileAsByteArray::StreamerId' has a wrong offset!");
static_assert(offsetof(PixelStreamingBlueprints_StreamerSendFileAsByteArray, ByteArray) == 0x000010, "Member 'PixelStreamingBlueprints_StreamerSendFileAsByteArray::ByteArray' has a wrong offset!");
static_assert(offsetof(PixelStreamingBlueprints_StreamerSendFileAsByteArray, MimeType) == 0x000020, "Member 'PixelStreamingBlueprints_StreamerSendFileAsByteArray::MimeType' has a wrong offset!");
static_assert(offsetof(PixelStreamingBlueprints_StreamerSendFileAsByteArray, FileExtension) == 0x000030, "Member 'PixelStreamingBlueprints_StreamerSendFileAsByteArray::FileExtension' has a wrong offset!");

// Function PixelStreaming.PixelStreamingBlueprints.StreamerSetPlayerLayerPreference
// 0x0028 (0x0028 - 0x0000)
struct PixelStreamingBlueprints_StreamerSetPlayerLayerPreference final
{
public:
	class FString                                 StreamerId;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 playerId;                                          // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SpatialLayerId;                                    // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TemporalLayerId;                                   // 0x0024(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingBlueprints_StreamerSetPlayerLayerPreference) == 0x000008, "Wrong alignment on PixelStreamingBlueprints_StreamerSetPlayerLayerPreference");
static_assert(sizeof(PixelStreamingBlueprints_StreamerSetPlayerLayerPreference) == 0x000028, "Wrong size on PixelStreamingBlueprints_StreamerSetPlayerLayerPreference");
static_assert(offsetof(PixelStreamingBlueprints_StreamerSetPlayerLayerPreference, StreamerId) == 0x000000, "Member 'PixelStreamingBlueprints_StreamerSetPlayerLayerPreference::StreamerId' has a wrong offset!");
static_assert(offsetof(PixelStreamingBlueprints_StreamerSetPlayerLayerPreference, playerId) == 0x000010, "Member 'PixelStreamingBlueprints_StreamerSetPlayerLayerPreference::playerId' has a wrong offset!");
static_assert(offsetof(PixelStreamingBlueprints_StreamerSetPlayerLayerPreference, SpatialLayerId) == 0x000020, "Member 'PixelStreamingBlueprints_StreamerSetPlayerLayerPreference::SpatialLayerId' has a wrong offset!");
static_assert(offsetof(PixelStreamingBlueprints_StreamerSetPlayerLayerPreference, TemporalLayerId) == 0x000024, "Member 'PixelStreamingBlueprints_StreamerSetPlayerLayerPreference::TemporalLayerId' has a wrong offset!");

// Function PixelStreaming.PixelStreamingBlueprints.StreamerUnfreezeStream
// 0x0010 (0x0010 - 0x0000)
struct PixelStreamingBlueprints_StreamerUnfreezeStream final
{
public:
	class FString                                 StreamerId;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingBlueprints_StreamerUnfreezeStream) == 0x000008, "Wrong alignment on PixelStreamingBlueprints_StreamerUnfreezeStream");
static_assert(sizeof(PixelStreamingBlueprints_StreamerUnfreezeStream) == 0x000010, "Wrong size on PixelStreamingBlueprints_StreamerUnfreezeStream");
static_assert(offsetof(PixelStreamingBlueprints_StreamerUnfreezeStream, StreamerId) == 0x000000, "Member 'PixelStreamingBlueprints_StreamerUnfreezeStream::StreamerId' has a wrong offset!");

// Function PixelStreaming.PixelStreamingInput.AddJsonStringValue
// 0x0048 (0x0048 - 0x0000)
struct PixelStreamingInput_AddJsonStringValue final
{
public:
	class FString                                 Descriptor;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FieldName;                                         // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 StringValue;                                       // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 NewDescriptor;                                     // 0x0030(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Success;                                           // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PixelStreamingInput_AddJsonStringValue) == 0x000008, "Wrong alignment on PixelStreamingInput_AddJsonStringValue");
static_assert(sizeof(PixelStreamingInput_AddJsonStringValue) == 0x000048, "Wrong size on PixelStreamingInput_AddJsonStringValue");
static_assert(offsetof(PixelStreamingInput_AddJsonStringValue, Descriptor) == 0x000000, "Member 'PixelStreamingInput_AddJsonStringValue::Descriptor' has a wrong offset!");
static_assert(offsetof(PixelStreamingInput_AddJsonStringValue, FieldName) == 0x000010, "Member 'PixelStreamingInput_AddJsonStringValue::FieldName' has a wrong offset!");
static_assert(offsetof(PixelStreamingInput_AddJsonStringValue, StringValue) == 0x000020, "Member 'PixelStreamingInput_AddJsonStringValue::StringValue' has a wrong offset!");
static_assert(offsetof(PixelStreamingInput_AddJsonStringValue, NewDescriptor) == 0x000030, "Member 'PixelStreamingInput_AddJsonStringValue::NewDescriptor' has a wrong offset!");
static_assert(offsetof(PixelStreamingInput_AddJsonStringValue, Success) == 0x000040, "Member 'PixelStreamingInput_AddJsonStringValue::Success' has a wrong offset!");

// Function PixelStreaming.PixelStreamingInput.GetJsonStringValue
// 0x0038 (0x0038 - 0x0000)
struct PixelStreamingInput_GetJsonStringValue final
{
public:
	class FString                                 Descriptor;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FieldName;                                         // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 StringValue;                                       // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Success;                                           // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PixelStreamingInput_GetJsonStringValue) == 0x000008, "Wrong alignment on PixelStreamingInput_GetJsonStringValue");
static_assert(sizeof(PixelStreamingInput_GetJsonStringValue) == 0x000038, "Wrong size on PixelStreamingInput_GetJsonStringValue");
static_assert(offsetof(PixelStreamingInput_GetJsonStringValue, Descriptor) == 0x000000, "Member 'PixelStreamingInput_GetJsonStringValue::Descriptor' has a wrong offset!");
static_assert(offsetof(PixelStreamingInput_GetJsonStringValue, FieldName) == 0x000010, "Member 'PixelStreamingInput_GetJsonStringValue::FieldName' has a wrong offset!");
static_assert(offsetof(PixelStreamingInput_GetJsonStringValue, StringValue) == 0x000020, "Member 'PixelStreamingInput_GetJsonStringValue::StringValue' has a wrong offset!");
static_assert(offsetof(PixelStreamingInput_GetJsonStringValue, Success) == 0x000030, "Member 'PixelStreamingInput_GetJsonStringValue::Success' has a wrong offset!");

// Function PixelStreaming.PixelStreamingInput.SendPixelStreamingResponse
// 0x0010 (0x0010 - 0x0000)
struct PixelStreamingInput_SendPixelStreamingResponse final
{
public:
	class FString                                 Descriptor;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingInput_SendPixelStreamingResponse) == 0x000008, "Wrong alignment on PixelStreamingInput_SendPixelStreamingResponse");
static_assert(sizeof(PixelStreamingInput_SendPixelStreamingResponse) == 0x000010, "Wrong size on PixelStreamingInput_SendPixelStreamingResponse");
static_assert(offsetof(PixelStreamingInput_SendPixelStreamingResponse, Descriptor) == 0x000000, "Member 'PixelStreamingInput_SendPixelStreamingResponse::Descriptor' has a wrong offset!");

}


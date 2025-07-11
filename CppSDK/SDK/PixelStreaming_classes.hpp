﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PixelStreaming

#include "Basic.hpp"

#include "AudioMixer_classes.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "MediaIOCore_classes.hpp"


namespace SDK
{

// Class PixelStreaming.PixelStreamingAudioComponent
// 0x0050 (0x08E0 - 0x0890)
class UPixelStreamingAudioComponent final : public USynthComponent
{
public:
	uint8                                         Pad_890[0x8];                                      // 0x0890(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 StreamerToHear;                                    // 0x0898(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PlayerToHear;                                      // 0x08A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoFindPeer;                                     // 0x08B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8B9[0x27];                                     // 0x08B9(0x0027)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool IsListeningToPlayer();
	bool ListenTo(const class FString& PlayerToListenTo);
	void Reset();
	bool StreamerListenTo(const class FString& StreamerId, const class FString& PlayerToListenTo);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PixelStreamingAudioComponent">();
	}
	static class UPixelStreamingAudioComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPixelStreamingAudioComponent>();
	}
};
static_assert(alignof(UPixelStreamingAudioComponent) == 0x000010, "Wrong alignment on UPixelStreamingAudioComponent");
static_assert(sizeof(UPixelStreamingAudioComponent) == 0x0008E0, "Wrong size on UPixelStreamingAudioComponent");
static_assert(offsetof(UPixelStreamingAudioComponent, StreamerToHear) == 0x000898, "Member 'UPixelStreamingAudioComponent::StreamerToHear' has a wrong offset!");
static_assert(offsetof(UPixelStreamingAudioComponent, PlayerToHear) == 0x0008A8, "Member 'UPixelStreamingAudioComponent::PlayerToHear' has a wrong offset!");
static_assert(offsetof(UPixelStreamingAudioComponent, bAutoFindPeer) == 0x0008B8, "Member 'UPixelStreamingAudioComponent::bAutoFindPeer' has a wrong offset!");

// Class PixelStreaming.PixelStreamingBlueprints
// 0x0000 (0x0028 - 0x0028)
class UPixelStreamingBlueprints final : public UBlueprintFunctionLibrary
{
public:
	static void ForceKeyFrame();
	static void FreezeFrame(class UTexture2D* Texture);
	static TArray<class FString> GetConnectedPlayers();
	static class FString GetDefaultStreamerID();
	static class UPixelStreamingDelegates* GetPixelStreamingDelegates();
	static void KickPlayer(const class FString& playerId);
	static void SendFile(const class FString& FilePath, const class FString& MimeType, const class FString& FileExtension);
	static void SendFileAsByteArray(const TArray<uint8>& ByteArray, const class FString& MimeType, const class FString& FileExtension);
	static void SetPlayerLayerPreference(const class FString& playerId, int32 SpatialLayerId, int32 TemporalLayerId);
	static void StreamerFreezeStream(const class FString& StreamerId, class UTexture2D* Texture);
	static TArray<class FString> StreamerGetConnectedPlayers(const class FString& StreamerId);
	static void StreamerKickPlayer(const class FString& StreamerId, const class FString& playerId);
	static void StreamerSendFile(const class FString& StreamerId, const class FString& FilePath, const class FString& MimeType, const class FString& FileExtension);
	static void StreamerSendFileAsByteArray(const class FString& StreamerId, const TArray<uint8>& ByteArray, const class FString& MimeType, const class FString& FileExtension);
	static void StreamerSetPlayerLayerPreference(const class FString& StreamerId, const class FString& playerId, int32 SpatialLayerId, int32 TemporalLayerId);
	static void StreamerUnfreezeStream(const class FString& StreamerId);
	static void UnfreezeFrame();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PixelStreamingBlueprints">();
	}
	static class UPixelStreamingBlueprints* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPixelStreamingBlueprints>();
	}
};
static_assert(alignof(UPixelStreamingBlueprints) == 0x000008, "Wrong alignment on UPixelStreamingBlueprints");
static_assert(sizeof(UPixelStreamingBlueprints) == 0x000028, "Wrong size on UPixelStreamingBlueprints");

// Class PixelStreaming.PixelStreamingDelegates
// 0x0160 (0x0188 - 0x0028)
class UPixelStreamingDelegates final : public UObject
{
public:
	TMulticastInlineDelegate<void()>              OnConnectedToSignallingServer;                     // 0x0028(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x18];                                      // 0x0038(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnDisconnectedFromSignallingServer;                // 0x0050(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x18];                                      // 0x0060(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(const class FString& StreamerId, const class FString& playerId, bool qualityController)> OnNewConnection; // 0x0078(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_88[0x18];                                      // 0x0088(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(const class FString& StreamerId, const class FString& playerId, bool WasQualityController)> OnClosedConnection; // 0x00A0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_B0[0x18];                                      // 0x00B0(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(const class FString& StreamerId)> OnAllConnectionsClosed;          // 0x00C8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_D8[0x60];                                      // 0x00D8(0x0060)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(const class FString& playerId, class FName StatName, float StatValue)> OnStatChanged; // 0x0138(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_148[0x18];                                     // 0x0148(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnFallbackToSoftwareEncodering;                    // 0x0160(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_170[0x18];                                     // 0x0170(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PixelStreamingDelegates">();
	}
	static class UPixelStreamingDelegates* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPixelStreamingDelegates>();
	}
};
static_assert(alignof(UPixelStreamingDelegates) == 0x000008, "Wrong alignment on UPixelStreamingDelegates");
static_assert(sizeof(UPixelStreamingDelegates) == 0x000188, "Wrong size on UPixelStreamingDelegates");
static_assert(offsetof(UPixelStreamingDelegates, OnConnectedToSignallingServer) == 0x000028, "Member 'UPixelStreamingDelegates::OnConnectedToSignallingServer' has a wrong offset!");
static_assert(offsetof(UPixelStreamingDelegates, OnDisconnectedFromSignallingServer) == 0x000050, "Member 'UPixelStreamingDelegates::OnDisconnectedFromSignallingServer' has a wrong offset!");
static_assert(offsetof(UPixelStreamingDelegates, OnNewConnection) == 0x000078, "Member 'UPixelStreamingDelegates::OnNewConnection' has a wrong offset!");
static_assert(offsetof(UPixelStreamingDelegates, OnClosedConnection) == 0x0000A0, "Member 'UPixelStreamingDelegates::OnClosedConnection' has a wrong offset!");
static_assert(offsetof(UPixelStreamingDelegates, OnAllConnectionsClosed) == 0x0000C8, "Member 'UPixelStreamingDelegates::OnAllConnectionsClosed' has a wrong offset!");
static_assert(offsetof(UPixelStreamingDelegates, OnStatChanged) == 0x000138, "Member 'UPixelStreamingDelegates::OnStatChanged' has a wrong offset!");
static_assert(offsetof(UPixelStreamingDelegates, OnFallbackToSoftwareEncodering) == 0x000160, "Member 'UPixelStreamingDelegates::OnFallbackToSoftwareEncodering' has a wrong offset!");

// Class PixelStreaming.PixelStreamingInput
// 0x0018 (0x00C0 - 0x00A8)
class UPixelStreamingInput final : public UActorComponent
{
public:
	TMulticastInlineDelegate<void(const class FString& Descriptor)> OnInputEvent;                    // 0x00A8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_B8[0x8];                                       // 0x00B8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddJsonStringValue(const class FString& Descriptor, const class FString& FieldName, const class FString& StringValue, class FString* NewDescriptor, bool* Success);
	void GetJsonStringValue(const class FString& Descriptor, const class FString& FieldName, class FString* StringValue, bool* Success);
	void SendPixelStreamingResponse(const class FString& Descriptor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PixelStreamingInput">();
	}
	static class UPixelStreamingInput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPixelStreamingInput>();
	}
};
static_assert(alignof(UPixelStreamingInput) == 0x000008, "Wrong alignment on UPixelStreamingInput");
static_assert(sizeof(UPixelStreamingInput) == 0x0000C0, "Wrong size on UPixelStreamingInput");
static_assert(offsetof(UPixelStreamingInput, OnInputEvent) == 0x0000A8, "Member 'UPixelStreamingInput::OnInputEvent' has a wrong offset!");

// Class PixelStreaming.PixelStreamingMediaIOCapture
// 0x0050 (0x02F0 - 0x02A0)
class UPixelStreamingMediaIOCapture final : public UMediaCapture
{
public:
	uint8                                         Pad_2A0[0x50];                                     // 0x02A0(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PixelStreamingMediaIOCapture">();
	}
	static class UPixelStreamingMediaIOCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPixelStreamingMediaIOCapture>();
	}
};
static_assert(alignof(UPixelStreamingMediaIOCapture) == 0x000008, "Wrong alignment on UPixelStreamingMediaIOCapture");
static_assert(sizeof(UPixelStreamingMediaIOCapture) == 0x0002F0, "Wrong size on UPixelStreamingMediaIOCapture");

// Class PixelStreaming.PixelStreamingMediaIOOutput
// 0x0008 (0x0038 - 0x0030)
class UPixelStreamingMediaIOOutput final : public UMediaOutput
{
public:
	class UPixelStreamingMediaIOCapture*          MediaCapture;                                      // 0x0030(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PixelStreamingMediaIOOutput">();
	}
	static class UPixelStreamingMediaIOOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPixelStreamingMediaIOOutput>();
	}
};
static_assert(alignof(UPixelStreamingMediaIOOutput) == 0x000008, "Wrong alignment on UPixelStreamingMediaIOOutput");
static_assert(sizeof(UPixelStreamingMediaIOOutput) == 0x000038, "Wrong size on UPixelStreamingMediaIOOutput");
static_assert(offsetof(UPixelStreamingMediaIOOutput, MediaCapture) == 0x000030, "Member 'UPixelStreamingMediaIOOutput::MediaCapture' has a wrong offset!");

}


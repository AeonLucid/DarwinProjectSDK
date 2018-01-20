#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MixerInteractivity_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MixerInteractivity.MixerInteractivityBlueprintEventSource
// 0x00F0 (0x0118 - 0x0028)
class UMixerInteractivityBlueprintEventSource : public UObject
{
public:
	struct FScriptMulticastDelegate                    ParticipantJoinedDelegate;                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    ParticipantLeftDelegate;                                  // 0x0038(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    ParticipantInputDisabledDelegate;                         // 0x0048(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    BroadcastingStartedDelegate;                              // 0x0058(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    BroadcastingStoppedDelegate;                              // 0x0068(0x0010) (ZeroConstructor, InstancedReference)
	TMap<struct FName, struct FMixerButtonEventDynamicDelegateWrapper> ButtonDelegates;                                          // 0x0078(0x0050) (ZeroConstructor)
	TMap<struct FName, struct FMixerStickEventDynamicDelegateWrapper> StickDelegates;                                           // 0x00C8(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MixerInteractivity.MixerInteractivityBlueprintEventSource");
		return ptr;
	}

};


// Class MixerInteractivity.MixerDelegateBinding
// 0x0048 (0x0070 - 0x0028)
class UMixerDelegateBinding : public UDynamicBlueprintBinding
{
public:
	struct FName                                       ParticipantJoinedBinding;                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ParticipantLeftBinding;                                   // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ParticipantInputDisabledBinding;                          // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BroadcastingStartedBinding;                               // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BroadcastingStoppedBinding;                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FMixerButtonEventBinding>            ButtonEventBindings;                                      // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FMixerStickEventBinding>             StickEventBindings;                                       // 0x0060(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MixerInteractivity.MixerDelegateBinding");
		return ptr;
	}

};


// Class MixerInteractivity.MixerInteractivityBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UMixerInteractivityBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MixerInteractivity.MixerInteractivityBlueprintLibrary");
		return ptr;
	}


	void STATIC_TriggerButtonCooldown(const struct FMixerButtonReference& Button, const struct FTimespan& Cooldown);
	void STATIC_StopInteractivityNonLatent();
	void STATIC_StopInteractivityLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void STATIC_StartInteractivityNonLatent();
	void STATIC_StartInteractivityLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void STATIC_SetCurrentScene(const struct FMixerSceneReference& Scene, const struct FMixerGroupReference& Group);
	void STATIC_MoveParticipantToGroup(const struct FMixerGroupReference& Group, int ParticipantId);
	void STATIC_LoginSilently(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FLatentActionInfo& LatentInfo);
	void STATIC_GetStickState(const struct FMixerStickReference& Stick, int ParticipantId, float* XAxis, float* YAxis, bool* Enabled);
	void STATIC_GetStickDescription(const struct FMixerStickReference& Stick, struct FText* HelpText);
	void STATIC_GetRemoteParticipantInfo(int ParticipantId, bool* IsParticipating, struct FString* Name, int* Level, struct FMixerGroupReference* Group, bool* InputEnabled, struct FDateTime* ConnectedAt, struct FDateTime* LastInputAt);
	void STATIC_GetParticipantsInGroup(const struct FMixerGroupReference& Group, TArray<int>* ParticipantIds);
	struct FName STATIC_GetName(const struct FMixerObjectReference& Obj);
	void STATIC_GetLoggedInUserInfo(int* UserId, bool* IsLoggedIn, struct FString* Name, int* Level, int* Experience, int* Sparks);
	void STATIC_GetButtonState(const struct FMixerButtonReference& Button, int ParticipantId, struct FTimespan* RemainingCooldown, float* progress, int* DownCount, int* PressCount, int* UpCount, bool* Enabled);
	void STATIC_GetButtonDescription(const struct FMixerButtonReference& Button, struct FText* ButtonText, struct FText* HelpText, int* SparkCost);
	void STATIC_CaptureSparkTransaction(const struct FMixerTransactionId& TransactionId);
};


// Class MixerInteractivity.MixerInteractivitySettings
// 0x0088 (0x00B0 - 0x0028)
class UMixerInteractivitySettings : public UObject
{
public:
	struct FString                                     ClientId;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     RedirectUri;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     Sandbox;                                                  // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     GameName;                                                 // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	int                                                GameVersionId;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FName>                               CachedButtons;                                            // 0x0070(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FName>                               CachedSticks;                                             // 0x0080(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FName>                               CachedScenes;                                             // 0x0090(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FMixerPredefinedGroup>               DesignTimeGroups;                                         // 0x00A0(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MixerInteractivity.MixerInteractivitySettings");
		return ptr;
	}

};


// Class MixerInteractivity.MixerInteractivityUserSettings
// 0x0020 (0x0048 - 0x0028)
class UMixerInteractivityUserSettings : public UObject
{
public:
	struct FString                                     RefreshToken;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     AccessToken;                                              // 0x0038(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MixerInteractivity.MixerInteractivityUserSettings");
		return ptr;
	}

};


// Class MixerInteractivity.MixerLoginPane
// 0x0038 (0x0130 - 0x00F8)
class UMixerLoginPane : public UWidget
{
public:
	struct FColor                                      BackgroundColor;                                          // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               AllowSilentLogin;                                         // 0x00FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAuthCodeReady;                                          // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUIFlowFinished;                                         // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MixerInteractivity.MixerLoginPane");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

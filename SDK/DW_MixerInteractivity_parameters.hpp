#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MixerInteractivity_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.TriggerButtonCooldown
struct UMixerInteractivityBlueprintLibrary_TriggerButtonCooldown_Params
{
	struct FMixerButtonReference                       Button;                                                   // (Parm)
	struct FTimespan                                   Cooldown;                                                 // (Parm)
};

// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.StopInteractivityNonLatent
struct UMixerInteractivityBlueprintLibrary_StopInteractivityNonLatent_Params
{
};

// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.StopInteractivityLatent
struct UMixerInteractivityBlueprintLibrary_StopInteractivityLatent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.StartInteractivityNonLatent
struct UMixerInteractivityBlueprintLibrary_StartInteractivityNonLatent_Params
{
};

// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.StartInteractivityLatent
struct UMixerInteractivityBlueprintLibrary_StartInteractivityLatent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.SetCurrentScene
struct UMixerInteractivityBlueprintLibrary_SetCurrentScene_Params
{
	struct FMixerSceneReference                        Scene;                                                    // (Parm)
	struct FMixerGroupReference                        Group;                                                    // (Parm)
};

// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.MoveParticipantToGroup
struct UMixerInteractivityBlueprintLibrary_MoveParticipantToGroup_Params
{
	struct FMixerGroupReference                        Group;                                                    // (Parm)
	int                                                ParticipantId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.LoginSilently
struct UMixerInteractivityBlueprintLibrary_LoginSilently_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetStickState
struct UMixerInteractivityBlueprintLibrary_GetStickState_Params
{
	struct FMixerStickReference                        Stick;                                                    // (Parm)
	float                                              XAxis;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              YAxis;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ParticipantId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetStickDescription
struct UMixerInteractivityBlueprintLibrary_GetStickDescription_Params
{
	struct FMixerStickReference                        Stick;                                                    // (Parm)
	struct FText                                       HelpText;                                                 // (Parm, OutParm)
};

// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetRemoteParticipantInfo
struct UMixerInteractivityBlueprintLibrary_GetRemoteParticipantInfo_Params
{
	int                                                ParticipantId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsParticipating;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
	int                                                Level;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FMixerGroupReference                        Group;                                                    // (Parm, OutParm)
	bool                                               InputEnabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   ConnectedAt;                                              // (Parm, OutParm)
	struct FDateTime                                   LastInputAt;                                              // (Parm, OutParm)
};

// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetParticipantsInGroup
struct UMixerInteractivityBlueprintLibrary_GetParticipantsInGroup_Params
{
	struct FMixerGroupReference                        Group;                                                    // (Parm)
	TArray<int>                                        ParticipantIds;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetName
struct UMixerInteractivityBlueprintLibrary_GetName_Params
{
	struct FMixerObjectReference                       Obj;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetLoggedInUserInfo
struct UMixerInteractivityBlueprintLibrary_GetLoggedInUserInfo_Params
{
	int                                                UserId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLoggedIn;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
	int                                                Level;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Experience;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Sparks;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetButtonState
struct UMixerInteractivityBlueprintLibrary_GetButtonState_Params
{
	struct FMixerButtonReference                       Button;                                                   // (Parm)
	struct FTimespan                                   RemainingCooldown;                                        // (Parm, OutParm)
	float                                              progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                DownCount;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                PressCount;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                UpCount;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ParticipantId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetButtonDescription
struct UMixerInteractivityBlueprintLibrary_GetButtonDescription_Params
{
	struct FMixerButtonReference                       Button;                                                   // (Parm)
	struct FText                                       ButtonText;                                               // (Parm, OutParm)
	struct FText                                       HelpText;                                                 // (Parm, OutParm)
	int                                                SparkCost;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.CaptureSparkTransaction
struct UMixerInteractivityBlueprintLibrary_CaptureSparkTransaction_Params
{
	struct FMixerTransactionId                         TransactionId;                                            // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

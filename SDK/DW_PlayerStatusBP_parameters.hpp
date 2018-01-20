#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PlayerStatusBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerStatusBP.PlayerStatusBP_C.Key Rebinding
struct UPlayerStatusBP_C_Key_Rebinding_Params
{
	int                                                Player_index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.UpdatePodiumRank
struct UPlayerStatusBP_C_UpdatePodiumRank_Params
{
	int                                                PodiumRank;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.Initialize
struct UPlayerStatusBP_C_Initialize_Params
{
	struct FString                                     playerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                DarwinUniqueID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventOnMouseHidden
struct UPlayerStatusBP_C_EventOnMouseHidden_Params
{
};

// Function PlayerStatusBP.PlayerStatusBP_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature
struct UPlayerStatusBP_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerStatusBP.PlayerStatusBP_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_110_OnButtonHoverEvent__DelegateSignature
struct UPlayerStatusBP_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_110_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerStatusBP.PlayerStatusBP_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature
struct UPlayerStatusBP_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventUpdatePlayerIndex
struct UPlayerStatusBP_C_EventUpdatePlayerIndex_Params
{
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               playerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventEnterCamStateCharacter
struct UPlayerStatusBP_C_EventEnterCamStateCharacter_Params
{
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.MouseOverON
struct UPlayerStatusBP_C_MouseOverON_Params
{
};

// Function PlayerStatusBP.PlayerStatusBP_C.MouseOverOFF
struct UPlayerStatusBP_C_MouseOverOFF_Params
{
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventLeaveCamStateCharacter
struct UPlayerStatusBP_C_EventLeaveCamStateCharacter_Params
{
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventPlayerIsDead
struct UPlayerStatusBP_C_EventPlayerIsDead_Params
{
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PodiumRank;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              firstDeath;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventUpdatePlayerHealth
struct UPlayerStatusBP_C_EventUpdatePlayerHealth_Params
{
	float*                                             healthNormalized;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventUpdatePlayerColdFactor
struct UPlayerStatusBP_C_EventUpdatePlayerColdFactor_Params
{
	float*                                             coldFactorNormalized;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.BndEvt__Button_Thumbnail_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct UPlayerStatusBP_C_BndEvt__Button_Thumbnail_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventUpdateNumberOfPlayersAtGameStart
struct UPlayerStatusBP_C_EventUpdateNumberOfPlayersAtGameStart_Params
{
	int*                                               numberAtGameStart;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventPlayerAllianceFormed
struct UPlayerStatusBP_C_EventPlayerAllianceFormed_Params
{
	int*                                               firstPlayerID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               secondPlayerID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBloodPact;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventPlayerAllianceBroken
struct UPlayerStatusBP_C_EventPlayerAllianceBroken_Params
{
	int*                                               firstPlayerID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               secondPlayerID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventPlayerLeftGame
struct UPlayerStatusBP_C_EventPlayerLeftGame_Params
{
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.BndEvt__Button_Thumbnail_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UPlayerStatusBP_C_BndEvt__Button_Thumbnail_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerStatusBP.PlayerStatusBP_C.Construct
struct UPlayerStatusBP_C_Construct_Params
{
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventUpdatePodiumRank
struct UPlayerStatusBP_C_EventUpdatePodiumRank_Params
{
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PodiumRank;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventUpdatePlayerGradient
struct UPlayerStatusBP_C_EventUpdatePlayerGradient_Params
{
	struct FDarwinColorGradient*                       payerGradient;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventManHuntEnd
struct UPlayerStatusBP_C_EventManHuntEnd_Params
{
	int*                                               targetCharacterID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               killerCharacterID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventManHuntStart
struct UPlayerStatusBP_C_EventManHuntStart_Params
{
	int*                                               targetCharacterID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.BndEvt__Button_Thumbnail_K2Node_ComponentBoundEvent_88_OnButtonHoverEvent__DelegateSignature
struct UPlayerStatusBP_C_BndEvt__Button_Thumbnail_K2Node_ComponentBoundEvent_88_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerStatusBP.PlayerStatusBP_C.SDPowerUnSelected
struct UPlayerStatusBP_C_SDPowerUnSelected_Params
{
	bool                                               FromWorld;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.SDPowerSelected
struct UPlayerStatusBP_C_SDPowerSelected_Params
{
	bool                                               FromWorld;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventGameStartsNow
struct UPlayerStatusBP_C_EventGameStartsNow_Params
{
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventGameHasStarted
struct UPlayerStatusBP_C_EventGameHasStarted_Params
{
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventInputResetToDefault
struct UPlayerStatusBP_C_EventInputResetToDefault_Params
{
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventInputRebindSucceeded
struct UPlayerStatusBP_C_EventInputRebindSucceeded_Params
{
	struct FName*                                      ActionToRebind;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText*                                      NewKeyName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventPlayerSpeakStart
struct UPlayerStatusBP_C_EventPlayerSpeakStart_Params
{
	int*                                               UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.EventPlayerSpeakEnd
struct UPlayerStatusBP_C_EventPlayerSpeakEnd_Params
{
	int*                                               UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBP.PlayerStatusBP_C.ExecuteUbergraph_PlayerStatusBP
struct UPlayerStatusBP_C_ExecuteUbergraph_PlayerStatusBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

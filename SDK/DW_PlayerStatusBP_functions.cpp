// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PlayerStatusBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerStatusBP.PlayerStatusBP_C.Key Rebinding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player_index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::Key_Rebinding(int Player_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.Key Rebinding");

	UPlayerStatusBP_C_Key_Rebinding_Params params;
	params.Player_index = Player_index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.UpdatePodiumRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PodiumRank                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::UpdatePodiumRank(int PodiumRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.UpdatePodiumRank");

	UPlayerStatusBP_C_UpdatePodiumRank_Params params;
	params.PodiumRank = PodiumRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DarwinUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::Initialize(int DarwinUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.Initialize");

	UPlayerStatusBP_C_Initialize_Params params;
	params.DarwinUniqueID = DarwinUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventUpdatePlayerIndex
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           playerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::EventUpdatePlayerIndex(int* playerID, int* playerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventUpdatePlayerIndex");

	UPlayerStatusBP_C_EventUpdatePlayerIndex_Params params;
	params.playerID = playerID;
	params.playerIndex = playerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerStatusBP_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature");

	UPlayerStatusBP_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventEnterCamStateCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::EventEnterCamStateCharacter(int* playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventEnterCamStateCharacter");

	UPlayerStatusBP_C_EventEnterCamStateCharacter_Params params;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.MouseOverON
// (BlueprintCallable, BlueprintEvent)

void UPlayerStatusBP_C::MouseOverON()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.MouseOverON");

	UPlayerStatusBP_C_MouseOverON_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.MouseOverOFF
// (BlueprintCallable, BlueprintEvent)

void UPlayerStatusBP_C::MouseOverOFF()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.MouseOverOFF");

	UPlayerStatusBP_C_MouseOverOFF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventLeaveCamStateCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::EventLeaveCamStateCharacter(int* playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventLeaveCamStateCharacter");

	UPlayerStatusBP_C_EventLeaveCamStateCharacter_Params params;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_110_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerStatusBP_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_110_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_110_OnButtonHoverEvent__DelegateSignature");

	UPlayerStatusBP_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_110_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventPlayerIsDead
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PodiumRank                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          firstDeath                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::EventPlayerIsDead(int* playerID, int* PodiumRank, bool* firstDeath)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventPlayerIsDead");

	UPlayerStatusBP_C_EventPlayerIsDead_Params params;
	params.playerID = playerID;
	params.PodiumRank = PodiumRank;
	params.firstDeath = firstDeath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventPlayerLeftGame
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::EventPlayerLeftGame(int* playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventPlayerLeftGame");

	UPlayerStatusBP_C_EventPlayerLeftGame_Params params;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerStatusBP_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature");

	UPlayerStatusBP_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.BndEvt__Button_Thumbnail_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerStatusBP_C::BndEvt__Button_Thumbnail_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.BndEvt__Button_Thumbnail_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UPlayerStatusBP_C_BndEvt__Button_Thumbnail_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.BndEvt__Button_Thumbnail_K2Node_ComponentBoundEvent_88_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerStatusBP_C::BndEvt__Button_Thumbnail_K2Node_ComponentBoundEvent_88_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.BndEvt__Button_Thumbnail_K2Node_ComponentBoundEvent_88_OnButtonHoverEvent__DelegateSignature");

	UPlayerStatusBP_C_BndEvt__Button_Thumbnail_K2Node_ComponentBoundEvent_88_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventUpdatePlayerHealth
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         healthNormalized               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::EventUpdatePlayerHealth(float* healthNormalized, int* playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventUpdatePlayerHealth");

	UPlayerStatusBP_C_EventUpdatePlayerHealth_Params params;
	params.healthNormalized = healthNormalized;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventUpdatePlayerColdFactor
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         coldFactorNormalized           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::EventUpdatePlayerColdFactor(float* coldFactorNormalized, int* playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventUpdatePlayerColdFactor");

	UPlayerStatusBP_C_EventUpdatePlayerColdFactor_Params params;
	params.coldFactorNormalized = coldFactorNormalized;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventUpdateNumberOfPlayersAtGameStart
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           numberAtGameStart              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::EventUpdateNumberOfPlayersAtGameStart(int* numberAtGameStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventUpdateNumberOfPlayersAtGameStart");

	UPlayerStatusBP_C_EventUpdateNumberOfPlayersAtGameStart_Params params;
	params.numberAtGameStart = numberAtGameStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventPlayerAllianceFormed
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           firstPlayerID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           secondPlayerID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBloodPact                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::EventPlayerAllianceFormed(int* firstPlayerID, int* secondPlayerID, bool* bBloodPact)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventPlayerAllianceFormed");

	UPlayerStatusBP_C_EventPlayerAllianceFormed_Params params;
	params.firstPlayerID = firstPlayerID;
	params.secondPlayerID = secondPlayerID;
	params.bBloodPact = bBloodPact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventOnMouseHidden
// (Event, Public, BlueprintEvent)

void UPlayerStatusBP_C::EventOnMouseHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventOnMouseHidden");

	UPlayerStatusBP_C_EventOnMouseHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventPlayerAllianceBroken
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           firstPlayerID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           secondPlayerID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::EventPlayerAllianceBroken(int* firstPlayerID, int* secondPlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventPlayerAllianceBroken");

	UPlayerStatusBP_C_EventPlayerAllianceBroken_Params params;
	params.firstPlayerID = firstPlayerID;
	params.secondPlayerID = secondPlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerStatusBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.Construct");

	UPlayerStatusBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventUpdatePodiumRank
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PodiumRank                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::EventUpdatePodiumRank(int* playerID, int* PodiumRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventUpdatePodiumRank");

	UPlayerStatusBP_C_EventUpdatePodiumRank_Params params;
	params.playerID = playerID;
	params.PodiumRank = PodiumRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventUpdatePlayerGradient
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FDarwinColorGradient*   payerGradient                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::EventUpdatePlayerGradient(struct FDarwinColorGradient* payerGradient, int* playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventUpdatePlayerGradient");

	UPlayerStatusBP_C_EventUpdatePlayerGradient_Params params;
	params.payerGradient = payerGradient;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventManHuntEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           targetCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           killerCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isDead                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::EventManHuntEnd(int* targetCharacterID, int* killerCharacterID, bool* isDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventManHuntEnd");

	UPlayerStatusBP_C_EventManHuntEnd_Params params;
	params.targetCharacterID = targetCharacterID;
	params.killerCharacterID = killerCharacterID;
	params.isDead = isDead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventManHuntStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           targetCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UPlayerStatusBP_C::EventManHuntStart(int* targetCharacterID, struct FVector2D* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventManHuntStart");

	UPlayerStatusBP_C_EventManHuntStart_Params params;
	params.targetCharacterID = targetCharacterID;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.SDPowerUnSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FromWorld                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::SDPowerUnSelected(bool FromWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.SDPowerUnSelected");

	UPlayerStatusBP_C_SDPowerUnSelected_Params params;
	params.FromWorld = FromWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.SDPowerSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FromWorld                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::SDPowerSelected(bool FromWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.SDPowerSelected");

	UPlayerStatusBP_C_SDPowerSelected_Params params;
	params.FromWorld = FromWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.BndEvt__Button_Thumbnail_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerStatusBP_C::BndEvt__Button_Thumbnail_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.BndEvt__Button_Thumbnail_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UPlayerStatusBP_C_BndEvt__Button_Thumbnail_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventGameStartsNow
// (Event, Public, BlueprintEvent)

void UPlayerStatusBP_C::EventGameStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventGameStartsNow");

	UPlayerStatusBP_C_EventGameStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventGameHasStarted
// (Event, Public, BlueprintEvent)

void UPlayerStatusBP_C::EventGameHasStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventGameHasStarted");

	UPlayerStatusBP_C_EventGameHasStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventInputResetToDefault
// (Event, Public, BlueprintEvent)

void UPlayerStatusBP_C::EventInputResetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventInputResetToDefault");

	UPlayerStatusBP_C_EventInputResetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventInputRebindSucceeded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName*                  ActionToRebind                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FText*                  NewKeyName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPlayerStatusBP_C::EventInputRebindSucceeded(struct FName* ActionToRebind, struct FText* NewKeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventInputRebindSucceeded");

	UPlayerStatusBP_C_EventInputRebindSucceeded_Params params;
	params.ActionToRebind = ActionToRebind;
	params.NewKeyName = NewKeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventPlayerSpeakStart
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::EventPlayerSpeakStart(int* UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventPlayerSpeakStart");

	UPlayerStatusBP_C_EventPlayerSpeakStart_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventPlayerSpeakEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::EventPlayerSpeakEnd(int* UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventPlayerSpeakEnd");

	UPlayerStatusBP_C_EventPlayerSpeakEnd_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UPlayerStatusBP_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventInputSourceChanged");

	UPlayerStatusBP_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.InputSourceInit
// (BlueprintCallable, BlueprintEvent)

void UPlayerStatusBP_C::InputSourceInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.InputSourceInit");

	UPlayerStatusBP_C_InputSourceInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.EventUpdateManHuntInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           targetCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::EventUpdateManHuntInfo(struct FString* Time, int* targetCharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.EventUpdateManHuntInfo");

	UPlayerStatusBP_C_EventUpdateManHuntInfo_Params params;
	params.Time = Time;
	params.targetCharacterID = targetCharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBP.PlayerStatusBP_C.ExecuteUbergraph_PlayerStatusBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBP_C::ExecuteUbergraph_PlayerStatusBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBP.PlayerStatusBP_C.ExecuteUbergraph_PlayerStatusBP");

	UPlayerStatusBP_C_ExecuteUbergraph_PlayerStatusBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

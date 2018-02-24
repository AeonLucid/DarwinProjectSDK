// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinMainCharacterWidgetBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.Kill All UI
// (BlueprintCallable, BlueprintEvent)

void UDarwinMainCharacterWidgetBP_C::Kill_All_UI()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.Kill All UI");

	UDarwinMainCharacterWidgetBP_C_Kill_All_UI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventCannotCraftInLobby
// (Event, Public, BlueprintEvent)

void UDarwinMainCharacterWidgetBP_C::EventCannotCraftInLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventCannotCraftInLobby");

	UDarwinMainCharacterWidgetBP_C_EventCannotCraftInLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventCannotUseItemInLobby
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinMainCharacterWidgetBP_C::EventCannotUseItemInLobby(int* Index, EDarwinItemTypeEnum* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventCannotUseItemInLobby");

	UDarwinMainCharacterWidgetBP_C_EventCannotUseItemInLobby_Params params;
	params.Index = Index;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventCannotSendAllyFlagInLobby
// (Event, Public, BlueprintEvent)

void UDarwinMainCharacterWidgetBP_C::EventCannotSendAllyFlagInLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventCannotSendAllyFlagInLobby");

	UDarwinMainCharacterWidgetBP_C_EventCannotSendAllyFlagInLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventInAirEnd
// (Event, Public, BlueprintEvent)

void UDarwinMainCharacterWidgetBP_C::EventInAirEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventInAirEnd");

	UDarwinMainCharacterWidgetBP_C_EventInAirEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventInAirStart
// (Event, Public, BlueprintEvent)

void UDarwinMainCharacterWidgetBP_C::EventInAirStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventInAirStart");

	UDarwinMainCharacterWidgetBP_C_EventInAirStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.Next on End Game
// (BlueprintCallable, BlueprintEvent)

void UDarwinMainCharacterWidgetBP_C::Next_on_End_Game()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.Next on End Game");

	UDarwinMainCharacterWidgetBP_C_Next_on_End_Game_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventInventoryActionFail
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum*           ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinMainCharacterWidgetBP_C::EventInventoryActionFail(int* Index, EDarwinItemTypeEnum* ItemType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventInventoryActionFail");

	UDarwinMainCharacterWidgetBP_C_EventInventoryActionFail_Params params;
	params.Index = Index;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventHitBigTree
// (Event, Public, BlueprintEvent)

void UDarwinMainCharacterWidgetBP_C::EventHitBigTree()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventHitBigTree");

	UDarwinMainCharacterWidgetBP_C_EventHitBigTree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventHitAlly
// (Event, Public, BlueprintEvent)

void UDarwinMainCharacterWidgetBP_C::EventHitAlly()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventHitAlly");

	UDarwinMainCharacterWidgetBP_C_EventHitAlly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventNumberOfGamesPlayed
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           nbGamesPlayed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinMainCharacterWidgetBP_C::EventNumberOfGamesPlayed(int* nbGamesPlayed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventNumberOfGamesPlayed");

	UDarwinMainCharacterWidgetBP_C_EventNumberOfGamesPlayed_Params params;
	params.nbGamesPlayed = nbGamesPlayed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDarwinMainCharacterWidgetBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.Construct");

	UDarwinMainCharacterWidgetBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventBloodPactDeadNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           attackerUniqueID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinMainCharacterWidgetBP_C::EventBloodPactDeadNotification(EDarwinDamageTypeEnum* Type, int* attackerUniqueID, int* victimUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventBloodPactDeadNotification");

	UDarwinMainCharacterWidgetBP_C_EventBloodPactDeadNotification_Params params;
	params.Type = Type;
	params.attackerUniqueID = attackerUniqueID;
	params.victimUniqueID = victimUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventBloodPactReviveNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           reviverUniqueID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinMainCharacterWidgetBP_C::EventBloodPactReviveNotification(int* reviverUniqueID, int* victimUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventBloodPactReviveNotification");

	UDarwinMainCharacterWidgetBP_C_EventBloodPactReviveNotification_Params params;
	params.reviverUniqueID = reviverUniqueID;
	params.victimUniqueID = victimUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinMainCharacterWidgetBP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.Tick");

	UDarwinMainCharacterWidgetBP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventGameStartsNow
// (Event, Public, BlueprintEvent)

void UDarwinMainCharacterWidgetBP_C::EventGameStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventGameStartsNow");

	UDarwinMainCharacterWidgetBP_C_EventGameStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.ShowMainWidget
// (BlueprintCallable, BlueprintEvent)

void UDarwinMainCharacterWidgetBP_C::ShowMainWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.ShowMainWidget");

	UDarwinMainCharacterWidgetBP_C_ShowMainWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventIsDead
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           PodiumRank                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          firstDeath                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinMainCharacterWidgetBP_C::EventIsDead(int* PodiumRank, bool* firstDeath)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventIsDead");

	UDarwinMainCharacterWidgetBP_C_EventIsDead_Params params;
	params.PodiumRank = PodiumRank;
	params.firstDeath = firstDeath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.HideMainWidget
// (BlueprintCallable, BlueprintEvent)

void UDarwinMainCharacterWidgetBP_C::HideMainWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.HideMainWidget");

	UDarwinMainCharacterWidgetBP_C_HideMainWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventPlayerIsWinner
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBloodPactActive               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           allyID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinMainCharacterWidgetBP_C::EventPlayerIsWinner(int* playerID, bool* bBloodPactActive, int* allyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventPlayerIsWinner");

	UDarwinMainCharacterWidgetBP_C_EventPlayerIsWinner_Params params;
	params.playerID = playerID;
	params.bBloodPactActive = bBloodPactActive;
	params.allyID = allyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventDeathNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           nbPlayersLeft                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           attackerUniqueID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFirstBlood                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinMainCharacterWidgetBP_C::EventDeathNotification(EDarwinDamageTypeEnum* Type, int* nbPlayersLeft, int* attackerUniqueID, int* victimUniqueID, bool* bFirstBlood)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventDeathNotification");

	UDarwinMainCharacterWidgetBP_C_EventDeathNotification_Params params;
	params.Type = Type;
	params.nbPlayersLeft = nbPlayersLeft;
	params.attackerUniqueID = attackerUniqueID;
	params.victimUniqueID = victimUniqueID;
	params.bFirstBlood = bFirstBlood;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventTeleportAimEnd
// (Event, Public, BlueprintEvent)

void UDarwinMainCharacterWidgetBP_C::EventTeleportAimEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventTeleportAimEnd");

	UDarwinMainCharacterWidgetBP_C_EventTeleportAimEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDarwinMainCharacterWidgetBP_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.Destruct");

	UDarwinMainCharacterWidgetBP_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventDamageNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           attackerUniqueID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinMainCharacterWidgetBP_C::EventDamageNotification(EDarwinDamageTypeEnum* Type, float* Damage, int* attackerUniqueID, int* victimUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventDamageNotification");

	UDarwinMainCharacterWidgetBP_C_EventDamageNotification_Params params;
	params.Type = Type;
	params.Damage = Damage;
	params.attackerUniqueID = attackerUniqueID;
	params.victimUniqueID = victimUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventTeleportAimStart
// (Event, Public, BlueprintEvent)

void UDarwinMainCharacterWidgetBP_C::EventTeleportAimStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventTeleportAimStart");

	UDarwinMainCharacterWidgetBP_C_EventTeleportAimStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventPrivateMatchNeedsMorePlayers
// (Event, Public, BlueprintEvent)

void UDarwinMainCharacterWidgetBP_C::EventPrivateMatchNeedsMorePlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventPrivateMatchNeedsMorePlayers");

	UDarwinMainCharacterWidgetBP_C_EventPrivateMatchNeedsMorePlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.ExecuteUbergraph_DarwinMainCharacterWidgetBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinMainCharacterWidgetBP_C::ExecuteUbergraph_DarwinMainCharacterWidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.ExecuteUbergraph_DarwinMainCharacterWidgetBP");

	UDarwinMainCharacterWidgetBP_C_ExecuteUbergraph_DarwinMainCharacterWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

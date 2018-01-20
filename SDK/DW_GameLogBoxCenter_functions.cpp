// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_GameLogBoxCenter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameLogBoxCenter.GameLogBoxCenter_C.EventDamageNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           attackerUniqueID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameLogBoxCenter_C::EventDamageNotification(EDarwinDamageTypeEnum* Type, float* Damage, int* attackerUniqueID, int* victimUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLogBoxCenter.GameLogBoxCenter_C.EventDamageNotification");

	UGameLogBoxCenter_C_EventDamageNotification_Params params;
	params.Type = Type;
	params.Damage = Damage;
	params.attackerUniqueID = attackerUniqueID;
	params.victimUniqueID = victimUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLogBoxCenter.GameLogBoxCenter_C.EventDeathNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           nbPlayersLeft                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           attackerUniqueID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFirstBlood                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameLogBoxCenter_C::EventDeathNotification(EDarwinDamageTypeEnum* Type, int* nbPlayersLeft, int* attackerUniqueID, int* victimUniqueID, bool* bFirstBlood)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLogBoxCenter.GameLogBoxCenter_C.EventDeathNotification");

	UGameLogBoxCenter_C_EventDeathNotification_Params params;
	params.Type = Type;
	params.nbPlayersLeft = nbPlayersLeft;
	params.attackerUniqueID = attackerUniqueID;
	params.victimUniqueID = victimUniqueID;
	params.bFirstBlood = bFirstBlood;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLogBoxCenter.GameLogBoxCenter_C.EventArmorBreakNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           attackerUniqueID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameLogBoxCenter_C::EventArmorBreakNotification(EDarwinDamageTypeEnum* Type, int* attackerUniqueID, int* victimUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLogBoxCenter.GameLogBoxCenter_C.EventArmorBreakNotification");

	UGameLogBoxCenter_C_EventArmorBreakNotification_Params params;
	params.Type = Type;
	params.attackerUniqueID = attackerUniqueID;
	params.victimUniqueID = victimUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLogBoxCenter.GameLogBoxCenter_C.EventPlayerAllianceFormed
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           firstPlayerID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           secondPlayerID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBloodPact                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameLogBoxCenter_C::EventPlayerAllianceFormed(int* firstPlayerID, int* secondPlayerID, bool* bBloodPact)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLogBoxCenter.GameLogBoxCenter_C.EventPlayerAllianceFormed");

	UGameLogBoxCenter_C_EventPlayerAllianceFormed_Params params;
	params.firstPlayerID = firstPlayerID;
	params.secondPlayerID = secondPlayerID;
	params.bBloodPact = bBloodPact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLogBoxCenter.GameLogBoxCenter_C.EventPlayerAllianceBroken
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           firstPlayerID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           secondPlayerID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameLogBoxCenter_C::EventPlayerAllianceBroken(int* firstPlayerID, int* secondPlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLogBoxCenter.GameLogBoxCenter_C.EventPlayerAllianceBroken");

	UGameLogBoxCenter_C_EventPlayerAllianceBroken_Params params;
	params.firstPlayerID = firstPlayerID;
	params.secondPlayerID = secondPlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLogBoxCenter.GameLogBoxCenter_C.EventPylonJustActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameLogBoxCenter_C::EventPylonJustActivated(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLogBoxCenter.GameLogBoxCenter_C.EventPylonJustActivated");

	UGameLogBoxCenter_C_EventPylonJustActivated_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLogBoxCenter.GameLogBoxCenter_C.EventNewClueInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                playerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EDarwinItemTypeEnum*           clueType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameLogBoxCenter_C::EventNewClueInfo(struct FString* Time, struct FString* playerName, EDarwinItemTypeEnum* clueType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLogBoxCenter.GameLogBoxCenter_C.EventNewClueInfo");

	UGameLogBoxCenter_C_EventNewClueInfo_Params params;
	params.Time = Time;
	params.playerName = playerName;
	params.clueType = clueType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLogBoxCenter.GameLogBoxCenter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameLogBoxCenter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLogBoxCenter.GameLogBoxCenter_C.Construct");

	UGameLogBoxCenter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLogBoxCenter.GameLogBoxCenter_C.Trim
// (BlueprintCallable, BlueprintEvent)

void UGameLogBoxCenter_C::Trim()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLogBoxCenter.GameLogBoxCenter_C.Trim");

	UGameLogBoxCenter_C_Trim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLogBoxCenter.GameLogBoxCenter_C.EventZoneNowForbidden
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UGameLogBoxCenter_C::EventZoneNowForbidden(struct FString* zoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLogBoxCenter.GameLogBoxCenter_C.EventZoneNowForbidden");

	UGameLogBoxCenter_C_EventZoneNowForbidden_Params params;
	params.zoneName = zoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLogBoxCenter.GameLogBoxCenter_C.EventZoneSoonForbidden
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UGameLogBoxCenter_C::EventZoneSoonForbidden(struct FString* zoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLogBoxCenter.GameLogBoxCenter_C.EventZoneSoonForbidden");

	UGameLogBoxCenter_C_EventZoneSoonForbidden_Params params;
	params.zoneName = zoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLogBoxCenter.GameLogBoxCenter_C.EventNuclearBlastCountdownInitiated
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UGameLogBoxCenter_C::EventNuclearBlastCountdownInitiated(struct FString* zoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLogBoxCenter.GameLogBoxCenter_C.EventNuclearBlastCountdownInitiated");

	UGameLogBoxCenter_C_EventNuclearBlastCountdownInitiated_Params params;
	params.zoneName = zoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLogBoxCenter.GameLogBoxCenter_C.EventNuclearBlastStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UGameLogBoxCenter_C::EventNuclearBlastStarted(struct FString* zoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLogBoxCenter.GameLogBoxCenter_C.EventNuclearBlastStarted");

	UGameLogBoxCenter_C_EventNuclearBlastStarted_Params params;
	params.zoneName = zoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLogBoxCenter.GameLogBoxCenter_C.EventCraftableToolSprungNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           attackerUniqueID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameLogBoxCenter_C::EventCraftableToolSprungNotification(EDarwinItemTypeEnum* ItemType, int* attackerUniqueID, int* victimUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLogBoxCenter.GameLogBoxCenter_C.EventCraftableToolSprungNotification");

	UGameLogBoxCenter_C_EventCraftableToolSprungNotification_Params params;
	params.ItemType = ItemType;
	params.attackerUniqueID = attackerUniqueID;
	params.victimUniqueID = victimUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLogBoxCenter.GameLogBoxCenter_C.EventFirstBlood
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           attackerID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinDamageTypeEnum*         dmgType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameLogBoxCenter_C::EventFirstBlood(int* attackerID, int* victimID, EDarwinDamageTypeEnum* dmgType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLogBoxCenter.GameLogBoxCenter_C.EventFirstBlood");

	UGameLogBoxCenter_C_EventFirstBlood_Params params;
	params.attackerID = attackerID;
	params.victimID = victimID;
	params.dmgType = dmgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLogBoxCenter.GameLogBoxCenter_C.EventBloodPactDeadNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           attackerUniqueID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameLogBoxCenter_C::EventBloodPactDeadNotification(EDarwinDamageTypeEnum* Type, int* attackerUniqueID, int* victimUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLogBoxCenter.GameLogBoxCenter_C.EventBloodPactDeadNotification");

	UGameLogBoxCenter_C_EventBloodPactDeadNotification_Params params;
	params.Type = Type;
	params.attackerUniqueID = attackerUniqueID;
	params.victimUniqueID = victimUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLogBoxCenter.GameLogBoxCenter_C.EventBloodPactReviveNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           reviverUniqueID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameLogBoxCenter_C::EventBloodPactReviveNotification(int* reviverUniqueID, int* victimUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLogBoxCenter.GameLogBoxCenter_C.EventBloodPactReviveNotification");

	UGameLogBoxCenter_C_EventBloodPactReviveNotification_Params params;
	params.reviverUniqueID = reviverUniqueID;
	params.victimUniqueID = victimUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLogBoxCenter.GameLogBoxCenter_C.EventBloodPactDuoEleminated
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           player1ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           player2ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameLogBoxCenter_C::EventBloodPactDuoEleminated(int* player1ID, int* player2ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLogBoxCenter.GameLogBoxCenter_C.EventBloodPactDuoEleminated");

	UGameLogBoxCenter_C_EventBloodPactDuoEleminated_Params params;
	params.player1ID = player1ID;
	params.player2ID = player2ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLogBoxCenter.GameLogBoxCenter_C.ExecuteUbergraph_GameLogBoxCenter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameLogBoxCenter_C::ExecuteUbergraph_GameLogBoxCenter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLogBoxCenter.GameLogBoxCenter_C.ExecuteUbergraph_GameLogBoxCenter");

	UGameLogBoxCenter_C_ExecuteUbergraph_GameLogBoxCenter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

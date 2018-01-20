// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinAllianceWidgetBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventAllianceStart
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           allyID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAllianceWidgetBP_C::EventAllianceStart(int* allyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventAllianceStart");

	UDarwinAllianceWidgetBP_C_EventAllianceStart_Params params;
	params.allyID = allyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventUpdatePlayerHealth
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         healthNormalized               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAllianceWidgetBP_C::EventUpdatePlayerHealth(float* healthNormalized, int* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventUpdatePlayerHealth");

	UDarwinAllianceWidgetBP_C_EventUpdatePlayerHealth_Params params;
	params.healthNormalized = healthNormalized;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventUpdatePlayerColdFactor
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         coldFactorNormalized           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAllianceWidgetBP_C::EventUpdatePlayerColdFactor(float* coldFactorNormalized, int* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventUpdatePlayerColdFactor");

	UDarwinAllianceWidgetBP_C_EventUpdatePlayerColdFactor_Params params;
	params.coldFactorNormalized = coldFactorNormalized;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventPlayerAllianceBroken
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           firstPlayerID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           secondPlayerID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAllianceWidgetBP_C::EventPlayerAllianceBroken(int* firstPlayerID, int* secondPlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventPlayerAllianceBroken");

	UDarwinAllianceWidgetBP_C_EventPlayerAllianceBroken_Params params;
	params.firstPlayerID = firstPlayerID;
	params.secondPlayerID = secondPlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventPlayerCraftedPower
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum*           powerType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAllianceWidgetBP_C::EventPlayerCraftedPower(int* PlayerId, EDarwinItemTypeEnum* powerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventPlayerCraftedPower");

	UDarwinAllianceWidgetBP_C_EventPlayerCraftedPower_Params params;
	params.PlayerId = PlayerId;
	params.powerType = powerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAllianceWidgetBP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.Tick");

	UDarwinAllianceWidgetBP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventBloodPactReviveNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           reviverUniqueID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAllianceWidgetBP_C::EventBloodPactReviveNotification(int* reviverUniqueID, int* victimUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventBloodPactReviveNotification");

	UDarwinAllianceWidgetBP_C_EventBloodPactReviveNotification_Params params;
	params.reviverUniqueID = reviverUniqueID;
	params.victimUniqueID = victimUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventBloodPactDeadNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           attackerUniqueID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAllianceWidgetBP_C::EventBloodPactDeadNotification(EDarwinDamageTypeEnum* Type, int* attackerUniqueID, int* victimUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventBloodPactDeadNotification");

	UDarwinAllianceWidgetBP_C_EventBloodPactDeadNotification_Params params;
	params.Type = Type;
	params.attackerUniqueID = attackerUniqueID;
	params.victimUniqueID = victimUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventDamageNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           attackerUniqueID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAllianceWidgetBP_C::EventDamageNotification(EDarwinDamageTypeEnum* Type, float* Damage, int* attackerUniqueID, int* victimUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventDamageNotification");

	UDarwinAllianceWidgetBP_C_EventDamageNotification_Params params;
	params.Type = Type;
	params.Damage = Damage;
	params.attackerUniqueID = attackerUniqueID;
	params.victimUniqueID = victimUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventPlayerIsDead
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PodiumRank                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          firstDeath                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAllianceWidgetBP_C::EventPlayerIsDead(int* PlayerId, int* PodiumRank, bool* firstDeath)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventPlayerIsDead");

	UDarwinAllianceWidgetBP_C_EventPlayerIsDead_Params params;
	params.PlayerId = PlayerId;
	params.PodiumRank = PodiumRank;
	params.firstDeath = firstDeath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventBloodPactDeadHeartbeat
// (Event, Public, BlueprintEvent)

void UDarwinAllianceWidgetBP_C::EventBloodPactDeadHeartbeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventBloodPactDeadHeartbeat");

	UDarwinAllianceWidgetBP_C_EventBloodPactDeadHeartbeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.ExecuteUbergraph_DarwinAllianceWidgetBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAllianceWidgetBP_C::ExecuteUbergraph_DarwinAllianceWidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.ExecuteUbergraph_DarwinAllianceWidgetBP");

	UDarwinAllianceWidgetBP_C_ExecuteUbergraph_DarwinAllianceWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

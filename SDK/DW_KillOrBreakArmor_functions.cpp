// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_KillOrBreakArmor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KillOrBreakArmor.KillOrBreakArmor_C.EventDamageNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           attackerUniqueID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKillOrBreakArmor_C::EventDamageNotification(EDarwinDamageTypeEnum* Type, float* Damage, int* attackerUniqueID, int* victimUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillOrBreakArmor.KillOrBreakArmor_C.EventDamageNotification");

	UKillOrBreakArmor_C_EventDamageNotification_Params params;
	params.Type = Type;
	params.Damage = Damage;
	params.attackerUniqueID = attackerUniqueID;
	params.victimUniqueID = victimUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillOrBreakArmor.KillOrBreakArmor_C.EventPlayerAllianceBroken
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           firstPlayerID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           secondPlayerID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKillOrBreakArmor_C::EventPlayerAllianceBroken(int* firstPlayerID, int* secondPlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillOrBreakArmor.KillOrBreakArmor_C.EventPlayerAllianceBroken");

	UKillOrBreakArmor_C_EventPlayerAllianceBroken_Params params;
	params.firstPlayerID = firstPlayerID;
	params.secondPlayerID = secondPlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillOrBreakArmor.KillOrBreakArmor_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKillOrBreakArmor_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillOrBreakArmor.KillOrBreakArmor_C.Tick");

	UKillOrBreakArmor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillOrBreakArmor.KillOrBreakArmor_C.EventPlayerAllianceFormed
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           firstPlayerID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           secondPlayerID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBloodPact                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKillOrBreakArmor_C::EventPlayerAllianceFormed(int* firstPlayerID, int* secondPlayerID, bool* bBloodPact)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillOrBreakArmor.KillOrBreakArmor_C.EventPlayerAllianceFormed");

	UKillOrBreakArmor_C_EventPlayerAllianceFormed_Params params;
	params.firstPlayerID = firstPlayerID;
	params.secondPlayerID = secondPlayerID;
	params.bBloodPact = bBloodPact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillOrBreakArmor.KillOrBreakArmor_C.EventDeathNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           nbPlayersLeft                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           attackerUniqueID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFirstBlood                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKillOrBreakArmor_C::EventDeathNotification(EDarwinDamageTypeEnum* Type, int* nbPlayersLeft, int* attackerUniqueID, int* victimUniqueID, bool* bFirstBlood)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillOrBreakArmor.KillOrBreakArmor_C.EventDeathNotification");

	UKillOrBreakArmor_C_EventDeathNotification_Params params;
	params.Type = Type;
	params.nbPlayersLeft = nbPlayersLeft;
	params.attackerUniqueID = attackerUniqueID;
	params.victimUniqueID = victimUniqueID;
	params.bFirstBlood = bFirstBlood;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillOrBreakArmor.KillOrBreakArmor_C.EventArmorBreakNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           attackerUniqueID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKillOrBreakArmor_C::EventArmorBreakNotification(EDarwinDamageTypeEnum* Type, int* attackerUniqueID, int* victimUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillOrBreakArmor.KillOrBreakArmor_C.EventArmorBreakNotification");

	UKillOrBreakArmor_C_EventArmorBreakNotification_Params params;
	params.Type = Type;
	params.attackerUniqueID = attackerUniqueID;
	params.victimUniqueID = victimUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillOrBreakArmor.KillOrBreakArmor_C.ExecuteUbergraph_KillOrBreakArmor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKillOrBreakArmor_C::ExecuteUbergraph_KillOrBreakArmor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillOrBreakArmor.KillOrBreakArmor_C.ExecuteUbergraph_KillOrBreakArmor");

	UKillOrBreakArmor_C_ExecuteUbergraph_KillOrBreakArmor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

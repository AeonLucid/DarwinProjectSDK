// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DeathNotification_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DeathNotification.DeathNotification_C.EventDeathNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           nbPlayersLeft                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           attackerUniqueID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFirstBlood                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDeathNotification_C::EventDeathNotification(EDarwinDamageTypeEnum* Type, int* nbPlayersLeft, int* attackerUniqueID, int* victimUniqueID, bool* bFirstBlood)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathNotification.DeathNotification_C.EventDeathNotification");

	UDeathNotification_C_EventDeathNotification_Params params;
	params.Type = Type;
	params.nbPlayersLeft = nbPlayersLeft;
	params.attackerUniqueID = attackerUniqueID;
	params.victimUniqueID = victimUniqueID;
	params.bFirstBlood = bFirstBlood;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathNotification.DeathNotification_C.EventPlayerIsWinner
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBloodPactActive               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           allyID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDeathNotification_C::EventPlayerIsWinner(int* PlayerId, bool* bBloodPactActive, int* allyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathNotification.DeathNotification_C.EventPlayerIsWinner");

	UDeathNotification_C_EventPlayerIsWinner_Params params;
	params.PlayerId = PlayerId;
	params.bBloodPactActive = bBloodPactActive;
	params.allyID = allyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathNotification.DeathNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDeathNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathNotification.DeathNotification_C.Construct");

	UDeathNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathNotification.DeathNotification_C.DeathAnimEnd
// (BlueprintCallable, BlueprintEvent)

void UDeathNotification_C::DeathAnimEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathNotification.DeathNotification_C.DeathAnimEnd");

	UDeathNotification_C_DeathAnimEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathNotification.DeathNotification_C.ExecuteUbergraph_DeathNotification
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDeathNotification_C::ExecuteUbergraph_DeathNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathNotification.DeathNotification_C.ExecuteUbergraph_DeathNotification");

	UDeathNotification_C_ExecuteUbergraph_DeathNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

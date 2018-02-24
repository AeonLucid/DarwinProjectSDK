// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DamageTaken_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DamageTaken.DamageTaken_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player_Unique_ID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDamageTaken_C::Initialize(int Player_Unique_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DamageTaken.DamageTaken_C.Initialize");

	UDamageTaken_C_Initialize_Params params;
	params.Player_Unique_ID = Player_Unique_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DamageTaken.DamageTaken_C.EventDamageNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           attackerUniqueID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDamageTaken_C::EventDamageNotification(EDarwinDamageTypeEnum* Type, float* Damage, int* attackerUniqueID, int* victimUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DamageTaken.DamageTaken_C.EventDamageNotification");

	UDamageTaken_C_EventDamageNotification_Params params;
	params.Type = Type;
	params.Damage = Damage;
	params.attackerUniqueID = attackerUniqueID;
	params.victimUniqueID = victimUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DamageTaken.DamageTaken_C.ExecuteUbergraph_DamageTaken
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDamageTaken_C::ExecuteUbergraph_DamageTaken(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DamageTaken.DamageTaken_C.ExecuteUbergraph_DamageTaken");

	UDamageTaken_C_ExecuteUbergraph_DamageTaken_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

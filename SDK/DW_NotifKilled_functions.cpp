// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifKilled_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotifKilled.NotifKilled_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum          Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            nbPlayersLeft                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            attackerID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            victimID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifKilled_C::Initialize(EDarwinDamageTypeEnum Type, int nbPlayersLeft, int attackerID, int victimID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifKilled.NotifKilled_C.Initialize");

	UNotifKilled_C_Initialize_Params params;
	params.Type = Type;
	params.nbPlayersLeft = nbPlayersLeft;
	params.attackerID = attackerID;
	params.victimID = victimID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifKilled.NotifKilled_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifKilled_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifKilled.NotifKilled_C.Construct");

	UNotifKilled_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifKilled.NotifKilled_C.ExecuteUbergraph_NotifKilled
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifKilled_C::ExecuteUbergraph_NotifKilled(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifKilled.NotifKilled_C.ExecuteUbergraph_NotifKilled");

	UNotifKilled_C_ExecuteUbergraph_NotifKilled_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifBloodPactDead_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotifBloodPactDead.NotifBloodPactDead_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum          Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            attackerID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            victimID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifBloodPactDead_C::Initialize(EDarwinDamageTypeEnum Type, int attackerID, int victimID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifBloodPactDead.NotifBloodPactDead_C.Initialize");

	UNotifBloodPactDead_C_Initialize_Params params;
	params.Type = Type;
	params.attackerID = attackerID;
	params.victimID = victimID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifBloodPactDead.NotifBloodPactDead_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifBloodPactDead_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifBloodPactDead.NotifBloodPactDead_C.Construct");

	UNotifBloodPactDead_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifBloodPactDead.NotifBloodPactDead_C.ExecuteUbergraph_NotifBloodPactDead
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifBloodPactDead_C::ExecuteUbergraph_NotifBloodPactDead(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifBloodPactDead.NotifBloodPactDead_C.ExecuteUbergraph_NotifBloodPactDead");

	UNotifBloodPactDead_C_ExecuteUbergraph_NotifBloodPactDead_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

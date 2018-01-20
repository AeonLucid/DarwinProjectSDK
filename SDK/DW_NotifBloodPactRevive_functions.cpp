// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifBloodPactRevive_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotifBloodPactRevive.NotifBloodPactRevive_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReviverID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            victimID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifBloodPactRevive_C::Initialize(int ReviverID, int victimID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifBloodPactRevive.NotifBloodPactRevive_C.Initialize");

	UNotifBloodPactRevive_C_Initialize_Params params;
	params.ReviverID = ReviverID;
	params.victimID = victimID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifBloodPactRevive.NotifBloodPactRevive_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifBloodPactRevive_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifBloodPactRevive.NotifBloodPactRevive_C.Construct");

	UNotifBloodPactRevive_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifBloodPactRevive.NotifBloodPactRevive_C.ExecuteUbergraph_NotifBloodPactRevive
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifBloodPactRevive_C::ExecuteUbergraph_NotifBloodPactRevive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifBloodPactRevive.NotifBloodPactRevive_C.ExecuteUbergraph_NotifBloodPactRevive");

	UNotifBloodPactRevive_C_ExecuteUbergraph_NotifBloodPactRevive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

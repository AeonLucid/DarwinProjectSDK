// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifBloodPactFormed_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotifBloodPactFormed.NotifBloodPactFormed_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AllyD                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifBloodPactFormed_C::Initialize(int AllyD)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifBloodPactFormed.NotifBloodPactFormed_C.Initialize");

	UNotifBloodPactFormed_C_Initialize_Params params;
	params.AllyD = AllyD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifBloodPactFormed.NotifBloodPactFormed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifBloodPactFormed_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifBloodPactFormed.NotifBloodPactFormed_C.Construct");

	UNotifBloodPactFormed_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifBloodPactFormed.NotifBloodPactFormed_C.ExecuteUbergraph_NotifBloodPactFormed
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifBloodPactFormed_C::ExecuteUbergraph_NotifBloodPactFormed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifBloodPactFormed.NotifBloodPactFormed_C.ExecuteUbergraph_NotifBloodPactFormed");

	UNotifBloodPactFormed_C_ExecuteUbergraph_NotifBloodPactFormed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

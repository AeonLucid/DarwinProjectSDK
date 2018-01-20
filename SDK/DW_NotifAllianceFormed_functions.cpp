// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifAllianceFormed_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotifAllianceFormed.NotifAllianceFormed_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerOneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerTwoID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifAllianceFormed_C::Initialize(int PlayerOneID, int PlayerTwoID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifAllianceFormed.NotifAllianceFormed_C.Initialize");

	UNotifAllianceFormed_C_Initialize_Params params;
	params.PlayerOneID = PlayerOneID;
	params.PlayerTwoID = PlayerTwoID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifAllianceFormed.NotifAllianceFormed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifAllianceFormed_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifAllianceFormed.NotifAllianceFormed_C.Construct");

	UNotifAllianceFormed_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifAllianceFormed.NotifAllianceFormed_C.ExecuteUbergraph_NotifAllianceFormed
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifAllianceFormed_C::ExecuteUbergraph_NotifAllianceFormed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifAllianceFormed.NotifAllianceFormed_C.ExecuteUbergraph_NotifAllianceFormed");

	UNotifAllianceFormed_C_ExecuteUbergraph_NotifAllianceFormed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

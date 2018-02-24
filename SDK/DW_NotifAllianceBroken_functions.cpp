// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifAllianceBroken_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotifAllianceBroken.NotifAllianceBroken_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerOneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerTwoID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifAllianceBroken_C::Initialize(int PlayerOneID, int PlayerTwoID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifAllianceBroken.NotifAllianceBroken_C.Initialize");

	UNotifAllianceBroken_C_Initialize_Params params;
	params.PlayerOneID = PlayerOneID;
	params.PlayerTwoID = PlayerTwoID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifAllianceBroken.NotifAllianceBroken_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifAllianceBroken_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifAllianceBroken.NotifAllianceBroken_C.Construct");

	UNotifAllianceBroken_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifAllianceBroken.NotifAllianceBroken_C.ExecuteUbergraph_NotifAllianceBroken
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifAllianceBroken_C::ExecuteUbergraph_NotifAllianceBroken(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifAllianceBroken.NotifAllianceBroken_C.ExecuteUbergraph_NotifAllianceBroken");

	UNotifAllianceBroken_C_ExecuteUbergraph_NotifAllianceBroken_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

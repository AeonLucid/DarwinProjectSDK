// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifBloodPactElim_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotifBloodPactElim.NotifBloodPactElim_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerOneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerTwoID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifBloodPactElim_C::Initialize(int PlayerOneID, int PlayerTwoID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifBloodPactElim.NotifBloodPactElim_C.Initialize");

	UNotifBloodPactElim_C_Initialize_Params params;
	params.PlayerOneID = PlayerOneID;
	params.PlayerTwoID = PlayerTwoID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifBloodPactElim.NotifBloodPactElim_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifBloodPactElim_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifBloodPactElim.NotifBloodPactElim_C.Construct");

	UNotifBloodPactElim_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifBloodPactElim.NotifBloodPactElim_C.ExecuteUbergraph_NotifBloodPactElim
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifBloodPactElim_C::ExecuteUbergraph_NotifBloodPactElim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifBloodPactElim.NotifBloodPactElim_C.ExecuteUbergraph_NotifBloodPactElim");

	UNotifBloodPactElim_C_ExecuteUbergraph_NotifBloodPactElim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifVampireHeal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotifVampireHeal.NotifVampireHeal_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifVampireHeal_C::Initialize(int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifVampireHeal.NotifVampireHeal_C.Initialize");

	UNotifVampireHeal_C_Initialize_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifVampireHeal.NotifVampireHeal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifVampireHeal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifVampireHeal.NotifVampireHeal_C.Construct");

	UNotifVampireHeal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifVampireHeal.NotifVampireHeal_C.ExecuteUbergraph_NotifVampireHeal
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifVampireHeal_C::ExecuteUbergraph_NotifVampireHeal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifVampireHeal.NotifVampireHeal_C.ExecuteUbergraph_NotifVampireHeal");

	UNotifVampireHeal_C_ExecuteUbergraph_NotifVampireHeal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

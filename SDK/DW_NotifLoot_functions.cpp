// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifLoot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotifLoot.NotifLoot_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifLoot_C::Initialize(int Number, EDarwinItemTypeEnum Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifLoot.NotifLoot_C.Initialize");

	UNotifLoot_C_Initialize_Params params;
	params.Number = Number;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifLoot.NotifLoot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifLoot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifLoot.NotifLoot_C.Construct");

	UNotifLoot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifLoot.NotifLoot_C.ExecuteUbergraph_NotifLoot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifLoot_C::ExecuteUbergraph_NotifLoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifLoot.NotifLoot_C.ExecuteUbergraph_NotifLoot");

	UNotifLoot_C_ExecuteUbergraph_NotifLoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

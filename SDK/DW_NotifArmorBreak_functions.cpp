// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifArmorBreak_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotifArmorBreak.NotifArmorBreak_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum          Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            attackerID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            victimID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifArmorBreak_C::Initialize(EDarwinDamageTypeEnum Type, int attackerID, int victimID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifArmorBreak.NotifArmorBreak_C.Initialize");

	UNotifArmorBreak_C_Initialize_Params params;
	params.Type = Type;
	params.attackerID = attackerID;
	params.victimID = victimID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifArmorBreak.NotifArmorBreak_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifArmorBreak_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifArmorBreak.NotifArmorBreak_C.Construct");

	UNotifArmorBreak_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifArmorBreak.NotifArmorBreak_C.ExecuteUbergraph_NotifArmorBreak
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifArmorBreak_C::ExecuteUbergraph_NotifArmorBreak(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifArmorBreak.NotifArmorBreak_C.ExecuteUbergraph_NotifArmorBreak");

	UNotifArmorBreak_C_ExecuteUbergraph_NotifArmorBreak_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

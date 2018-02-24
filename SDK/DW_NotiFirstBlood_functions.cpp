// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotiFirstBlood_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotiFirstBlood.NotiFirstBlood_C.RemoveFromBox
// (Public, BlueprintCallable, BlueprintEvent)

void UNotiFirstBlood_C::RemoveFromBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotiFirstBlood.NotiFirstBlood_C.RemoveFromBox");

	UNotiFirstBlood_C_RemoveFromBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotiFirstBlood.NotiFirstBlood_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            attackerID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            victimID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinDamageTypeEnum          DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotiFirstBlood_C::Initialize(int attackerID, int victimID, EDarwinDamageTypeEnum DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotiFirstBlood.NotiFirstBlood_C.Initialize");

	UNotiFirstBlood_C_Initialize_Params params;
	params.attackerID = attackerID;
	params.victimID = victimID;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotiFirstBlood.NotiFirstBlood_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotiFirstBlood_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotiFirstBlood.NotiFirstBlood_C.Construct");

	UNotiFirstBlood_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotiFirstBlood.NotiFirstBlood_C.ExecuteUbergraph_NotiFirstBlood
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotiFirstBlood_C::ExecuteUbergraph_NotiFirstBlood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotiFirstBlood.NotiFirstBlood_C.ExecuteUbergraph_NotiFirstBlood");

	UNotiFirstBlood_C_ExecuteUbergraph_NotiFirstBlood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotifDamage.NotifDamage_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinDamageTypeEnum          Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            attackerID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            victimID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifDamage_C::Initialize(float Damage, EDarwinDamageTypeEnum Type, int attackerID, int victimID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifDamage.NotifDamage_C.Initialize");

	UNotifDamage_C_Initialize_Params params;
	params.Damage = Damage;
	params.Type = Type;
	params.attackerID = attackerID;
	params.victimID = victimID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifDamage.NotifDamage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifDamage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifDamage.NotifDamage_C.Construct");

	UNotifDamage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifDamage.NotifDamage_C.ResetTimer
// (BlueprintCallable, BlueprintEvent)

void UNotifDamage_C::ResetTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifDamage.NotifDamage_C.ResetTimer");

	UNotifDamage_C_ResetTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifDamage.NotifDamage_C.RemoveFromBox
// (BlueprintCallable, BlueprintEvent)

void UNotifDamage_C::RemoveFromBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifDamage.NotifDamage_C.RemoveFromBox");

	UNotifDamage_C_RemoveFromBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifDamage.NotifDamage_C.PlayColdAnim
// (BlueprintCallable, BlueprintEvent)

void UNotifDamage_C::PlayColdAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifDamage.NotifDamage_C.PlayColdAnim");

	UNotifDamage_C_PlayColdAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifDamage.NotifDamage_C.ExecuteUbergraph_NotifDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifDamage_C::ExecuteUbergraph_NotifDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifDamage.NotifDamage_C.ExecuteUbergraph_NotifDamage");

	UNotifDamage_C_ExecuteUbergraph_NotifDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

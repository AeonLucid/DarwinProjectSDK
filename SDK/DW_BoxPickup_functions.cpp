// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_BoxPickup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoxPickup.BoxPickup_C.EventNewLoot
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBoxPickup_C::EventNewLoot(EDarwinItemTypeEnum* Type, int* Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoxPickup.BoxPickup_C.EventNewLoot");

	UBoxPickup_C_EventNewLoot_Params params;
	params.Type = Type;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoxPickup.BoxPickup_C.EventHealthPackConsumed
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           healAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBoxPickup_C::EventHealthPackConsumed(int* healAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoxPickup.BoxPickup_C.EventHealthPackConsumed");

	UBoxPickup_C_EventHealthPackConsumed_Params params;
	params.healAmount = healAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoxPickup.BoxPickup_C.EventStamPackConsumed
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           stamAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBoxPickup_C::EventStamPackConsumed(int* stamAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoxPickup.BoxPickup_C.EventStamPackConsumed");

	UBoxPickup_C_EventStamPackConsumed_Params params;
	params.stamAmount = stamAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoxPickup.BoxPickup_C.EventWarmthPackConsumed
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           warmthAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBoxPickup_C::EventWarmthPackConsumed(int* warmthAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoxPickup.BoxPickup_C.EventWarmthPackConsumed");

	UBoxPickup_C_EventWarmthPackConsumed_Params params;
	params.warmthAmount = warmthAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoxPickup.BoxPickup_C.EventSpeedPackConsumed
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           speedBoostTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBoxPickup_C::EventSpeedPackConsumed(int* speedBoostTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoxPickup.BoxPickup_C.EventSpeedPackConsumed");

	UBoxPickup_C_EventSpeedPackConsumed_Params params;
	params.speedBoostTime = speedBoostTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoxPickup.BoxPickup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBoxPickup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoxPickup.BoxPickup_C.Construct");

	UBoxPickup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoxPickup.BoxPickup_C.EventKillVampireHeal
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         healAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBoxPickup_C::EventKillVampireHeal(float* healAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoxPickup.BoxPickup_C.EventKillVampireHeal");

	UBoxPickup_C_EventKillVampireHeal_Params params;
	params.healAmount = healAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoxPickup.BoxPickup_C.Trim
// (BlueprintCallable, BlueprintEvent)

void UBoxPickup_C::Trim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoxPickup.BoxPickup_C.Trim");

	UBoxPickup_C_Trim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoxPickup.BoxPickup_C.ExecuteUbergraph_BoxPickup
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBoxPickup_C::ExecuteUbergraph_BoxPickup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoxPickup.BoxPickup_C.ExecuteUbergraph_BoxPickup");

	UBoxPickup_C_ExecuteUbergraph_BoxPickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

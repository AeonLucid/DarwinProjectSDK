// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_RocketLeapPowerBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RocketLeapPowerBP.RocketLeapPowerBP_C.EventRocketLeap
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void URocketLeapPowerBP_C::EventRocketLeap(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function RocketLeapPowerBP.RocketLeapPowerBP_C.EventRocketLeap");

	URocketLeapPowerBP_C_EventRocketLeap_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RocketLeapPowerBP.RocketLeapPowerBP_C.EventRocketLand
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void URocketLeapPowerBP_C::EventRocketLand(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function RocketLeapPowerBP.RocketLeapPowerBP_C.EventRocketLand");

	URocketLeapPowerBP_C_EventRocketLand_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RocketLeapPowerBP.RocketLeapPowerBP_C.ActivateSparkles
// (BlueprintCallable, BlueprintEvent)

void URocketLeapPowerBP_C::ActivateSparkles()
{
	static auto fn = UObject::FindObject<UFunction>("Function RocketLeapPowerBP.RocketLeapPowerBP_C.ActivateSparkles");

	URocketLeapPowerBP_C_ActivateSparkles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RocketLeapPowerBP.RocketLeapPowerBP_C.DeactivateSparkles
// (BlueprintCallable, BlueprintEvent)

void URocketLeapPowerBP_C::DeactivateSparkles()
{
	static auto fn = UObject::FindObject<UFunction>("Function RocketLeapPowerBP.RocketLeapPowerBP_C.DeactivateSparkles");

	URocketLeapPowerBP_C_DeactivateSparkles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RocketLeapPowerBP.RocketLeapPowerBP_C.ExecuteUbergraph_RocketLeapPowerBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URocketLeapPowerBP_C::ExecuteUbergraph_RocketLeapPowerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RocketLeapPowerBP.RocketLeapPowerBP_C.ExecuteUbergraph_RocketLeapPowerBP");

	URocketLeapPowerBP_C_ExecuteUbergraph_RocketLeapPowerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

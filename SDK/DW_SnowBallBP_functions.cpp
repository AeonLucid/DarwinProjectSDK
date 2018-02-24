// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_SnowBallBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SnowBallBP.SnowBallBP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASnowBallBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SnowBallBP.SnowBallBP_C.UserConstructionScript");

	ASnowBallBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SnowBallBP.SnowBallBP_C.EventGrenadeExplode
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASnowBallBP_C::EventGrenadeExplode(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function SnowBallBP.SnowBallBP_C.EventGrenadeExplode");

	ASnowBallBP_C_EventGrenadeExplode_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SnowBallBP.SnowBallBP_C.EventReflectedByForcefield
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASnowBallBP_C::EventReflectedByForcefield(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function SnowBallBP.SnowBallBP_C.EventReflectedByForcefield");

	ASnowBallBP_C_EventReflectedByForcefield_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SnowBallBP.SnowBallBP_C.EventHitByAxe
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASnowBallBP_C::EventHitByAxe(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function SnowBallBP.SnowBallBP_C.EventHitByAxe");

	ASnowBallBP_C_EventHitByAxe_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SnowBallBP.SnowBallBP_C.ExecuteUbergraph_SnowBallBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASnowBallBP_C::ExecuteUbergraph_SnowBallBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SnowBallBP.SnowBallBP_C.ExecuteUbergraph_SnowBallBP");

	ASnowBallBP_C_ExecuteUbergraph_SnowBallBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

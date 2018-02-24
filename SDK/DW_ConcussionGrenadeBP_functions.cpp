// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ConcussionGrenadeBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConcussionGrenadeBP.ConcussionGrenadeBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AConcussionGrenadeBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConcussionGrenadeBP.ConcussionGrenadeBP_C.UserConstructionScript");

	AConcussionGrenadeBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConcussionGrenadeBP.ConcussionGrenadeBP_C.EventGrenadeExplode
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AConcussionGrenadeBP_C::EventGrenadeExplode(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConcussionGrenadeBP.ConcussionGrenadeBP_C.EventGrenadeExplode");

	AConcussionGrenadeBP_C_EventGrenadeExplode_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConcussionGrenadeBP.ConcussionGrenadeBP_C.EventReflectedByForcefield
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AConcussionGrenadeBP_C::EventReflectedByForcefield(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConcussionGrenadeBP.ConcussionGrenadeBP_C.EventReflectedByForcefield");

	AConcussionGrenadeBP_C_EventReflectedByForcefield_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConcussionGrenadeBP.ConcussionGrenadeBP_C.EventHitByAxe
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AConcussionGrenadeBP_C::EventHitByAxe(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConcussionGrenadeBP.ConcussionGrenadeBP_C.EventHitByAxe");

	AConcussionGrenadeBP_C_EventHitByAxe_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConcussionGrenadeBP.ConcussionGrenadeBP_C.ExecuteUbergraph_ConcussionGrenadeBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AConcussionGrenadeBP_C::ExecuteUbergraph_ConcussionGrenadeBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConcussionGrenadeBP.ConcussionGrenadeBP_C.ExecuteUbergraph_ConcussionGrenadeBP");

	AConcussionGrenadeBP_C_ExecuteUbergraph_ConcussionGrenadeBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

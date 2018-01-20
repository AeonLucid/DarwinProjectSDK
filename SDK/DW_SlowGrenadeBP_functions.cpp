// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_SlowGrenadeBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SlowGrenadeBP.SlowGrenadeBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASlowGrenadeBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SlowGrenadeBP.SlowGrenadeBP_C.UserConstructionScript");

	ASlowGrenadeBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SlowGrenadeBP.SlowGrenadeBP_C.EventGrenadeExplode
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASlowGrenadeBP_C::EventGrenadeExplode(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function SlowGrenadeBP.SlowGrenadeBP_C.EventGrenadeExplode");

	ASlowGrenadeBP_C_EventGrenadeExplode_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SlowGrenadeBP.SlowGrenadeBP_C.EventReflectedByForcefield
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASlowGrenadeBP_C::EventReflectedByForcefield(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function SlowGrenadeBP.SlowGrenadeBP_C.EventReflectedByForcefield");

	ASlowGrenadeBP_C_EventReflectedByForcefield_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SlowGrenadeBP.SlowGrenadeBP_C.EventHitByAxe
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASlowGrenadeBP_C::EventHitByAxe(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function SlowGrenadeBP.SlowGrenadeBP_C.EventHitByAxe");

	ASlowGrenadeBP_C_EventHitByAxe_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SlowGrenadeBP.SlowGrenadeBP_C.ExecuteUbergraph_SlowGrenadeBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASlowGrenadeBP_C::ExecuteUbergraph_SlowGrenadeBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SlowGrenadeBP.SlowGrenadeBP_C.ExecuteUbergraph_SlowGrenadeBP");

	ASlowGrenadeBP_C_ExecuteUbergraph_SlowGrenadeBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

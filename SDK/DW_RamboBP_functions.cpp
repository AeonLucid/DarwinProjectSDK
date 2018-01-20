// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_RamboBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RamboBP.RamboBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARamboBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RamboBP.RamboBP_C.UserConstructionScript");

	ARamboBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RamboBP.RamboBP_C.EventSmokeUp
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ARamboBP_C::EventSmokeUp(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamboBP.RamboBP_C.EventSmokeUp");

	ARamboBP_C_EventSmokeUp_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RamboBP.RamboBP_C.EventSmokeDown
// (Event, Public, BlueprintEvent)

void ARamboBP_C::EventSmokeDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function RamboBP.RamboBP_C.EventSmokeDown");

	ARamboBP_C_EventSmokeDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RamboBP.RamboBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARamboBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamboBP.RamboBP_C.ReceiveTick");

	ARamboBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RamboBP.RamboBP_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ARamboBP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function RamboBP.RamboBP_C.ReceiveDestroyed");

	ARamboBP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RamboBP.RamboBP_C.ExecuteUbergraph_RamboBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARamboBP_C::ExecuteUbergraph_RamboBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamboBP.RamboBP_C.ExecuteUbergraph_RamboBP");

	ARamboBP_C_ExecuteUbergraph_RamboBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

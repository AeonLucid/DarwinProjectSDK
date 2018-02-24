// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PortalPowerBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PortalPowerBP.PortalPowerBP_C.EventDropMouth
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                mouthLoc                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UPortalPowerBP_C::EventDropMouth(struct FVector* mouthLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalPowerBP.PortalPowerBP_C.EventDropMouth");

	UPortalPowerBP_C_EventDropMouth_Params params;
	params.mouthLoc = mouthLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PortalPowerBP.PortalPowerBP_C.EventDropExit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                exitLoc                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UPortalPowerBP_C::EventDropExit(struct FVector* exitLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalPowerBP.PortalPowerBP_C.EventDropExit");

	UPortalPowerBP_C_EventDropExit_Params params;
	params.exitLoc = exitLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PortalPowerBP.PortalPowerBP_C.EventStartTeleport
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                StartLoc                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                EndLoc                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UPortalPowerBP_C::EventStartTeleport(struct FVector* StartLoc, struct FVector* EndLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalPowerBP.PortalPowerBP_C.EventStartTeleport");

	UPortalPowerBP_C_EventStartTeleport_Params params;
	params.StartLoc = StartLoc;
	params.EndLoc = EndLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PortalPowerBP.PortalPowerBP_C.EventEndTeleport
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                StartLoc                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                EndLoc                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UPortalPowerBP_C::EventEndTeleport(struct FVector* StartLoc, struct FVector* EndLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalPowerBP.PortalPowerBP_C.EventEndTeleport");

	UPortalPowerBP_C_EventEndTeleport_Params params;
	params.StartLoc = StartLoc;
	params.EndLoc = EndLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PortalPowerBP.PortalPowerBP_C.ExecuteUbergraph_PortalPowerBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPortalPowerBP_C::ExecuteUbergraph_PortalPowerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalPowerBP.PortalPowerBP_C.ExecuteUbergraph_PortalPowerBP");

	UPortalPowerBP_C_ExecuteUbergraph_PortalPowerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_TargetLockWidgetBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TargetLockWidgetBP.TargetLockWidgetBP_C.EventAimLockTarget
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHasTarget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UTargetLockWidgetBP_C::EventAimLockTarget(float* progress, bool* bHasTarget, struct FVector2D* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetLockWidgetBP.TargetLockWidgetBP_C.EventAimLockTarget");

	UTargetLockWidgetBP_C_EventAimLockTarget_Params params;
	params.progress = progress;
	params.bHasTarget = bHasTarget;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TargetLockWidgetBP.TargetLockWidgetBP_C.EventAimEnd
// (Event, Public, BlueprintEvent)

void UTargetLockWidgetBP_C::EventAimEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetLockWidgetBP.TargetLockWidgetBP_C.EventAimEnd");

	UTargetLockWidgetBP_C_EventAimEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TargetLockWidgetBP.TargetLockWidgetBP_C.ExecuteUbergraph_TargetLockWidgetBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTargetLockWidgetBP_C::ExecuteUbergraph_TargetLockWidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetLockWidgetBP.TargetLockWidgetBP_C.ExecuteUbergraph_TargetLockWidgetBP");

	UTargetLockWidgetBP_C_ExecuteUbergraph_TargetLockWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

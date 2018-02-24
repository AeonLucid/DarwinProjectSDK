// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinRedDeerBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinRedDeerBP.DarwinRedDeerBP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADarwinRedDeerBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinRedDeerBP.DarwinRedDeerBP_C.UserConstructionScript");

	ADarwinRedDeerBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinRedDeerBP.DarwinRedDeerBP_C.EventSetAllRenderCustomDepth
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          render                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinRedDeerBP_C::EventSetAllRenderCustomDepth(bool* render)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinRedDeerBP.DarwinRedDeerBP_C.EventSetAllRenderCustomDepth");

	ADarwinRedDeerBP_C_EventSetAllRenderCustomDepth_Params params;
	params.render = render;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinRedDeerBP.DarwinRedDeerBP_C.EventSetAllCustomDepthStencilValue
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinRedDeerBP_C::EventSetAllCustomDepthStencilValue(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinRedDeerBP.DarwinRedDeerBP_C.EventSetAllCustomDepthStencilValue");

	ADarwinRedDeerBP_C_EventSetAllCustomDepthStencilValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinRedDeerBP.DarwinRedDeerBP_C.EventHitByWeapon
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ADarwinZombie**          zombie                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADarwinRedDeerBP_C::EventHitByWeapon(class ADarwinZombie** zombie, struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinRedDeerBP.DarwinRedDeerBP_C.EventHitByWeapon");

	ADarwinRedDeerBP_C_EventHitByWeapon_Params params;
	params.zombie = zombie;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinRedDeerBP.DarwinRedDeerBP_C.ExecuteUbergraph_DarwinRedDeerBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinRedDeerBP_C::ExecuteUbergraph_DarwinRedDeerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinRedDeerBP.DarwinRedDeerBP_C.ExecuteUbergraph_DarwinRedDeerBP");

	ADarwinRedDeerBP_C_ExecuteUbergraph_DarwinRedDeerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

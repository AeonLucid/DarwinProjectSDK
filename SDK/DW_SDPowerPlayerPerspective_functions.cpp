// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_SDPowerPlayerPerspective_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SDPowerPlayerPerspective.SDPowerPlayerPerspective_C.PlayAKSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum            powerType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USDPowerPlayerPerspective_C::PlayAKSound(EDarwinItemTypeEnum powerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SDPowerPlayerPerspective.SDPowerPlayerPerspective_C.PlayAKSound");

	USDPowerPlayerPerspective_C_PlayAKSound_Params params;
	params.powerType = powerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SDPowerPlayerPerspective.SDPowerPlayerPerspective_C.EventGetPowerChosen
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 targetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// EDarwinItemTypeEnum*           powerType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USDPowerPlayerPerspective_C::EventGetPowerChosen(class AActor** targetActor, struct FVector* Loc, EDarwinItemTypeEnum* powerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SDPowerPlayerPerspective.SDPowerPlayerPerspective_C.EventGetPowerChosen");

	USDPowerPlayerPerspective_C_EventGetPowerChosen_Params params;
	params.targetActor = targetActor;
	params.Loc = Loc;
	params.powerType = powerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SDPowerPlayerPerspective.SDPowerPlayerPerspective_C.ExecuteUbergraph_SDPowerPlayerPerspective
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USDPowerPlayerPerspective_C::ExecuteUbergraph_SDPowerPlayerPerspective(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SDPowerPlayerPerspective.SDPowerPlayerPerspective_C.ExecuteUbergraph_SDPowerPlayerPerspective");

	USDPowerPlayerPerspective_C_ExecuteUbergraph_SDPowerPlayerPerspective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

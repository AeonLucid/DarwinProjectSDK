// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_VampirePowerBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VampirePowerBP.VampirePowerBP_C.EventLocalPowerOn
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVampirePowerBP_C::EventLocalPowerOn(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function VampirePowerBP.VampirePowerBP_C.EventLocalPowerOn");

	UVampirePowerBP_C_EventLocalPowerOn_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VampirePowerBP.VampirePowerBP_C.EventSimulatedPowerOn
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UVampirePowerBP_C::EventSimulatedPowerOn(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function VampirePowerBP.VampirePowerBP_C.EventSimulatedPowerOn");

	UVampirePowerBP_C_EventSimulatedPowerOn_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VampirePowerBP.VampirePowerBP_C.ExecuteUbergraph_VampirePowerBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVampirePowerBP_C::ExecuteUbergraph_VampirePowerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VampirePowerBP.VampirePowerBP_C.ExecuteUbergraph_VampirePowerBP");

	UVampirePowerBP_C_ExecuteUbergraph_VampirePowerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MagWallPowerBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagWallPowerBP.MagWallPowerBP_C.EventLocalPowerOn
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMagWallPowerBP_C::EventLocalPowerOn(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagWallPowerBP.MagWallPowerBP_C.EventLocalPowerOn");

	UMagWallPowerBP_C_EventLocalPowerOn_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagWallPowerBP.MagWallPowerBP_C.EventSimulatedPowerOn
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UMagWallPowerBP_C::EventSimulatedPowerOn(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagWallPowerBP.MagWallPowerBP_C.EventSimulatedPowerOn");

	UMagWallPowerBP_C_EventSimulatedPowerOn_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagWallPowerBP.MagWallPowerBP_C.ExecuteUbergraph_MagWallPowerBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMagWallPowerBP_C::ExecuteUbergraph_MagWallPowerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagWallPowerBP.MagWallPowerBP_C.ExecuteUbergraph_MagWallPowerBP");

	UMagWallPowerBP_C_ExecuteUbergraph_MagWallPowerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

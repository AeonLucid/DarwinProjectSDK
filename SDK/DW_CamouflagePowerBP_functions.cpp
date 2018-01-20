// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CamouflagePowerBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CamouflagePowerBP.CamouflagePowerBP_C.EventLocalPowerOn
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCamouflagePowerBP_C::EventLocalPowerOn(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamouflagePowerBP.CamouflagePowerBP_C.EventLocalPowerOn");

	UCamouflagePowerBP_C_EventLocalPowerOn_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CamouflagePowerBP.CamouflagePowerBP_C.EventLocalPowerOff
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCamouflagePowerBP_C::EventLocalPowerOff(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamouflagePowerBP.CamouflagePowerBP_C.EventLocalPowerOff");

	UCamouflagePowerBP_C_EventLocalPowerOff_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CamouflagePowerBP.CamouflagePowerBP_C.EventSimulatedPowerOn
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCamouflagePowerBP_C::EventSimulatedPowerOn(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamouflagePowerBP.CamouflagePowerBP_C.EventSimulatedPowerOn");

	UCamouflagePowerBP_C_EventSimulatedPowerOn_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CamouflagePowerBP.CamouflagePowerBP_C.EventSimulatedPowerOff
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCamouflagePowerBP_C::EventSimulatedPowerOff(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamouflagePowerBP.CamouflagePowerBP_C.EventSimulatedPowerOff");

	UCamouflagePowerBP_C_EventSimulatedPowerOff_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CamouflagePowerBP.CamouflagePowerBP_C.ExecuteUbergraph_CamouflagePowerBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCamouflagePowerBP_C::ExecuteUbergraph_CamouflagePowerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamouflagePowerBP.CamouflagePowerBP_C.ExecuteUbergraph_CamouflagePowerBP");

	UCamouflagePowerBP_C_ExecuteUbergraph_CamouflagePowerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinColdFactorComponentBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinColdFactorComponentBP.DarwinColdFactorComponentBP_C.EventUpdateColdFactor
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         currentColdFactor              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinColdFactorComponentBP_C::EventUpdateColdFactor(float* currentColdFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinColdFactorComponentBP.DarwinColdFactorComponentBP_C.EventUpdateColdFactor");

	UDarwinColdFactorComponentBP_C_EventUpdateColdFactor_Params params;
	params.currentColdFactor = currentColdFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinColdFactorComponentBP.DarwinColdFactorComponentBP_C.EventLocalBelow25Percent
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinColdFactorComponentBP_C::EventLocalBelow25Percent(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinColdFactorComponentBP.DarwinColdFactorComponentBP_C.EventLocalBelow25Percent");

	UDarwinColdFactorComponentBP_C_EventLocalBelow25Percent_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinColdFactorComponentBP.DarwinColdFactorComponentBP_C.EventLocalAbove25Percent
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinColdFactorComponentBP_C::EventLocalAbove25Percent(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinColdFactorComponentBP.DarwinColdFactorComponentBP_C.EventLocalAbove25Percent");

	UDarwinColdFactorComponentBP_C_EventLocalAbove25Percent_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinColdFactorComponentBP.DarwinColdFactorComponentBP_C.EventLocalBelow10Percent
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinColdFactorComponentBP_C::EventLocalBelow10Percent(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinColdFactorComponentBP.DarwinColdFactorComponentBP_C.EventLocalBelow10Percent");

	UDarwinColdFactorComponentBP_C_EventLocalBelow10Percent_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinColdFactorComponentBP.DarwinColdFactorComponentBP_C.EventLocalAbove10Percent
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinColdFactorComponentBP_C::EventLocalAbove10Percent(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinColdFactorComponentBP.DarwinColdFactorComponentBP_C.EventLocalAbove10Percent");

	UDarwinColdFactorComponentBP_C_EventLocalAbove10Percent_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinColdFactorComponentBP.DarwinColdFactorComponentBP_C.ExecuteUbergraph_DarwinColdFactorComponentBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinColdFactorComponentBP_C::ExecuteUbergraph_DarwinColdFactorComponentBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinColdFactorComponentBP.DarwinColdFactorComponentBP_C.ExecuteUbergraph_DarwinColdFactorComponentBP");

	UDarwinColdFactorComponentBP_C_ExecuteUbergraph_DarwinColdFactorComponentBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

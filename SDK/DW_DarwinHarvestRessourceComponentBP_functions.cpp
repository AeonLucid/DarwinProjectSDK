// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinHarvestRessourceComponentBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinHarvestRessourceComponentBP.DarwinHarvestRessourceComponentBP_C.EventHarvestingRessourceLocallyControlledFail
// (Event, Public, BlueprintEvent)

void UDarwinHarvestRessourceComponentBP_C::EventHarvestingRessourceLocallyControlledFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinHarvestRessourceComponentBP.DarwinHarvestRessourceComponentBP_C.EventHarvestingRessourceLocallyControlledFail");

	UDarwinHarvestRessourceComponentBP_C_EventHarvestingRessourceLocallyControlledFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinHarvestRessourceComponentBP.DarwinHarvestRessourceComponentBP_C.EventHarvestingRessourceLocallyControlledSuccess
// (Event, Public, BlueprintEvent)

void UDarwinHarvestRessourceComponentBP_C::EventHarvestingRessourceLocallyControlledSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinHarvestRessourceComponentBP.DarwinHarvestRessourceComponentBP_C.EventHarvestingRessourceLocallyControlledSuccess");

	UDarwinHarvestRessourceComponentBP_C_EventHarvestingRessourceLocallyControlledSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinHarvestRessourceComponentBP.DarwinHarvestRessourceComponentBP_C.ExecuteUbergraph_DarwinHarvestRessourceComponentBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinHarvestRessourceComponentBP_C::ExecuteUbergraph_DarwinHarvestRessourceComponentBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinHarvestRessourceComponentBP.DarwinHarvestRessourceComponentBP_C.ExecuteUbergraph_DarwinHarvestRessourceComponentBP");

	UDarwinHarvestRessourceComponentBP_C_ExecuteUbergraph_DarwinHarvestRessourceComponentBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

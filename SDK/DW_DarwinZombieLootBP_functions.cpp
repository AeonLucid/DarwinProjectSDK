// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinZombieLootBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinZombieLootBP.DarwinZombieLootBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADarwinZombieLootBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinZombieLootBP.DarwinZombieLootBP_C.UserConstructionScript");

	ADarwinZombieLootBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinZombieLootBP.DarwinZombieLootBP_C.EventSetLootableShape
// (Event, Public, BlueprintEvent)

void ADarwinZombieLootBP_C::EventSetLootableShape()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinZombieLootBP.DarwinZombieLootBP_C.EventSetLootableShape");

	ADarwinZombieLootBP_C_EventSetLootableShape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinZombieLootBP.DarwinZombieLootBP_C.ExecuteUbergraph_DarwinZombieLootBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinZombieLootBP_C::ExecuteUbergraph_DarwinZombieLootBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinZombieLootBP.DarwinZombieLootBP_C.ExecuteUbergraph_DarwinZombieLootBP");

	ADarwinZombieLootBP_C_ExecuteUbergraph_DarwinZombieLootBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

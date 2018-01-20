// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinGameStateNewVoidBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinGameStateNewVoidBP.DarwinGameStateNewVoidBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADarwinGameStateNewVoidBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGameStateNewVoidBP.DarwinGameStateNewVoidBP_C.UserConstructionScript");

	ADarwinGameStateNewVoidBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinGameStateNewVoidBP.DarwinGameStateNewVoidBP_C.EventCheer
// (Event, Public, BlueprintEvent)

void ADarwinGameStateNewVoidBP_C::EventCheer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGameStateNewVoidBP.DarwinGameStateNewVoidBP_C.EventCheer");

	ADarwinGameStateNewVoidBP_C_EventCheer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinGameStateNewVoidBP.DarwinGameStateNewVoidBP_C.EventBoo
// (Event, Public, BlueprintEvent)

void ADarwinGameStateNewVoidBP_C::EventBoo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGameStateNewVoidBP.DarwinGameStateNewVoidBP_C.EventBoo");

	ADarwinGameStateNewVoidBP_C_EventBoo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinGameStateNewVoidBP.DarwinGameStateNewVoidBP_C.ExecuteUbergraph_DarwinGameStateNewVoidBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinGameStateNewVoidBP_C::ExecuteUbergraph_DarwinGameStateNewVoidBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGameStateNewVoidBP.DarwinGameStateNewVoidBP_C.ExecuteUbergraph_DarwinGameStateNewVoidBP");

	ADarwinGameStateNewVoidBP_C_ExecuteUbergraph_DarwinGameStateNewVoidBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinPurgatoryPawnBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinPurgatoryPawnBP.DarwinPurgatoryPawnBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADarwinPurgatoryPawnBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPurgatoryPawnBP.DarwinPurgatoryPawnBP_C.UserConstructionScript");

	ADarwinPurgatoryPawnBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPurgatoryPawnBP.DarwinPurgatoryPawnBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADarwinPurgatoryPawnBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPurgatoryPawnBP.DarwinPurgatoryPawnBP_C.ReceiveBeginPlay");

	ADarwinPurgatoryPawnBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPurgatoryPawnBP.DarwinPurgatoryPawnBP_C.ExecuteUbergraph_DarwinPurgatoryPawnBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinPurgatoryPawnBP_C::ExecuteUbergraph_DarwinPurgatoryPawnBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPurgatoryPawnBP.DarwinPurgatoryPawnBP_C.ExecuteUbergraph_DarwinPurgatoryPawnBP");

	ADarwinPurgatoryPawnBP_C_ExecuteUbergraph_DarwinPurgatoryPawnBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

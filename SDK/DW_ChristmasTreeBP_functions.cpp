// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ChristmasTreeBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChristmasTreeBP.ChristmasTreeBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AChristmasTreeBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChristmasTreeBP.ChristmasTreeBP_C.UserConstructionScript");

	AChristmasTreeBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChristmasTreeBP.ChristmasTreeBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AChristmasTreeBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChristmasTreeBP.ChristmasTreeBP_C.ReceiveBeginPlay");

	AChristmasTreeBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChristmasTreeBP.ChristmasTreeBP_C.ExecuteUbergraph_ChristmasTreeBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChristmasTreeBP_C::ExecuteUbergraph_ChristmasTreeBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChristmasTreeBP.ChristmasTreeBP_C.ExecuteUbergraph_ChristmasTreeBP");

	AChristmasTreeBP_C_ExecuteUbergraph_ChristmasTreeBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

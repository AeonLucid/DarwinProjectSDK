// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ChristmasTreeHighSnowBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChristmasTreeHighSnowBP.ChristmasTreeHighSnowBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AChristmasTreeHighSnowBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChristmasTreeHighSnowBP.ChristmasTreeHighSnowBP_C.UserConstructionScript");

	AChristmasTreeHighSnowBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChristmasTreeHighSnowBP.ChristmasTreeHighSnowBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AChristmasTreeHighSnowBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChristmasTreeHighSnowBP.ChristmasTreeHighSnowBP_C.ReceiveBeginPlay");

	AChristmasTreeHighSnowBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChristmasTreeHighSnowBP.ChristmasTreeHighSnowBP_C.ExecuteUbergraph_ChristmasTreeHighSnowBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChristmasTreeHighSnowBP_C::ExecuteUbergraph_ChristmasTreeHighSnowBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChristmasTreeHighSnowBP.ChristmasTreeHighSnowBP_C.ExecuteUbergraph_ChristmasTreeHighSnowBP");

	AChristmasTreeHighSnowBP_C_ExecuteUbergraph_ChristmasTreeHighSnowBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

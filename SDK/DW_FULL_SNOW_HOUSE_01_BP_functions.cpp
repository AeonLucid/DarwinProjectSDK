// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_FULL_SNOW_HOUSE_01_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FULL_SNOW_HOUSE_01_BP.FULL_SNOW_HOUSE_01_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFULL_SNOW_HOUSE_01_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FULL_SNOW_HOUSE_01_BP.FULL_SNOW_HOUSE_01_BP_C.UserConstructionScript");

	AFULL_SNOW_HOUSE_01_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FULL_SNOW_HOUSE_01_BP.FULL_SNOW_HOUSE_01_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFULL_SNOW_HOUSE_01_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FULL_SNOW_HOUSE_01_BP.FULL_SNOW_HOUSE_01_BP_C.ReceiveBeginPlay");

	AFULL_SNOW_HOUSE_01_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FULL_SNOW_HOUSE_01_BP.FULL_SNOW_HOUSE_01_BP_C.ExecuteUbergraph_FULL_SNOW_HOUSE_01_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFULL_SNOW_HOUSE_01_BP_C::ExecuteUbergraph_FULL_SNOW_HOUSE_01_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FULL_SNOW_HOUSE_01_BP.FULL_SNOW_HOUSE_01_BP_C.ExecuteUbergraph_FULL_SNOW_HOUSE_01_BP");

	AFULL_SNOW_HOUSE_01_BP_C_ExecuteUbergraph_FULL_SNOW_HOUSE_01_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

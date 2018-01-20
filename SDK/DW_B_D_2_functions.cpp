// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_B_D_2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B_D_2.B_D_1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_D_1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_D_2.B_D_1_C.UserConstructionScript");

	AB_D_1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_D_2.B_D_1_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_D_1_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_D_2.B_D_1_C.ReceiveTick");

	AB_D_1_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_D_2.B_D_1_C.ExecuteUbergraph_B_D_2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_D_1_C::ExecuteUbergraph_B_D_2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_D_2.B_D_1_C.ExecuteUbergraph_B_D_2");

	AB_D_1_C_ExecuteUbergraph_B_D_2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

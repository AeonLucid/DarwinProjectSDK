// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_B_D_8_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B_D_8.B_D_7_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_D_7_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_D_8.B_D_7_C.UserConstructionScript");

	AB_D_7_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_D_8.B_D_7_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_D_7_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_D_8.B_D_7_C.ReceiveTick");

	AB_D_7_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_D_8.B_D_7_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_D_7_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_D_8.B_D_7_C.ReceiveBeginPlay");

	AB_D_7_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_D_8.B_D_7_C.ExecuteUbergraph_B_D_8
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_D_7_C::ExecuteUbergraph_B_D_8(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_D_8.B_D_7_C.ExecuteUbergraph_B_D_8");

	AB_D_7_C_ExecuteUbergraph_B_D_8_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

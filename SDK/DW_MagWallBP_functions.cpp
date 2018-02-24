// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MagWallBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagWallBP.MagWallBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMagWallBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagWallBP.MagWallBP_C.UserConstructionScript");

	AMagWallBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagWallBP.MagWallBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMagWallBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagWallBP.MagWallBP_C.ReceiveBeginPlay");

	AMagWallBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagWallBP.MagWallBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMagWallBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagWallBP.MagWallBP_C.ReceiveTick");

	AMagWallBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagWallBP.MagWallBP_C.ExecuteUbergraph_MagWallBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMagWallBP_C::ExecuteUbergraph_MagWallBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagWallBP.MagWallBP_C.ExecuteUbergraph_MagWallBP");

	AMagWallBP_C_ExecuteUbergraph_MagWallBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_BirdsBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BirdsBP.BirdsBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABirdsBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BirdsBP.BirdsBP_C.UserConstructionScript");

	ABirdsBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BirdsBP.BirdsBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABirdsBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BirdsBP.BirdsBP_C.ReceiveTick");

	ABirdsBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BirdsBP.BirdsBP_C.ExecuteUbergraph_BirdsBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABirdsBP_C::ExecuteUbergraph_BirdsBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BirdsBP.BirdsBP_C.ExecuteUbergraph_BirdsBP");

	ABirdsBP_C_ExecuteUbergraph_BirdsBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

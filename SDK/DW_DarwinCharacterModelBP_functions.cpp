// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinCharacterModelBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinCharacterModelBP.DarwinCharacterModelBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADarwinCharacterModelBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterModelBP.DarwinCharacterModelBP_C.UserConstructionScript");

	ADarwinCharacterModelBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterModelBP.DarwinCharacterModelBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinCharacterModelBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterModelBP.DarwinCharacterModelBP_C.ReceiveTick");

	ADarwinCharacterModelBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterModelBP.DarwinCharacterModelBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADarwinCharacterModelBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterModelBP.DarwinCharacterModelBP_C.ReceiveBeginPlay");

	ADarwinCharacterModelBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterModelBP.DarwinCharacterModelBP_C.ExecuteUbergraph_DarwinCharacterModelBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinCharacterModelBP_C::ExecuteUbergraph_DarwinCharacterModelBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterModelBP.DarwinCharacterModelBP_C.ExecuteUbergraph_DarwinCharacterModelBP");

	ADarwinCharacterModelBP_C_ExecuteUbergraph_DarwinCharacterModelBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_JerichoCustomizationBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function JerichoCustomizationBP.JerichoCustomizationBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AJerichoCustomizationBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function JerichoCustomizationBP.JerichoCustomizationBP_C.UserConstructionScript");

	AJerichoCustomizationBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JerichoCustomizationBP.JerichoCustomizationBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AJerichoCustomizationBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function JerichoCustomizationBP.JerichoCustomizationBP_C.ReceiveBeginPlay");

	AJerichoCustomizationBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JerichoCustomizationBP.JerichoCustomizationBP_C.ExecuteUbergraph_JerichoCustomizationBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJerichoCustomizationBP_C::ExecuteUbergraph_JerichoCustomizationBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JerichoCustomizationBP.JerichoCustomizationBP_C.ExecuteUbergraph_JerichoCustomizationBP");

	AJerichoCustomizationBP_C_ExecuteUbergraph_JerichoCustomizationBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

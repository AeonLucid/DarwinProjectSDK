// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ClassicPineBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ClassicPineBP.ClassicPineBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AClassicPineBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ClassicPineBP.ClassicPineBP_C.UserConstructionScript");

	AClassicPineBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClassicPineBP.ClassicPineBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AClassicPineBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ClassicPineBP.ClassicPineBP_C.ReceiveBeginPlay");

	AClassicPineBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClassicPineBP.ClassicPineBP_C.ExecuteUbergraph_ClassicPineBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AClassicPineBP_C::ExecuteUbergraph_ClassicPineBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClassicPineBP.ClassicPineBP_C.ExecuteUbergraph_ClassicPineBP");

	AClassicPineBP_C_ExecuteUbergraph_ClassicPineBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinWindowBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinWindowBP.DarwinWindowBP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADarwinWindowBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinWindowBP.DarwinWindowBP_C.UserConstructionScript");

	ADarwinWindowBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinWindowBP.DarwinWindowBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADarwinWindowBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinWindowBP.DarwinWindowBP_C.ReceiveBeginPlay");

	ADarwinWindowBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinWindowBP.DarwinWindowBP_C.EventBreakWindow
// (Event, Public, BlueprintEvent)

void ADarwinWindowBP_C::EventBreakWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinWindowBP.DarwinWindowBP_C.EventBreakWindow");

	ADarwinWindowBP_C_EventBreakWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinWindowBP.DarwinWindowBP_C.ExecuteUbergraph_DarwinWindowBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinWindowBP_C::ExecuteUbergraph_DarwinWindowBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinWindowBP.DarwinWindowBP_C.ExecuteUbergraph_DarwinWindowBP");

	ADarwinWindowBP_C_ExecuteUbergraph_DarwinWindowBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CWDeco_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CWDeco.CWDeco_C.EventCraftWheelOpen
// (Event, Public, BlueprintEvent)

void UCWDeco_C::EventCraftWheelOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function CWDeco.CWDeco_C.EventCraftWheelOpen");

	UCWDeco_C_EventCraftWheelOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CWDeco.CWDeco_C.EventCraftWheelClose
// (Event, Public, BlueprintEvent)

void UCWDeco_C::EventCraftWheelClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function CWDeco.CWDeco_C.EventCraftWheelClose");

	UCWDeco_C_EventCraftWheelClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CWDeco.CWDeco_C.ExecuteUbergraph_CWDeco
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCWDeco_C::ExecuteUbergraph_CWDeco(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CWDeco.CWDeco_C.ExecuteUbergraph_CWDeco");

	UCWDeco_C_ExecuteUbergraph_CWDeco_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

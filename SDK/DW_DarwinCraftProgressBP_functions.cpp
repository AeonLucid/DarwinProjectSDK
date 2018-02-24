// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinCraftProgressBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinCraftProgressBP.DarwinCraftProgressBP_C.EventIsCrafting
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum*           enum_type                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFinished                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           craftingIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftProgressBP_C::EventIsCrafting(float* progress, EDarwinItemTypeEnum* enum_type, bool* bFinished, int* craftingIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftProgressBP.DarwinCraftProgressBP_C.EventIsCrafting");

	UDarwinCraftProgressBP_C_EventIsCrafting_Params params;
	params.progress = progress;
	params.enum_type = enum_type;
	params.bFinished = bFinished;
	params.craftingIndex = craftingIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftProgressBP.DarwinCraftProgressBP_C.EventCraftingCanceled
// (Event, Public, BlueprintEvent)

void UDarwinCraftProgressBP_C::EventCraftingCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftProgressBP.DarwinCraftProgressBP_C.EventCraftingCanceled");

	UDarwinCraftProgressBP_C_EventCraftingCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftProgressBP.DarwinCraftProgressBP_C.EventCraftWheelOpen
// (Event, Public, BlueprintEvent)

void UDarwinCraftProgressBP_C::EventCraftWheelOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftProgressBP.DarwinCraftProgressBP_C.EventCraftWheelOpen");

	UDarwinCraftProgressBP_C_EventCraftWheelOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftProgressBP.DarwinCraftProgressBP_C.EventCraftWheelClose
// (Event, Public, BlueprintEvent)

void UDarwinCraftProgressBP_C::EventCraftWheelClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftProgressBP.DarwinCraftProgressBP_C.EventCraftWheelClose");

	UDarwinCraftProgressBP_C_EventCraftWheelClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftProgressBP.DarwinCraftProgressBP_C.ExecuteUbergraph_DarwinCraftProgressBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftProgressBP_C::ExecuteUbergraph_DarwinCraftProgressBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftProgressBP.DarwinCraftProgressBP_C.ExecuteUbergraph_DarwinCraftProgressBP");

	UDarwinCraftProgressBP_C_ExecuteUbergraph_DarwinCraftProgressBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

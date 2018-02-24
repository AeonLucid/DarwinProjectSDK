// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_SuddenDeathWidgetBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SuddenDeathWidgetBP.SuddenDeathWidgetBP_C.Make text red
// (BlueprintCallable, BlueprintEvent)

void USuddenDeathWidgetBP_C::Make_text_red()
{
	static auto fn = UObject::FindObject<UFunction>("Function SuddenDeathWidgetBP.SuddenDeathWidgetBP_C.Make text red");

	USuddenDeathWidgetBP_C_Make_text_red_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SuddenDeathWidgetBP.SuddenDeathWidgetBP_C.Make Text Blue
// (BlueprintCallable, BlueprintEvent)

void USuddenDeathWidgetBP_C::Make_Text_Blue()
{
	static auto fn = UObject::FindObject<UFunction>("Function SuddenDeathWidgetBP.SuddenDeathWidgetBP_C.Make Text Blue");

	USuddenDeathWidgetBP_C_Make_Text_Blue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SuddenDeathWidgetBP.SuddenDeathWidgetBP_C.EventSuddenDeathStartsNow
// (Event, Public, BlueprintEvent)

void USuddenDeathWidgetBP_C::EventSuddenDeathStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function SuddenDeathWidgetBP.SuddenDeathWidgetBP_C.EventSuddenDeathStartsNow");

	USuddenDeathWidgetBP_C_EventSuddenDeathStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SuddenDeathWidgetBP.SuddenDeathWidgetBP_C.ExecuteUbergraph_SuddenDeathWidgetBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USuddenDeathWidgetBP_C::ExecuteUbergraph_SuddenDeathWidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SuddenDeathWidgetBP.SuddenDeathWidgetBP_C.ExecuteUbergraph_SuddenDeathWidgetBP");

	USuddenDeathWidgetBP_C_ExecuteUbergraph_SuddenDeathWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

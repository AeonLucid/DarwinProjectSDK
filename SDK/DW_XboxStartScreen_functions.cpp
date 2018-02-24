// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_XboxStartScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function XboxStartScreen.XboxStartScreen_C.EventProceedToMainMenu
// (Event, Public, BlueprintEvent)

void UXboxStartScreen_C::EventProceedToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function XboxStartScreen.XboxStartScreen_C.EventProceedToMainMenu");

	UXboxStartScreen_C_EventProceedToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XboxStartScreen.XboxStartScreen_C.ProceedToMainMenu
// (BlueprintCallable, BlueprintEvent)

void UXboxStartScreen_C::ProceedToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function XboxStartScreen.XboxStartScreen_C.ProceedToMainMenu");

	UXboxStartScreen_C_ProceedToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XboxStartScreen.XboxStartScreen_C.EventShowButtonPrompt
// (Event, Public, BlueprintEvent)

void UXboxStartScreen_C::EventShowButtonPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function XboxStartScreen.XboxStartScreen_C.EventShowButtonPrompt");

	UXboxStartScreen_C_EventShowButtonPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XboxStartScreen.XboxStartScreen_C.EventHideButtonPrompt
// (Event, Public, BlueprintEvent)

void UXboxStartScreen_C::EventHideButtonPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function XboxStartScreen.XboxStartScreen_C.EventHideButtonPrompt");

	UXboxStartScreen_C_EventHideButtonPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XboxStartScreen.XboxStartScreen_C.ExecuteUbergraph_XboxStartScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXboxStartScreen_C::ExecuteUbergraph_XboxStartScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XboxStartScreen.XboxStartScreen_C.ExecuteUbergraph_XboxStartScreen");

	UXboxStartScreen_C_ExecuteUbergraph_XboxStartScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

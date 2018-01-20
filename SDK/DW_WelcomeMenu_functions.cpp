// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_WelcomeMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WelcomeMenu.WelcomeMenu_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWelcomeMenu_C::BndEvt__Button_NO_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WelcomeMenu.WelcomeMenu_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWelcomeMenu_C_BndEvt__Button_NO_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WelcomeMenu.WelcomeMenu_C.EventMenuClick
// (Event, Public, BlueprintEvent)

void UWelcomeMenu_C::EventMenuClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WelcomeMenu.WelcomeMenu_C.EventMenuClick");

	UWelcomeMenu_C_EventMenuClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WelcomeMenu.WelcomeMenu_C.ExecuteUbergraph_WelcomeMenu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWelcomeMenu_C::ExecuteUbergraph_WelcomeMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WelcomeMenu.WelcomeMenu_C.ExecuteUbergraph_WelcomeMenu");

	UWelcomeMenu_C_ExecuteUbergraph_WelcomeMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

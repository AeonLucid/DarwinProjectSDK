// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_YesNoDialog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YesNoDialog.YesNoDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UYesNoDialog_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function YesNoDialog.YesNoDialog_C.Construct");

	UYesNoDialog_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function YesNoDialog.YesNoDialog_C.BndEvt__ButtonYes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UYesNoDialog_C::BndEvt__ButtonYes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function YesNoDialog.YesNoDialog_C.BndEvt__ButtonYes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UYesNoDialog_C_BndEvt__ButtonYes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function YesNoDialog.YesNoDialog_C.BndEvt__ButtonNo_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UYesNoDialog_C::BndEvt__ButtonNo_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function YesNoDialog.YesNoDialog_C.BndEvt__ButtonNo_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UYesNoDialog_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function YesNoDialog.YesNoDialog_C.EventMenuBack
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsEscape                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UYesNoDialog_C::EventMenuBack(bool* bIsEscape)
{
	static auto fn = UObject::FindObject<UFunction>("Function YesNoDialog.YesNoDialog_C.EventMenuBack");

	UYesNoDialog_C_EventMenuBack_Params params;
	params.bIsEscape = bIsEscape;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function YesNoDialog.YesNoDialog_C.EventMenuClick
// (Event, Public, BlueprintEvent)

void UYesNoDialog_C::EventMenuClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function YesNoDialog.YesNoDialog_C.EventMenuClick");

	UYesNoDialog_C_EventMenuClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function YesNoDialog.YesNoDialog_C.ExecuteUbergraph_YesNoDialog
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UYesNoDialog_C::ExecuteUbergraph_YesNoDialog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YesNoDialog.YesNoDialog_C.ExecuteUbergraph_YesNoDialog");

	UYesNoDialog_C_ExecuteUbergraph_YesNoDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function YesNoDialog.YesNoDialog_C.EventDispatcherButton2__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UYesNoDialog_C::EventDispatcherButton2__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function YesNoDialog.YesNoDialog_C.EventDispatcherButton2__DelegateSignature");

	UYesNoDialog_C_EventDispatcherButton2__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function YesNoDialog.YesNoDialog_C.EventDispatcherButton1__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UYesNoDialog_C::EventDispatcherButton1__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function YesNoDialog.YesNoDialog_C.EventDispatcherButton1__DelegateSignature");

	UYesNoDialog_C_EventDispatcherButton1__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

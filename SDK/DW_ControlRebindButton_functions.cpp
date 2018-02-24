// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ControlRebindButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ControlRebindButton.ControlRebindButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UControlRebindButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRebindButton.ControlRebindButton_C.Construct");

	UControlRebindButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRebindButton.ControlRebindButton_C.BndEvt__Button_Forward_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UControlRebindButton_C::BndEvt__Button_Forward_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRebindButton.ControlRebindButton_C.BndEvt__Button_Forward_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");

	UControlRebindButton_C_BndEvt__Button_Forward_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRebindButton.ControlRebindButton_C.EventInputRebindSucceeded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName*                  ActionToRebind                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FText*                  NewKeyName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UControlRebindButton_C::EventInputRebindSucceeded(struct FName* ActionToRebind, struct FText* NewKeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRebindButton.ControlRebindButton_C.EventInputRebindSucceeded");

	UControlRebindButton_C_EventInputRebindSucceeded_Params params;
	params.ActionToRebind = ActionToRebind;
	params.NewKeyName = NewKeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRebindButton.ControlRebindButton_C.EventInputRebindCanceled
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName*                  ActionToRebind                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UControlRebindButton_C::EventInputRebindCanceled(struct FName* ActionToRebind)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRebindButton.ControlRebindButton_C.EventInputRebindCanceled");

	UControlRebindButton_C_EventInputRebindCanceled_Params params;
	params.ActionToRebind = ActionToRebind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRebindButton.ControlRebindButton_C.EventInputBindingCleared
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FName>*          ActionName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UControlRebindButton_C::EventInputBindingCleared(TArray<struct FName>* ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRebindButton.ControlRebindButton_C.EventInputBindingCleared");

	UControlRebindButton_C_EventInputBindingCleared_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRebindButton.ControlRebindButton_C.EventInputResetToDefault
// (Event, Public, BlueprintEvent)

void UControlRebindButton_C::EventInputResetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRebindButton.ControlRebindButton_C.EventInputResetToDefault");

	UControlRebindButton_C_EventInputResetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRebindButton.ControlRebindButton_C.ExecuteUbergraph_ControlRebindButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlRebindButton_C::ExecuteUbergraph_ControlRebindButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRebindButton.ControlRebindButton_C.ExecuteUbergraph_ControlRebindButton");

	UControlRebindButton_C_ExecuteUbergraph_ControlRebindButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

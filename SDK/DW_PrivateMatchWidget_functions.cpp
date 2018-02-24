// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PrivateMatchWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrivateMatchWidget.PrivateMatchWidget_C.BndEvt__Button_JOIN_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPrivateMatchWidget_C::BndEvt__Button_JOIN_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchWidget.PrivateMatchWidget_C.BndEvt__Button_JOIN_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature");

	UPrivateMatchWidget_C_BndEvt__Button_JOIN_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchWidget.PrivateMatchWidget_C.BndEvt__Button_CREATE_K2Node_ComponentBoundEvent_83_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPrivateMatchWidget_C::BndEvt__Button_CREATE_K2Node_ComponentBoundEvent_83_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchWidget.PrivateMatchWidget_C.BndEvt__Button_CREATE_K2Node_ComponentBoundEvent_83_OnButtonClickedEvent__DelegateSignature");

	UPrivateMatchWidget_C_BndEvt__Button_CREATE_K2Node_ComponentBoundEvent_83_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchWidget.PrivateMatchWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPrivateMatchWidget_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchWidget.PrivateMatchWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UPrivateMatchWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchWidget.PrivateMatchWidget_C.BndEvt__CodeBox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPrivateMatchWidget_C::BndEvt__CodeBox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchWidget.PrivateMatchWidget_C.BndEvt__CodeBox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature");

	UPrivateMatchWidget_C_BndEvt__CodeBox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchWidget.PrivateMatchWidget_C.EventMenuBack
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsEscape                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrivateMatchWidget_C::EventMenuBack(bool* bIsEscape)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchWidget.PrivateMatchWidget_C.EventMenuBack");

	UPrivateMatchWidget_C_EventMenuBack_Params params;
	params.bIsEscape = bIsEscape;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchWidget.PrivateMatchWidget_C.EventMenuYPressed
// (Event, Public, BlueprintEvent)

void UPrivateMatchWidget_C::EventMenuYPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchWidget.PrivateMatchWidget_C.EventMenuYPressed");

	UPrivateMatchWidget_C_EventMenuYPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchWidget.PrivateMatchWidget_C.BndEvt__CodeBox_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrivateMatchWidget_C::BndEvt__CodeBox_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchWidget.PrivateMatchWidget_C.BndEvt__CodeBox_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UPrivateMatchWidget_C_BndEvt__CodeBox_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchWidget.PrivateMatchWidget_C.JoinByEnter
// (BlueprintCallable, BlueprintEvent)

void UPrivateMatchWidget_C::JoinByEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchWidget.PrivateMatchWidget_C.JoinByEnter");

	UPrivateMatchWidget_C_JoinByEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchWidget.PrivateMatchWidget_C.EventMenuXPressed
// (Event, Public, BlueprintEvent)

void UPrivateMatchWidget_C::EventMenuXPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchWidget.PrivateMatchWidget_C.EventMenuXPressed");

	UPrivateMatchWidget_C_EventMenuXPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchWidget.PrivateMatchWidget_C.InitializeInputs
// (BlueprintCallable, BlueprintEvent)

void UPrivateMatchWidget_C::InitializeInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchWidget.PrivateMatchWidget_C.InitializeInputs");

	UPrivateMatchWidget_C_InitializeInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchWidget.PrivateMatchWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPrivateMatchWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchWidget.PrivateMatchWidget_C.Construct");

	UPrivateMatchWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchWidget.PrivateMatchWidget_C.ExecuteUbergraph_PrivateMatchWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrivateMatchWidget_C::ExecuteUbergraph_PrivateMatchWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchWidget.PrivateMatchWidget_C.ExecuteUbergraph_PrivateMatchWidget");

	UPrivateMatchWidget_C_ExecuteUbergraph_PrivateMatchWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

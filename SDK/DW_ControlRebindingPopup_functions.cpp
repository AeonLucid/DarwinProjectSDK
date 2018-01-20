// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ControlRebindingPopup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ControlRebindingPopup.ControlRebindingPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UControlRebindingPopup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRebindingPopup.ControlRebindingPopup_C.Construct");

	UControlRebindingPopup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRebindingPopup.ControlRebindingPopup_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UControlRebindingPopup_C::BndEvt__Button_YES_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRebindingPopup.ControlRebindingPopup_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UControlRebindingPopup_C_BndEvt__Button_YES_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRebindingPopup.ControlRebindingPopup_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UControlRebindingPopup_C::BndEvt__Button_NO_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRebindingPopup.ControlRebindingPopup_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature");

	UControlRebindingPopup_C_BndEvt__Button_NO_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRebindingPopup.ControlRebindingPopup_C.EventInputRebindCollision
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FName>*          CollidingActionName            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FText*                  WantedKeyName                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UControlRebindingPopup_C::EventInputRebindCollision(TArray<struct FName>* CollidingActionName, struct FText* WantedKeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRebindingPopup.ControlRebindingPopup_C.EventInputRebindCollision");

	UControlRebindingPopup_C_EventInputRebindCollision_Params params;
	params.CollidingActionName = CollidingActionName;
	params.WantedKeyName = WantedKeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRebindingPopup.ControlRebindingPopup_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UControlRebindingPopup_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRebindingPopup.ControlRebindingPopup_C.Destruct");

	UControlRebindingPopup_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRebindingPopup.ControlRebindingPopup_C.ExecuteUbergraph_ControlRebindingPopup
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlRebindingPopup_C::ExecuteUbergraph_ControlRebindingPopup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRebindingPopup.ControlRebindingPopup_C.ExecuteUbergraph_ControlRebindingPopup");

	UControlRebindingPopup_C_ExecuteUbergraph_ControlRebindingPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

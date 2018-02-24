// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MuteAllButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MuteAllButton.MuteAllButton_C.MakeBlue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMuteAllButton_C::MakeBlue()
{
	static auto fn = UObject::FindObject<UFunction>("Function MuteAllButton.MuteAllButton_C.MakeBlue");

	UMuteAllButton_C_MakeBlue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MuteAllButton.MuteAllButton_C.MakeRed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMuteAllButton_C::MakeRed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MuteAllButton.MuteAllButton_C.MakeRed");

	UMuteAllButton_C_MakeRed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MuteAllButton.MuteAllButton_C.SetMute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           muted                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMuteAllButton_C::SetMute(bool muted)
{
	static auto fn = UObject::FindObject<UFunction>("Function MuteAllButton.MuteAllButton_C.SetMute");

	UMuteAllButton_C_SetMute_Params params;
	params.muted = muted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MuteAllButton.MuteAllButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMuteAllButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MuteAllButton.MuteAllButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UMuteAllButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MuteAllButton.MuteAllButton_C.EventToggleMuteAll
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMuteAllButton_C::EventToggleMuteAll(bool* active)
{
	static auto fn = UObject::FindObject<UFunction>("Function MuteAllButton.MuteAllButton_C.EventToggleMuteAll");

	UMuteAllButton_C_EventToggleMuteAll_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MuteAllButton.MuteAllButton_C.ExecuteUbergraph_MuteAllButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMuteAllButton_C::ExecuteUbergraph_MuteAllButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MuteAllButton.MuteAllButton_C.ExecuteUbergraph_MuteAllButton");

	UMuteAllButton_C_ExecuteUbergraph_MuteAllButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PlayerSDRatingBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerSDRatingBP.PlayerSDRatingBP_C.HoveredStar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StarValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSDRatingBP_C::HoveredStar(int StarValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSDRatingBP.PlayerSDRatingBP_C.HoveredStar");

	UPlayerSDRatingBP_C_HoveredStar_Params params;
	params.StarValue = StarValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSDRatingBP.PlayerSDRatingBP_C.ClickedStar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StarValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSDRatingBP_C::ClickedStar(int StarValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSDRatingBP.PlayerSDRatingBP_C.ClickedStar");

	UPlayerSDRatingBP_C_ClickedStar_Params params;
	params.StarValue = StarValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSDRatingBP.PlayerSDRatingBP_C.UnHoveredStar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StarValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSDRatingBP_C::UnHoveredStar(int StarValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSDRatingBP.PlayerSDRatingBP_C.UnHoveredStar");

	UPlayerSDRatingBP_C_UnHoveredStar_Params params;
	params.StarValue = StarValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSDRatingBP.PlayerSDRatingBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerSDRatingBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSDRatingBP.PlayerSDRatingBP_C.Construct");

	UPlayerSDRatingBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSDRatingBP.PlayerSDRatingBP_C.EventShowDirectorJoined
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                ShowDirectorName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerSDRatingBP_C::EventShowDirectorJoined(struct FString* ShowDirectorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSDRatingBP.PlayerSDRatingBP_C.EventShowDirectorJoined");

	UPlayerSDRatingBP_C_EventShowDirectorJoined_Params params;
	params.ShowDirectorName = ShowDirectorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSDRatingBP.PlayerSDRatingBP_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerSDRatingBP_C::BndEvt__Button_YES_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSDRatingBP.PlayerSDRatingBP_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature");

	UPlayerSDRatingBP_C_BndEvt__Button_YES_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSDRatingBP.PlayerSDRatingBP_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_65_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerSDRatingBP_C::BndEvt__Button_YES_K2Node_ComponentBoundEvent_65_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSDRatingBP.PlayerSDRatingBP_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_65_OnButtonHoverEvent__DelegateSignature");

	UPlayerSDRatingBP_C_BndEvt__Button_YES_K2Node_ComponentBoundEvent_65_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSDRatingBP.PlayerSDRatingBP_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerSDRatingBP_C::BndEvt__Button_YES_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSDRatingBP.PlayerSDRatingBP_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UPlayerSDRatingBP_C_BndEvt__Button_YES_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSDRatingBP.PlayerSDRatingBP_C.EventMenuXPressed
// (Event, Public, BlueprintEvent)

void UPlayerSDRatingBP_C::EventMenuXPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSDRatingBP.PlayerSDRatingBP_C.EventMenuXPressed");

	UPlayerSDRatingBP_C_EventMenuXPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSDRatingBP.PlayerSDRatingBP_C.Remove rating
// (BlueprintCallable, BlueprintEvent)

void UPlayerSDRatingBP_C::Remove_rating()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSDRatingBP.PlayerSDRatingBP_C.Remove rating");

	UPlayerSDRatingBP_C_Remove_rating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSDRatingBP.PlayerSDRatingBP_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UPlayerSDRatingBP_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSDRatingBP.PlayerSDRatingBP_C.EventInputSourceChanged");

	UPlayerSDRatingBP_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSDRatingBP.PlayerSDRatingBP_C.EventMenuClick
// (Event, Public, BlueprintEvent)

void UPlayerSDRatingBP_C::EventMenuClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSDRatingBP.PlayerSDRatingBP_C.EventMenuClick");

	UPlayerSDRatingBP_C_EventMenuClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSDRatingBP.PlayerSDRatingBP_C.EventMenuRight
// (Event, Public, BlueprintEvent)

void UPlayerSDRatingBP_C::EventMenuRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSDRatingBP.PlayerSDRatingBP_C.EventMenuRight");

	UPlayerSDRatingBP_C_EventMenuRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSDRatingBP.PlayerSDRatingBP_C.EventMenuLeft
// (Event, Public, BlueprintEvent)

void UPlayerSDRatingBP_C::EventMenuLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSDRatingBP.PlayerSDRatingBP_C.EventMenuLeft");

	UPlayerSDRatingBP_C_EventMenuLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSDRatingBP.PlayerSDRatingBP_C.OnShow
// (BlueprintCallable, BlueprintEvent)

void UPlayerSDRatingBP_C::OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSDRatingBP.PlayerSDRatingBP_C.OnShow");

	UPlayerSDRatingBP_C_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSDRatingBP.PlayerSDRatingBP_C.ExecuteUbergraph_PlayerSDRatingBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSDRatingBP_C::ExecuteUbergraph_PlayerSDRatingBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSDRatingBP.PlayerSDRatingBP_C.ExecuteUbergraph_PlayerSDRatingBP");

	UPlayerSDRatingBP_C_ExecuteUbergraph_PlayerSDRatingBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MenuEndOfGame_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MenuEndOfGame.MenuEndOfGame_C.UpdateInputMode
// (Public, BlueprintCallable, BlueprintEvent)

void UMenuEndOfGame_C::UpdateInputMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuEndOfGame.MenuEndOfGame_C.UpdateInputMode");

	UMenuEndOfGame_C_UpdateInputMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuEndOfGame.MenuEndOfGame_C.SetMenuVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuEndOfGame_C::SetMenuVisibility(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuEndOfGame.MenuEndOfGame_C.SetMenuVisibility");

	UMenuEndOfGame_C_SetMenuVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuEndOfGame.MenuEndOfGame_C.GetStatName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EStatTypeEnum                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)

void UMenuEndOfGame_C::GetStatName(EStatTypeEnum Type, struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuEndOfGame.MenuEndOfGame_C.GetStatName");

	UMenuEndOfGame_C_GetStatName_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function MenuEndOfGame.MenuEndOfGame_C.GetTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EStatTypeEnum                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Title                          (Parm, OutParm, ZeroConstructor)

void UMenuEndOfGame_C::GetTitle(EStatTypeEnum Type, struct FString* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuEndOfGame.MenuEndOfGame_C.GetTitle");

	UMenuEndOfGame_C_GetTitle_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Title != nullptr)
		*Title = params.Title;
}


// Function MenuEndOfGame.MenuEndOfGame_C.BndEvt__ButtonMainMenu_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenuEndOfGame_C::BndEvt__ButtonMainMenu_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuEndOfGame.MenuEndOfGame_C.BndEvt__ButtonMainMenu_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UMenuEndOfGame_C_BndEvt__ButtonMainMenu_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuEndOfGame.MenuEndOfGame_C.EventUpdateGameEndTime
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                gameTimeStr                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMenuEndOfGame_C::EventUpdateGameEndTime(struct FString* gameTimeStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuEndOfGame.MenuEndOfGame_C.EventUpdateGameEndTime");

	UMenuEndOfGame_C_EventUpdateGameEndTime_Params params;
	params.gameTimeStr = gameTimeStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuEndOfGame.MenuEndOfGame_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenuEndOfGame_C::BndEvt__Button_Next_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuEndOfGame.MenuEndOfGame_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature");

	UMenuEndOfGame_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuEndOfGame.MenuEndOfGame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMenuEndOfGame_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuEndOfGame.MenuEndOfGame_C.Construct");

	UMenuEndOfGame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuEndOfGame.MenuEndOfGame_C.EventPlayerIsWinner
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBloodPactActive               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           allyID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuEndOfGame_C::EventPlayerIsWinner(int* playerID, bool* bBloodPactActive, int* allyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuEndOfGame.MenuEndOfGame_C.EventPlayerIsWinner");

	UMenuEndOfGame_C_EventPlayerIsWinner_Params params;
	params.playerID = playerID;
	params.bBloodPactActive = bBloodPactActive;
	params.allyID = allyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuEndOfGame.MenuEndOfGame_C.EventMenuClick
// (Event, Public, BlueprintEvent)

void UMenuEndOfGame_C::EventMenuClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuEndOfGame.MenuEndOfGame_C.EventMenuClick");

	UMenuEndOfGame_C_EventMenuClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuEndOfGame.MenuEndOfGame_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMenuEndOfGame_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuEndOfGame.MenuEndOfGame_C.Destruct");

	UMenuEndOfGame_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuEndOfGame.MenuEndOfGame_C.EventMenuBack
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsEscape                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuEndOfGame_C::EventMenuBack(bool* bIsEscape)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuEndOfGame.MenuEndOfGame_C.EventMenuBack");

	UMenuEndOfGame_C_EventMenuBack_Params params;
	params.bIsEscape = bIsEscape;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuEndOfGame.MenuEndOfGame_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UMenuEndOfGame_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuEndOfGame.MenuEndOfGame_C.EventInputSourceChanged");

	UMenuEndOfGame_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuEndOfGame.MenuEndOfGame_C.ExecuteUbergraph_MenuEndOfGame
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuEndOfGame_C::ExecuteUbergraph_MenuEndOfGame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuEndOfGame.MenuEndOfGame_C.ExecuteUbergraph_MenuEndOfGame");

	UMenuEndOfGame_C_ExecuteUbergraph_MenuEndOfGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

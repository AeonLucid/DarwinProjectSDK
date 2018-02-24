// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinInventoryBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinInventoryBP.DarwinInventoryBP_C.Key Binding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDarwinInventoryBP_C::Key_Binding()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.Key Binding");

	UDarwinInventoryBP_C_Key_Binding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.GetToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UDarwinInventoryBP_C::GetToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.GetToolTipWidget_1");

	UDarwinInventoryBP_C_GetToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.IsAnyInventorySlotHovered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHovered                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryBP_C::IsAnyInventorySlotHovered(bool* IsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.IsAnyInventorySlotHovered");

	UDarwinInventoryBP_C_IsAnyInventorySlotHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsHovered != nullptr)
		*IsHovered = params.IsHovered;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.FindPreviousFullSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InitialSlot                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PreviousFullSlot               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryBP_C::FindPreviousFullSlot(int InitialSlot, int* PreviousFullSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.FindPreviousFullSlot");

	UDarwinInventoryBP_C_FindPreviousFullSlot_Params params;
	params.InitialSlot = InitialSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PreviousFullSlot != nullptr)
		*PreviousFullSlot = params.PreviousFullSlot;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.FindNextFullSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InitialSlot                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NextFullSlot                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryBP_C::FindNextFullSlot(int InitialSlot, int* NextFullSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.FindNextFullSlot");

	UDarwinInventoryBP_C_FindNextFullSlot_Params params;
	params.InitialSlot = InitialSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextFullSlot != nullptr)
		*NextFullSlot = params.NextFullSlot;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.DarwinSetTooltipText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDarwinInventorySlot_C*  InvSlot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryBP_C::DarwinSetTooltipText(class UDarwinInventorySlot_C* InvSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.DarwinSetTooltipText");

	UDarwinInventoryBP_C_DarwinSetTooltipText_Params params;
	params.InvSlot = InvSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.EventNewWheelventoryMode
// (Event, Public, BlueprintEvent)
// Parameters:
// EWheelventoryMode*             newMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryBP_C::EventNewWheelventoryMode(EWheelventoryMode* newMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.EventNewWheelventoryMode");

	UDarwinInventoryBP_C_EventNewWheelventoryMode_Params params;
	params.newMode = newMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.EventCraftWheelClose
// (Event, Public, BlueprintEvent)

void UDarwinInventoryBP_C::EventCraftWheelClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.EventCraftWheelClose");

	UDarwinInventoryBP_C_EventCraftWheelClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.EventCraftWheelOpen
// (Event, Public, BlueprintEvent)

void UDarwinInventoryBP_C::EventCraftWheelOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.EventCraftWheelOpen");

	UDarwinInventoryBP_C_EventCraftWheelOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.EventGameStartsInSeconds
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryBP_C::EventGameStartsInSeconds(int* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.EventGameStartsInSeconds");

	UDarwinInventoryBP_C_EventGameStartsInSeconds_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.EventNumberOfGamesPlayed
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           nbGamesPlayed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryBP_C::EventNumberOfGamesPlayed(int* nbGamesPlayed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.EventNumberOfGamesPlayed");

	UDarwinInventoryBP_C_EventNumberOfGamesPlayed_Params params;
	params.nbGamesPlayed = nbGamesPlayed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.UpdateTuto
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryBP_C::UpdateTuto(float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.UpdateTuto");

	UDarwinInventoryBP_C_UpdateTuto_Params params;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.EventGameStartsNow
// (Event, Public, BlueprintEvent)

void UDarwinInventoryBP_C::EventGameStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.EventGameStartsNow");

	UDarwinInventoryBP_C_EventGameStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.come back to keyboard
// (BlueprintCallable, BlueprintEvent)

void UDarwinInventoryBP_C::come_back_to_keyboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.come back to keyboard");

	UDarwinInventoryBP_C_come_back_to_keyboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.EventInventorySlotChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryBP_C::EventInventorySlotChanged(int* Index, EDarwinItemTypeEnum* Type, int* Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.EventInventorySlotChanged");

	UDarwinInventoryBP_C_EventInventorySlotChanged_Params params;
	params.Index = Index;
	params.Type = Type;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryBP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.Tick");

	UDarwinInventoryBP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.EventPlayerCraftedPower
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum*           powerType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryBP_C::EventPlayerCraftedPower(int* playerID, EDarwinItemTypeEnum* powerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.EventPlayerCraftedPower");

	UDarwinInventoryBP_C_EventPlayerCraftedPower_Params params;
	params.playerID = playerID;
	params.powerType = powerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.EventUpdateNumberOfElectronic
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           numberOfElectronic             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIncrement                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryBP_C::EventUpdateNumberOfElectronic(int* numberOfElectronic, bool* bIncrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.EventUpdateNumberOfElectronic");

	UDarwinInventoryBP_C_EventUpdateNumberOfElectronic_Params params;
	params.numberOfElectronic = numberOfElectronic;
	params.bIncrement = bIncrement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.EventGamepadInventoryUse
// (Event, Public, BlueprintEvent)

void UDarwinInventoryBP_C::EventGamepadInventoryUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.EventGamepadInventoryUse");

	UDarwinInventoryBP_C_EventGamepadInventoryUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.ManageGamepad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryBP_C::ManageGamepad(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.ManageGamepad");

	UDarwinInventoryBP_C_ManageGamepad_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.EventGameHasStarted
// (Event, Public, BlueprintEvent)

void UDarwinInventoryBP_C::EventGameHasStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.EventGameHasStarted");

	UDarwinInventoryBP_C_EventGameHasStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UDarwinInventoryBP_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.EventInputSourceChanged");

	UDarwinInventoryBP_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDarwinInventoryBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.Construct");

	UDarwinInventoryBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.EventGamepadInventoryPressed
// (Event, Public, BlueprintEvent)

void UDarwinInventoryBP_C::EventGamepadInventoryPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.EventGamepadInventoryPressed");

	UDarwinInventoryBP_C_EventGamepadInventoryPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.EventGamepadInventoryReleased
// (Event, Public, BlueprintEvent)

void UDarwinInventoryBP_C::EventGamepadInventoryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.EventGamepadInventoryReleased");

	UDarwinInventoryBP_C_EventGamepadInventoryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.EventGamepadInventoryMoveRight
// (Event, Public, BlueprintEvent)

void UDarwinInventoryBP_C::EventGamepadInventoryMoveRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.EventGamepadInventoryMoveRight");

	UDarwinInventoryBP_C_EventGamepadInventoryMoveRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.EventGamepadInventoryMoveLeft
// (Event, Public, BlueprintEvent)

void UDarwinInventoryBP_C::EventGamepadInventoryMoveLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.EventGamepadInventoryMoveLeft");

	UDarwinInventoryBP_C_EventGamepadInventoryMoveLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.EventInputRebindSucceeded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName*                  ActionToRebind                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FText*                  NewKeyName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDarwinInventoryBP_C::EventInputRebindSucceeded(struct FName* ActionToRebind, struct FText* NewKeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.EventInputRebindSucceeded");

	UDarwinInventoryBP_C_EventInputRebindSucceeded_Params params;
	params.ActionToRebind = ActionToRebind;
	params.NewKeyName = NewKeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.EventInputResetToDefault
// (Event, Public, BlueprintEvent)

void UDarwinInventoryBP_C::EventInputResetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.EventInputResetToDefault");

	UDarwinInventoryBP_C_EventInputResetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.EventManHuntStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           targetCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinInventoryBP_C::EventManHuntStart(int* targetCharacterID, struct FVector2D* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.EventManHuntStart");

	UDarwinInventoryBP_C_EventManHuntStart_Params params;
	params.targetCharacterID = targetCharacterID;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryBP.DarwinInventoryBP_C.ExecuteUbergraph_DarwinInventoryBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryBP_C::ExecuteUbergraph_DarwinInventoryBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryBP.DarwinInventoryBP_C.ExecuteUbergraph_DarwinInventoryBP");

	UDarwinInventoryBP_C_ExecuteUbergraph_DarwinInventoryBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinShootingWidgetBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.Key Binding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDarwinShootingWidgetBP_C::Key_Binding()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.Key Binding");

	UDarwinShootingWidgetBP_C_Key_Binding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventAimCharge
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinShootingWidgetBP_C::EventAimCharge(float* progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventAimCharge");

	UDarwinShootingWidgetBP_C_EventAimCharge_Params params;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventShootFail
// (Event, Public, BlueprintEvent)

void UDarwinShootingWidgetBP_C::EventShootFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventShootFail");

	UDarwinShootingWidgetBP_C_EventShootFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventUpdateNumberOfArrows
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           numberOfArrows                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIncrement                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinShootingWidgetBP_C::EventUpdateNumberOfArrows(int* numberOfArrows, bool* bIncrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventUpdateNumberOfArrows");

	UDarwinShootingWidgetBP_C_EventUpdateNumberOfArrows_Params params;
	params.numberOfArrows = numberOfArrows;
	params.bIncrement = bIncrement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventUpdateIsInLobby
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsInLobby                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinShootingWidgetBP_C::EventUpdateIsInLobby(bool* bIsInLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventUpdateIsInLobby");

	UDarwinShootingWidgetBP_C_EventUpdateIsInLobby_Params params;
	params.bIsInLobby = bIsInLobby;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventAimEnd
// (Event, Public, BlueprintEvent)

void UDarwinShootingWidgetBP_C::EventAimEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventAimEnd");

	UDarwinShootingWidgetBP_C_EventAimEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventAimFull
// (Event, Public, BlueprintEvent)

void UDarwinShootingWidgetBP_C::EventAimFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventAimFull");

	UDarwinShootingWidgetBP_C_EventAimFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventReloadEnd
// (Event, Public, BlueprintEvent)

void UDarwinShootingWidgetBP_C::EventReloadEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventReloadEnd");

	UDarwinShootingWidgetBP_C_EventReloadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventHighlightedShotPossible
// (Event, Public, BlueprintEvent)

void UDarwinShootingWidgetBP_C::EventHighlightedShotPossible()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventHighlightedShotPossible");

	UDarwinShootingWidgetBP_C_EventHighlightedShotPossible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventNoHighlightedShot
// (Event, Public, BlueprintEvent)

void UDarwinShootingWidgetBP_C::EventNoHighlightedShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventNoHighlightedShot");

	UDarwinShootingWidgetBP_C_EventNoHighlightedShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventInAirStart
// (Event, Public, BlueprintEvent)

void UDarwinShootingWidgetBP_C::EventInAirStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventInAirStart");

	UDarwinShootingWidgetBP_C_EventInAirStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventInAirEnd
// (Event, Public, BlueprintEvent)

void UDarwinShootingWidgetBP_C::EventInAirEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventInAirEnd");

	UDarwinShootingWidgetBP_C_EventInAirEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventUpdateLootActionProgress
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          isLooting                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                playerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float*                         progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinShootingWidgetBP_C::EventUpdateLootActionProgress(bool* isLooting, EDarwinItemTypeEnum* Type, struct FString* playerName, float* progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventUpdateLootActionProgress");

	UDarwinShootingWidgetBP_C_EventUpdateLootActionProgress_Params params;
	params.isLooting = isLooting;
	params.Type = Type;
	params.playerName = playerName;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventGameStartsNow
// (Event, Public, BlueprintEvent)

void UDarwinShootingWidgetBP_C::EventGameStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventGameStartsNow");

	UDarwinShootingWidgetBP_C_EventGameStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventGameHasStarted
// (Event, Public, BlueprintEvent)

void UDarwinShootingWidgetBP_C::EventGameHasStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventGameHasStarted");

	UDarwinShootingWidgetBP_C_EventGameHasStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.PlayTutoNoArrows
// (BlueprintCallable, BlueprintEvent)

void UDarwinShootingWidgetBP_C::PlayTutoNoArrows()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.PlayTutoNoArrows");

	UDarwinShootingWidgetBP_C_PlayTutoNoArrows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventUpdateSniperZoom
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           currentSniperZoomIndex         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinShootingWidgetBP_C::EventUpdateSniperZoom(int* currentSniperZoomIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventUpdateSniperZoom");

	UDarwinShootingWidgetBP_C_EventUpdateSniperZoom_Params params;
	params.currentSniperZoomIndex = currentSniperZoomIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventTeleportAimStart
// (Event, Public, BlueprintEvent)

void UDarwinShootingWidgetBP_C::EventTeleportAimStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventTeleportAimStart");

	UDarwinShootingWidgetBP_C_EventTeleportAimStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventTeleportAimEnd
// (Event, Public, BlueprintEvent)

void UDarwinShootingWidgetBP_C::EventTeleportAimEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventTeleportAimEnd");

	UDarwinShootingWidgetBP_C_EventTeleportAimEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventAimStart
// (Event, Public, BlueprintEvent)

void UDarwinShootingWidgetBP_C::EventAimStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventAimStart");

	UDarwinShootingWidgetBP_C_EventAimStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.RemoveTutoNoArrows
// (BlueprintCallable, BlueprintEvent)

void UDarwinShootingWidgetBP_C::RemoveTutoNoArrows()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.RemoveTutoNoArrows");

	UDarwinShootingWidgetBP_C_RemoveTutoNoArrows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDarwinShootingWidgetBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.Construct");

	UDarwinShootingWidgetBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventInputRebindSucceeded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName*                  ActionToRebind                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FText*                  NewKeyName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDarwinShootingWidgetBP_C::EventInputRebindSucceeded(struct FName* ActionToRebind, struct FText* NewKeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventInputRebindSucceeded");

	UDarwinShootingWidgetBP_C_EventInputRebindSucceeded_Params params;
	params.ActionToRebind = ActionToRebind;
	params.NewKeyName = NewKeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventInputResetToDefault
// (Event, Public, BlueprintEvent)

void UDarwinShootingWidgetBP_C::EventInputResetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventInputResetToDefault");

	UDarwinShootingWidgetBP_C_EventInputResetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.ExecuteUbergraph_DarwinShootingWidgetBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinShootingWidgetBP_C::ExecuteUbergraph_DarwinShootingWidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.ExecuteUbergraph_DarwinShootingWidgetBP");

	UDarwinShootingWidgetBP_C_ExecuteUbergraph_DarwinShootingWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

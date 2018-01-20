// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CurrentGameInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CurrentGameInfo.CurrentGameInfo_C.Key Binding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCurrentGameInfo_C::Key_Binding()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.Key Binding");

	UCurrentGameInfo_C_Key_Binding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventUpdateNumberOfPlayersLeftAlive
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           numberAlive                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCurrentGameInfo_C::EventUpdateNumberOfPlayersLeftAlive(int* numberAlive)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventUpdateNumberOfPlayersLeftAlive");

	UCurrentGameInfo_C_EventUpdateNumberOfPlayersLeftAlive_Params params;
	params.numberAlive = numberAlive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventGameStartsNow
// (Event, Public, BlueprintEvent)

void UCurrentGameInfo_C::EventGameStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventGameStartsNow");

	UCurrentGameInfo_C_EventGameStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventCraftWheelOpen
// (Event, Public, BlueprintEvent)

void UCurrentGameInfo_C::EventCraftWheelOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventCraftWheelOpen");

	UCurrentGameInfo_C_EventCraftWheelOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventUpdateNumberOfPlayersAtGameStart
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           numberAtGameStart              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCurrentGameInfo_C::EventUpdateNumberOfPlayersAtGameStart(int* numberAtGameStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventUpdateNumberOfPlayersAtGameStart");

	UCurrentGameInfo_C_EventUpdateNumberOfPlayersAtGameStart_Params params;
	params.numberAtGameStart = numberAtGameStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventGameHasStarted
// (Event, Public, BlueprintEvent)

void UCurrentGameInfo_C::EventGameHasStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventGameHasStarted");

	UCurrentGameInfo_C_EventGameHasStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventSuddenDeathStartsNow
// (Event, Public, BlueprintEvent)

void UCurrentGameInfo_C::EventSuddenDeathStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventSuddenDeathStartsNow");

	UCurrentGameInfo_C_EventSuddenDeathStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventNuclearBlastCountdownInitiated
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCurrentGameInfo_C::EventNuclearBlastCountdownInitiated(struct FString* zoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventNuclearBlastCountdownInitiated");

	UCurrentGameInfo_C_EventNuclearBlastCountdownInitiated_Params params;
	params.zoneName = zoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventNuclearBlastEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCurrentGameInfo_C::EventNuclearBlastEnded(struct FString* zoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventNuclearBlastEnded");

	UCurrentGameInfo_C_EventNuclearBlastEnded_Params params;
	params.zoneName = zoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventNuclearBlastStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCurrentGameInfo_C::EventNuclearBlastStarted(struct FString* zoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventNuclearBlastStarted");

	UCurrentGameInfo_C_EventNuclearBlastStarted_Params params;
	params.zoneName = zoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventNuclearBlastUpdateCountdown
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                timeLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           timeLeftInteger                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCurrentGameInfo_C::EventNuclearBlastUpdateCountdown(struct FString* zoneName, struct FString* timeLeft, int* timeLeftInteger)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventNuclearBlastUpdateCountdown");

	UCurrentGameInfo_C_EventNuclearBlastUpdateCountdown_Params params;
	params.zoneName = zoneName;
	params.timeLeft = timeLeft;
	params.timeLeftInteger = timeLeftInteger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventUpdateGameTime
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                gameTimeStr                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCurrentGameInfo_C::EventUpdateGameTime(struct FString* gameTimeStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventUpdateGameTime");

	UCurrentGameInfo_C_EventUpdateGameTime_Params params;
	params.gameTimeStr = gameTimeStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventCraftWheelClose
// (Event, Public, BlueprintEvent)

void UCurrentGameInfo_C::EventCraftWheelClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventCraftWheelClose");

	UCurrentGameInfo_C_EventCraftWheelClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventUpdateManHuntInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           targetCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCurrentGameInfo_C::EventUpdateManHuntInfo(struct FString* Time, int* targetCharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventUpdateManHuntInfo");

	UCurrentGameInfo_C_EventUpdateManHuntInfo_Params params;
	params.Time = Time;
	params.targetCharacterID = targetCharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventManHuntEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           targetCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           killerCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCurrentGameInfo_C::EventManHuntEnd(int* targetCharacterID, int* killerCharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventManHuntEnd");

	UCurrentGameInfo_C_EventManHuntEnd_Params params;
	params.targetCharacterID = targetCharacterID;
	params.killerCharacterID = killerCharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventManHuntStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           targetCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCurrentGameInfo_C::EventManHuntStart(int* targetCharacterID, struct FVector2D* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventManHuntStart");

	UCurrentGameInfo_C_EventManHuntStart_Params params;
	params.targetCharacterID = targetCharacterID;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventGravStormStarted
// (Event, Public, BlueprintEvent)

void UCurrentGameInfo_C::EventGravStormStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventGravStormStarted");

	UCurrentGameInfo_C_EventGravStormStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventGravStormUpdateCountdown
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                timeLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCurrentGameInfo_C::EventGravStormUpdateCountdown(struct FString* timeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventGravStormUpdateCountdown");

	UCurrentGameInfo_C_EventGravStormUpdateCountdown_Params params;
	params.timeLeft = timeLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventGravStormEnded
// (Event, Public, BlueprintEvent)

void UCurrentGameInfo_C::EventGravStormEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventGravStormEnded");

	UCurrentGameInfo_C_EventGravStormEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventGravStormUpdateProgress
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCurrentGameInfo_C::EventGravStormUpdateProgress(float* progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventGravStormUpdateProgress");

	UCurrentGameInfo_C_EventGravStormUpdateProgress_Params params;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventEndFollowedByShowDirector
// (Event, Public, BlueprintEvent)

void UCurrentGameInfo_C::EventEndFollowedByShowDirector()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventEndFollowedByShowDirector");

	UCurrentGameInfo_C_EventEndFollowedByShowDirector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventToggleSpeak
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCurrentGameInfo_C::EventToggleSpeak(bool* active)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventToggleSpeak");

	UCurrentGameInfo_C_EventToggleSpeak_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventStartFollowedByShowDirector
// (Event, Public, BlueprintEvent)

void UCurrentGameInfo_C::EventStartFollowedByShowDirector()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventStartFollowedByShowDirector");

	UCurrentGameInfo_C_EventStartFollowedByShowDirector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventShowDirectorJoined
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                showDirectorName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCurrentGameInfo_C::EventShowDirectorJoined(struct FString* showDirectorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventShowDirectorJoined");

	UCurrentGameInfo_C_EventShowDirectorJoined_Params params;
	params.showDirectorName = showDirectorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventShowDirectorLeft
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                showDirectorName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCurrentGameInfo_C::EventShowDirectorLeft(struct FString* showDirectorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventShowDirectorLeft");

	UCurrentGameInfo_C_EventShowDirectorLeft_Params params;
	params.showDirectorName = showDirectorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UCurrentGameInfo_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventInputSourceChanged");

	UCurrentGameInfo_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCurrentGameInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.Construct");

	UCurrentGameInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventInputRebindSucceeded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName*                  ActionToRebind                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FText*                  NewKeyName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCurrentGameInfo_C::EventInputRebindSucceeded(struct FName* ActionToRebind, struct FText* NewKeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventInputRebindSucceeded");

	UCurrentGameInfo_C_EventInputRebindSucceeded_Params params;
	params.ActionToRebind = ActionToRebind;
	params.NewKeyName = NewKeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventInputResetToDefault
// (Event, Public, BlueprintEvent)

void UCurrentGameInfo_C::EventInputResetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventInputResetToDefault");

	UCurrentGameInfo_C_EventInputResetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.ExecuteUbergraph_CurrentGameInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCurrentGameInfo_C::ExecuteUbergraph_CurrentGameInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.ExecuteUbergraph_CurrentGameInfo");

	UCurrentGameInfo_C_ExecuteUbergraph_CurrentGameInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

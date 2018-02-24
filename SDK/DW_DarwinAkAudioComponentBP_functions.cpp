// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinAkAudioComponentBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventEnterMainMenu
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAkAudioComponentBP_C::EventEnterMainMenu(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventEnterMainMenu");

	UDarwinAkAudioComponentBP_C_EventEnterMainMenu_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLeaveMainMenu
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAkAudioComponentBP_C::EventLeaveMainMenu(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLeaveMainMenu");

	UDarwinAkAudioComponentBP_C_EventLeaveMainMenu_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventEnterLobby
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAkAudioComponentBP_C::EventEnterLobby(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventEnterLobby");

	UDarwinAkAudioComponentBP_C_EventEnterLobby_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLeaveLobby
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAkAudioComponentBP_C::EventLeaveLobby(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLeaveLobby");

	UDarwinAkAudioComponentBP_C_EventLeaveLobby_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventEnterGameWorld
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAkAudioComponentBP_C::EventEnterGameWorld(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventEnterGameWorld");

	UDarwinAkAudioComponentBP_C_EventEnterGameWorld_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLeaveGameWorld
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAkAudioComponentBP_C::EventLeaveGameWorld(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLeaveGameWorld");

	UDarwinAkAudioComponentBP_C_EventLeaveGameWorld_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLocalStormIntensity
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAkAudioComponentBP_C::EventLocalStormIntensity(class AActor** Pawn, float* Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLocalStormIntensity");

	UDarwinAkAudioComponentBP_C_EventLocalStormIntensity_Params params;
	params.Pawn = Pawn;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventEnterSuddenDeath
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAkAudioComponentBP_C::EventEnterSuddenDeath(class AActor** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventEnterSuddenDeath");

	UDarwinAkAudioComponentBP_C_EventEnterSuddenDeath_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLeaveSuddenDeath
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAkAudioComponentBP_C::EventLeaveSuddenDeath(class AActor** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLeaveSuddenDeath");

	UDarwinAkAudioComponentBP_C_EventLeaveSuddenDeath_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLocalTimeOfDay
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Hours                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Minutes                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAkAudioComponentBP_C::EventLocalTimeOfDay(class AActor** Pawn, float* Hours, float* Minutes, float* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLocalTimeOfDay");

	UDarwinAkAudioComponentBP_C_EventLocalTimeOfDay_Params params;
	params.Pawn = Pawn;
	params.Hours = Hours;
	params.Minutes = Minutes;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLocalStormSoundStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAkAudioComponentBP_C::EventLocalStormSoundStart(class AActor** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLocalStormSoundStart");

	UDarwinAkAudioComponentBP_C_EventLocalStormSoundStart_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLoadSoundBank
// (Event, Public, BlueprintEvent)

void UDarwinAkAudioComponentBP_C::EventLoadSoundBank()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLoadSoundBank");

	UDarwinAkAudioComponentBP_C_EventLoadSoundBank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventGameIsAboutToStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAkAudioComponentBP_C::EventGameIsAboutToStart(class AActor** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventGameIsAboutToStart");

	UDarwinAkAudioComponentBP_C_EventGameIsAboutToStart_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventGameIsAboutToStartCountdown
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           secondsLeft                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAkAudioComponentBP_C::EventGameIsAboutToStartCountdown(int* secondsLeft, class AActor** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventGameIsAboutToStartCountdown");

	UDarwinAkAudioComponentBP_C_EventGameIsAboutToStartCountdown_Params params;
	params.secondsLeft = secondsLeft;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.CutOffLobbyMusic
// (BlueprintCallable, BlueprintEvent)

void UDarwinAkAudioComponentBP_C::CutOffLobbyMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.CutOffLobbyMusic");

	UDarwinAkAudioComponentBP_C_CutOffLobbyMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.ExecuteUbergraph_DarwinAkAudioComponentBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAkAudioComponentBP_C::ExecuteUbergraph_DarwinAkAudioComponentBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.ExecuteUbergraph_DarwinAkAudioComponentBP");

	UDarwinAkAudioComponentBP_C_ExecuteUbergraph_DarwinAkAudioComponentBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

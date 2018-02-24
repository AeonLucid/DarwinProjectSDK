// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_LobbyPlayerScreendicatorBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventUpdateScreendication
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         arrowScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          onScreen                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          behindCam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyPlayerScreendicatorBP_C::EventUpdateScreendication(float* Angle, float* arrowScale, float* Distance, float* Opacity, bool* onScreen, bool* behindCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventUpdateScreendication");

	ULobbyPlayerScreendicatorBP_C_EventUpdateScreendication_Params params;
	params.Angle = Angle;
	params.arrowScale = arrowScale;
	params.Distance = Distance;
	params.Opacity = Opacity;
	params.onScreen = onScreen;
	params.behindCam = behindCam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventSetDarwinPlayerName
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                playerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULobbyPlayerScreendicatorBP_C::EventSetDarwinPlayerName(struct FString* playerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventSetDarwinPlayerName");

	ULobbyPlayerScreendicatorBP_C_EventSetDarwinPlayerName_Params params;
	params.playerName = playerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventEnterScreen
// (Event, Public, BlueprintEvent)

void ULobbyPlayerScreendicatorBP_C::EventEnterScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventEnterScreen");

	ULobbyPlayerScreendicatorBP_C_EventEnterScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventLeaveScreen
// (Event, Public, BlueprintEvent)

void ULobbyPlayerScreendicatorBP_C::EventLeaveScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventLeaveScreen");

	ULobbyPlayerScreendicatorBP_C_EventLeaveScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventEnterCamStateCharacter
// (Event, Public, BlueprintEvent)

void ULobbyPlayerScreendicatorBP_C::EventEnterCamStateCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventEnterCamStateCharacter");

	ULobbyPlayerScreendicatorBP_C_EventEnterCamStateCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventLeaveCamStateCharacter
// (Event, Public, BlueprintEvent)

void ULobbyPlayerScreendicatorBP_C::EventLeaveCamStateCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventLeaveCamStateCharacter");

	ULobbyPlayerScreendicatorBP_C_EventLeaveCamStateCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventSetCharacterUniqueID
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyPlayerScreendicatorBP_C::EventSetCharacterUniqueID(int* UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventSetCharacterUniqueID");

	ULobbyPlayerScreendicatorBP_C_EventSetCharacterUniqueID_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.ExecuteUbergraph_LobbyPlayerScreendicatorBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyPlayerScreendicatorBP_C::ExecuteUbergraph_LobbyPlayerScreendicatorBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.ExecuteUbergraph_LobbyPlayerScreendicatorBP");

	ULobbyPlayerScreendicatorBP_C_ExecuteUbergraph_LobbyPlayerScreendicatorBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

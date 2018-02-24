// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PlayerStatusScreendicatorBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventUpdateScreendication
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         arrowScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          onScreen                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          behindCam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusScreendicatorBP_C::EventUpdateScreendication(float* Angle, float* arrowScale, float* Distance, float* Opacity, bool* onScreen, bool* behindCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventUpdateScreendication");

	UPlayerStatusScreendicatorBP_C_EventUpdateScreendication_Params params;
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


// Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventSetCharacterUniqueID
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusScreendicatorBP_C::EventSetCharacterUniqueID(int* UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventSetCharacterUniqueID");

	UPlayerStatusScreendicatorBP_C_EventSetCharacterUniqueID_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventEnterCenter
// (Event, Public, BlueprintEvent)

void UPlayerStatusScreendicatorBP_C::EventEnterCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventEnterCenter");

	UPlayerStatusScreendicatorBP_C_EventEnterCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventLeaveCenter
// (Event, Public, BlueprintEvent)

void UPlayerStatusScreendicatorBP_C::EventLeaveCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventLeaveCenter");

	UPlayerStatusScreendicatorBP_C_EventLeaveCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventSetDarwinPlayerName
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                playerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerStatusScreendicatorBP_C::EventSetDarwinPlayerName(struct FString* playerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventSetDarwinPlayerName");

	UPlayerStatusScreendicatorBP_C_EventSetDarwinPlayerName_Params params;
	params.playerName = playerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventEnterScreen
// (Event, Public, BlueprintEvent)

void UPlayerStatusScreendicatorBP_C::EventEnterScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventEnterScreen");

	UPlayerStatusScreendicatorBP_C_EventEnterScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventLeaveScreen
// (Event, Public, BlueprintEvent)

void UPlayerStatusScreendicatorBP_C::EventLeaveScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventLeaveScreen");

	UPlayerStatusScreendicatorBP_C_EventLeaveScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventEnterCamStateCharacter
// (Event, Public, BlueprintEvent)

void UPlayerStatusScreendicatorBP_C::EventEnterCamStateCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventEnterCamStateCharacter");

	UPlayerStatusScreendicatorBP_C_EventEnterCamStateCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventLeaveCamStateCharacter
// (Event, Public, BlueprintEvent)

void UPlayerStatusScreendicatorBP_C::EventLeaveCamStateCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventLeaveCamStateCharacter");

	UPlayerStatusScreendicatorBP_C_EventLeaveCamStateCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.ExecuteUbergraph_PlayerStatusScreendicatorBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusScreendicatorBP_C::ExecuteUbergraph_PlayerStatusScreendicatorBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.ExecuteUbergraph_PlayerStatusScreendicatorBP");

	UPlayerStatusScreendicatorBP_C_ExecuteUbergraph_PlayerStatusScreendicatorBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinManHuntScreendicatorBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventSetDarwinPlayerName
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                playerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UDarwinManHuntScreendicatorBP_C::EventSetDarwinPlayerName(struct FString* playerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventSetDarwinPlayerName");

	UDarwinManHuntScreendicatorBP_C_EventSetDarwinPlayerName_Params params;
	params.playerName = playerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventEnterScreen
// (Event, Public, BlueprintEvent)

void UDarwinManHuntScreendicatorBP_C::EventEnterScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventEnterScreen");

	UDarwinManHuntScreendicatorBP_C_EventEnterScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventLeaveScreen
// (Event, Public, BlueprintEvent)

void UDarwinManHuntScreendicatorBP_C::EventLeaveScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventLeaveScreen");

	UDarwinManHuntScreendicatorBP_C_EventLeaveScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventUpdatePlayerStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Stamina                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Cold                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinManHuntScreendicatorBP_C::EventUpdatePlayerStatus(float* Stamina, float* health, float* Cold)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventUpdatePlayerStatus");

	UDarwinManHuntScreendicatorBP_C_EventUpdatePlayerStatus_Params params;
	params.Stamina = Stamina;
	params.health = health;
	params.Cold = Cold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventEnterCenter
// (Event, Public, BlueprintEvent)

void UDarwinManHuntScreendicatorBP_C::EventEnterCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventEnterCenter");

	UDarwinManHuntScreendicatorBP_C_EventEnterCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventLeaveCenter
// (Event, Public, BlueprintEvent)

void UDarwinManHuntScreendicatorBP_C::EventLeaveCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventLeaveCenter");

	UDarwinManHuntScreendicatorBP_C_EventLeaveCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventUpdateScreendication
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         arrowScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          onScreen                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          behindCam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinManHuntScreendicatorBP_C::EventUpdateScreendication(float* Angle, float* arrowScale, float* Distance, float* Opacity, bool* onScreen, bool* behindCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventUpdateScreendication");

	UDarwinManHuntScreendicatorBP_C_EventUpdateScreendication_Params params;
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


// Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.ExecuteUbergraph_DarwinManHuntScreendicatorBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinManHuntScreendicatorBP_C::ExecuteUbergraph_DarwinManHuntScreendicatorBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.ExecuteUbergraph_DarwinManHuntScreendicatorBP");

	UDarwinManHuntScreendicatorBP_C_ExecuteUbergraph_DarwinManHuntScreendicatorBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

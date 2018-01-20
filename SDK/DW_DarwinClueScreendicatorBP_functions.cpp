// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinClueScreendicatorBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventSetDarwinPlayerName
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                playerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UDarwinClueScreendicatorBP_C::EventSetDarwinPlayerName(struct FString* playerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventSetDarwinPlayerName");

	UDarwinClueScreendicatorBP_C_EventSetDarwinPlayerName_Params params;
	params.playerName = playerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventEnterScreen
// (Event, Public, BlueprintEvent)

void UDarwinClueScreendicatorBP_C::EventEnterScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventEnterScreen");

	UDarwinClueScreendicatorBP_C_EventEnterScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventLeaveScreen
// (Event, Public, BlueprintEvent)

void UDarwinClueScreendicatorBP_C::EventLeaveScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventLeaveScreen");

	UDarwinClueScreendicatorBP_C_EventLeaveScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventUpdateClueTime
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           timeLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinClueScreendicatorBP_C::EventUpdateClueTime(int* timeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventUpdateClueTime");

	UDarwinClueScreendicatorBP_C_EventUpdateClueTime_Params params;
	params.timeLeft = timeLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventUpdatePlayerStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Stamina                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Cold                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinClueScreendicatorBP_C::EventUpdatePlayerStatus(float* Stamina, float* health, float* Cold)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventUpdatePlayerStatus");

	UDarwinClueScreendicatorBP_C_EventUpdatePlayerStatus_Params params;
	params.Stamina = Stamina;
	params.health = health;
	params.Cold = Cold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventEnterCenter
// (Event, Public, BlueprintEvent)

void UDarwinClueScreendicatorBP_C::EventEnterCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventEnterCenter");

	UDarwinClueScreendicatorBP_C_EventEnterCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventLeaveCenter
// (Event, Public, BlueprintEvent)

void UDarwinClueScreendicatorBP_C::EventLeaveCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventLeaveCenter");

	UDarwinClueScreendicatorBP_C_EventLeaveCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventUpdateScreendication
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         arrowScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          onScreen                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          behindCam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinClueScreendicatorBP_C::EventUpdateScreendication(float* Angle, float* arrowScale, float* Distance, float* Opacity, bool* onScreen, bool* behindCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventUpdateScreendication");

	UDarwinClueScreendicatorBP_C_EventUpdateScreendication_Params params;
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


// Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventClueNinjaVanish
// (Event, Public, BlueprintEvent)

void UDarwinClueScreendicatorBP_C::EventClueNinjaVanish()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventClueNinjaVanish");

	UDarwinClueScreendicatorBP_C_EventClueNinjaVanish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.ExecuteUbergraph_DarwinClueScreendicatorBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinClueScreendicatorBP_C::ExecuteUbergraph_DarwinClueScreendicatorBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.ExecuteUbergraph_DarwinClueScreendicatorBP");

	UDarwinClueScreendicatorBP_C_ExecuteUbergraph_DarwinClueScreendicatorBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

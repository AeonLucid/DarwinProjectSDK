// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ClosePlayerScreendicatorBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ClosePlayerScreendicatorBP.ClosePlayerScreendicatorBP_C.EventSetDarwinPlayerName
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                playerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UClosePlayerScreendicatorBP_C::EventSetDarwinPlayerName(struct FString* playerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClosePlayerScreendicatorBP.ClosePlayerScreendicatorBP_C.EventSetDarwinPlayerName");

	UClosePlayerScreendicatorBP_C_EventSetDarwinPlayerName_Params params;
	params.playerName = playerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClosePlayerScreendicatorBP.ClosePlayerScreendicatorBP_C.EventUpdatePlayerStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Stamina                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Cold                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UClosePlayerScreendicatorBP_C::EventUpdatePlayerStatus(float* Stamina, float* health, float* Cold)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClosePlayerScreendicatorBP.ClosePlayerScreendicatorBP_C.EventUpdatePlayerStatus");

	UClosePlayerScreendicatorBP_C_EventUpdatePlayerStatus_Params params;
	params.Stamina = Stamina;
	params.health = health;
	params.Cold = Cold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClosePlayerScreendicatorBP.ClosePlayerScreendicatorBP_C.EventSetCharacterUniqueID
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UClosePlayerScreendicatorBP_C::EventSetCharacterUniqueID(int* UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClosePlayerScreendicatorBP.ClosePlayerScreendicatorBP_C.EventSetCharacterUniqueID");

	UClosePlayerScreendicatorBP_C_EventSetCharacterUniqueID_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClosePlayerScreendicatorBP.ClosePlayerScreendicatorBP_C.EventUpdateScreendication
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         arrowScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          onScreen                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          behindCam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UClosePlayerScreendicatorBP_C::EventUpdateScreendication(float* Angle, float* arrowScale, float* Distance, float* Opacity, bool* onScreen, bool* behindCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClosePlayerScreendicatorBP.ClosePlayerScreendicatorBP_C.EventUpdateScreendication");

	UClosePlayerScreendicatorBP_C_EventUpdateScreendication_Params params;
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


// Function ClosePlayerScreendicatorBP.ClosePlayerScreendicatorBP_C.ExecuteUbergraph_ClosePlayerScreendicatorBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UClosePlayerScreendicatorBP_C::ExecuteUbergraph_ClosePlayerScreendicatorBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClosePlayerScreendicatorBP.ClosePlayerScreendicatorBP_C.ExecuteUbergraph_ClosePlayerScreendicatorBP");

	UClosePlayerScreendicatorBP_C_ExecuteUbergraph_ClosePlayerScreendicatorBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

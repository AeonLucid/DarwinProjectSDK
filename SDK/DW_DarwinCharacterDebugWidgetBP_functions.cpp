// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinCharacterDebugWidgetBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinCharacterDebugWidgetBP.DarwinCharacterDebugWidgetBP_C.EventUpdateRunBlendValues
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         frontBack                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         leftRight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         upper                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         offbalance                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         uphill                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         downhill                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         velSq                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCharacterDebugWidgetBP_C::EventUpdateRunBlendValues(float* frontBack, float* leftRight, float* upper, float* offbalance, float* uphill, float* downhill, float* velSq)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterDebugWidgetBP.DarwinCharacterDebugWidgetBP_C.EventUpdateRunBlendValues");

	UDarwinCharacterDebugWidgetBP_C_EventUpdateRunBlendValues_Params params;
	params.frontBack = frontBack;
	params.leftRight = leftRight;
	params.upper = upper;
	params.offbalance = offbalance;
	params.uphill = uphill;
	params.downhill = downhill;
	params.velSq = velSq;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterDebugWidgetBP.DarwinCharacterDebugWidgetBP_C.EventUpdateCharacterInfo
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator*               rot                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float*                         ping                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                net_id                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                playerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           nb_games_played                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         fps                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCharacterDebugWidgetBP_C::EventUpdateCharacterInfo(struct FVector* Loc, struct FRotator* rot, float* ping, struct FString* net_id, struct FString* playerName, int* nb_games_played, float* fps)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterDebugWidgetBP.DarwinCharacterDebugWidgetBP_C.EventUpdateCharacterInfo");

	UDarwinCharacterDebugWidgetBP_C_EventUpdateCharacterInfo_Params params;
	params.Loc = Loc;
	params.rot = rot;
	params.ping = ping;
	params.net_id = net_id;
	params.playerName = playerName;
	params.nb_games_played = nb_games_played;
	params.fps = fps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterDebugWidgetBP.DarwinCharacterDebugWidgetBP_C.EventUpdateZoneName
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          bForbiddenZone                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCharacterDebugWidgetBP_C::EventUpdateZoneName(struct FString* zoneName, bool* bForbiddenZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterDebugWidgetBP.DarwinCharacterDebugWidgetBP_C.EventUpdateZoneName");

	UDarwinCharacterDebugWidgetBP_C_EventUpdateZoneName_Params params;
	params.zoneName = zoneName;
	params.bForbiddenZone = bForbiddenZone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterDebugWidgetBP.DarwinCharacterDebugWidgetBP_C.ExecuteUbergraph_DarwinCharacterDebugWidgetBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCharacterDebugWidgetBP_C::ExecuteUbergraph_DarwinCharacterDebugWidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterDebugWidgetBP.DarwinCharacterDebugWidgetBP_C.ExecuteUbergraph_DarwinCharacterDebugWidgetBP");

	UDarwinCharacterDebugWidgetBP_C_ExecuteUbergraph_DarwinCharacterDebugWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

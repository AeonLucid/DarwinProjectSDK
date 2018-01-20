#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinCharacterDebugWidgetBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinCharacterDebugWidgetBP.DarwinCharacterDebugWidgetBP_C.EventUpdateRunBlendValues
struct UDarwinCharacterDebugWidgetBP_C_EventUpdateRunBlendValues_Params
{
	float*                                             frontBack;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             leftRight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             upper;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             offbalance;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             uphill;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             downhill;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             velSq;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCharacterDebugWidgetBP.DarwinCharacterDebugWidgetBP_C.EventUpdateCharacterInfo
struct UDarwinCharacterDebugWidgetBP_C_EventUpdateCharacterInfo_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   rot;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float*                                             ping;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    net_id;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    playerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               nb_games_played;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             fps;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCharacterDebugWidgetBP.DarwinCharacterDebugWidgetBP_C.EventUpdateZoneName
struct UDarwinCharacterDebugWidgetBP_C_EventUpdateZoneName_Params
{
	struct FString*                                    zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool*                                              bForbiddenZone;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCharacterDebugWidgetBP.DarwinCharacterDebugWidgetBP_C.ExecuteUbergraph_DarwinCharacterDebugWidgetBP
struct UDarwinCharacterDebugWidgetBP_C_ExecuteUbergraph_DarwinCharacterDebugWidgetBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

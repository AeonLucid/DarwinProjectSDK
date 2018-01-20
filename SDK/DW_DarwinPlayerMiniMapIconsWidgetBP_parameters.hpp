#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinPlayerMiniMapIconsWidgetBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinPlayerMiniMapIconsWidgetBP.DarwinPlayerMiniMapIconsWidgetBP_C.EventUpdateCharacterLocation
struct UDarwinPlayerMiniMapIconsWidgetBP_C_EventUpdateCharacterLocation_Params
{
	struct FVector2D*                                  Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float*                                             Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinPlayerMiniMapIconsWidgetBP.DarwinPlayerMiniMapIconsWidgetBP_C.EventUpdateAllianceLocation
struct UDarwinPlayerMiniMapIconsWidgetBP_C_EventUpdateAllianceLocation_Params
{
	struct FVector2D*                                  Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D*                                  worldLoc;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float*                                             Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllyIsDead;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinPlayerMiniMapIconsWidgetBP.DarwinPlayerMiniMapIconsWidgetBP_C.EventAllianceStart
struct UDarwinPlayerMiniMapIconsWidgetBP_C_EventAllianceStart_Params
{
	int*                                               allyID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinPlayerMiniMapIconsWidgetBP.DarwinPlayerMiniMapIconsWidgetBP_C.EventAllianceEnd
struct UDarwinPlayerMiniMapIconsWidgetBP_C_EventAllianceEnd_Params
{
	int*                                               allyID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinPlayerMiniMapIconsWidgetBP.DarwinPlayerMiniMapIconsWidgetBP_C.EventDeathNotification
struct UDarwinPlayerMiniMapIconsWidgetBP_C_EventDeathNotification_Params
{
	EDarwinDamageTypeEnum*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               nbPlayersLeft;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               attackerUniqueID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               victimUniqueID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFirstBlood;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinPlayerMiniMapIconsWidgetBP.DarwinPlayerMiniMapIconsWidgetBP_C.ExecuteUbergraph_DarwinPlayerMiniMapIconsWidgetBP
struct UDarwinPlayerMiniMapIconsWidgetBP_C_ExecuteUbergraph_DarwinPlayerMiniMapIconsWidgetBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

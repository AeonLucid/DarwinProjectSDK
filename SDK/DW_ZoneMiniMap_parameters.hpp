#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ZoneMiniMap_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ZoneMiniMap.ZoneMiniMap_C.EventZoneNowForbidden
struct UZoneMiniMap_C_EventZoneNowForbidden_Params
{
	struct FString*                                    zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ZoneMiniMap.ZoneMiniMap_C.EventUpdateSuddenDeathProgress
struct UZoneMiniMap_C_EventUpdateSuddenDeathProgress_Params
{
	float*                                             progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZoneMiniMap.ZoneMiniMap_C.EventSoonToBeForbiddenZone
struct UZoneMiniMap_C_EventSoonToBeForbiddenZone_Params
{
	struct FString*                                    zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               timeLeft;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZoneMiniMap.ZoneMiniMap_C.EventNuclearBlastCountdownInitiated
struct UZoneMiniMap_C_EventNuclearBlastCountdownInitiated_Params
{
	struct FString*                                    zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ZoneMiniMap.ZoneMiniMap_C.EventNuclearBlastUpdateProgress
struct UZoneMiniMap_C_EventNuclearBlastUpdateProgress_Params
{
	struct FString*                                    zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float*                                             progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZoneMiniMap.ZoneMiniMap_C.EventNuclearBlastEnded
struct UZoneMiniMap_C_EventNuclearBlastEnded_Params
{
	struct FString*                                    zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ZoneMiniMap.ZoneMiniMap_C.EventNuclearBlastStarted
struct UZoneMiniMap_C_EventNuclearBlastStarted_Params
{
	struct FString*                                    zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ZoneMiniMap.ZoneMiniMap_C.EventNuclearBlastUpdateCountdown
struct UZoneMiniMap_C_EventNuclearBlastUpdateCountdown_Params
{
	struct FString*                                    zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    timeLeft;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               timeLeftInteger;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZoneMiniMap.ZoneMiniMap_C.EventForbiddenZoneActivated
struct UZoneMiniMap_C_EventForbiddenZoneActivated_Params
{
	struct FString*                                    zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float*                                             timeLeft;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAlreadyForbidden;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZoneMiniMap.ZoneMiniMap_C.Construct
struct UZoneMiniMap_C_Construct_Params
{
};

// Function ZoneMiniMap.ZoneMiniMap_C.ExecuteUbergraph_ZoneMiniMap
struct UZoneMiniMap_C_ExecuteUbergraph_ZoneMiniMap_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

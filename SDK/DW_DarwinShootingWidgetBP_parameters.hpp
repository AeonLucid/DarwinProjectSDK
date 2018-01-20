#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinShootingWidgetBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventAimCharge
struct UDarwinShootingWidgetBP_C_EventAimCharge_Params
{
	float*                                             progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventShootFail
struct UDarwinShootingWidgetBP_C_EventShootFail_Params
{
};

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventUpdateNumberOfArrows
struct UDarwinShootingWidgetBP_C_EventUpdateNumberOfArrows_Params
{
	int*                                               numberOfArrows;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIncrement;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventUpdateIsInLobby
struct UDarwinShootingWidgetBP_C_EventUpdateIsInLobby_Params
{
	bool*                                              bIsInLobby;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventAimEnd
struct UDarwinShootingWidgetBP_C_EventAimEnd_Params
{
};

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventAimFull
struct UDarwinShootingWidgetBP_C_EventAimFull_Params
{
};

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventReloadEnd
struct UDarwinShootingWidgetBP_C_EventReloadEnd_Params
{
};

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventHighlightedShotPossible
struct UDarwinShootingWidgetBP_C_EventHighlightedShotPossible_Params
{
};

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventNoHighlightedShot
struct UDarwinShootingWidgetBP_C_EventNoHighlightedShot_Params
{
};

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventInAirStart
struct UDarwinShootingWidgetBP_C_EventInAirStart_Params
{
};

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventInAirEnd
struct UDarwinShootingWidgetBP_C_EventInAirEnd_Params
{
};

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventUpdateLootActionProgress
struct UDarwinShootingWidgetBP_C_EventUpdateLootActionProgress_Params
{
	bool*                                              isLooting;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    playerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float*                                             progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventGameStartsNow
struct UDarwinShootingWidgetBP_C_EventGameStartsNow_Params
{
};

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventGameHasStarted
struct UDarwinShootingWidgetBP_C_EventGameHasStarted_Params
{
};

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.PlayTutoNoArrows
struct UDarwinShootingWidgetBP_C_PlayTutoNoArrows_Params
{
};

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventUpdateSniperZoom
struct UDarwinShootingWidgetBP_C_EventUpdateSniperZoom_Params
{
	int*                                               currentSniperZoomIndex;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventTeleportAimStart
struct UDarwinShootingWidgetBP_C_EventTeleportAimStart_Params
{
};

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventTeleportAimEnd
struct UDarwinShootingWidgetBP_C_EventTeleportAimEnd_Params
{
};

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.EventAimStart
struct UDarwinShootingWidgetBP_C_EventAimStart_Params
{
};

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.RemoveTutoNoArrows
struct UDarwinShootingWidgetBP_C_RemoveTutoNoArrows_Params
{
};

// Function DarwinShootingWidgetBP.DarwinShootingWidgetBP_C.ExecuteUbergraph_DarwinShootingWidgetBP
struct UDarwinShootingWidgetBP_C_ExecuteUbergraph_DarwinShootingWidgetBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

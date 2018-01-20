#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinCraftWheelBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.HideTextInfo
struct UDarwinCraftWheelBP_C_HideTextInfo_Params
{
};

// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.ShowTextInfoOfType
struct UDarwinCraftWheelBP_C_ShowTextInfoOfType_Params
{
	EDarwinItemTypeEnum                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.InitializeArrays
struct UDarwinCraftWheelBP_C_InitializeArrays_Params
{
};

// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.Construct
struct UDarwinCraftWheelBP_C_Construct_Params
{
};

// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventHoveredQuadrant
struct UDarwinCraftWheelBP_C_EventHoveredQuadrant_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventUnHoveredQuadrant
struct UDarwinCraftWheelBP_C_EventUnHoveredQuadrant_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventPressedQuadrant
struct UDarwinCraftWheelBP_C_EventPressedQuadrant_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventUpdateMouseAngle
struct UDarwinCraftWheelBP_C_EventUpdateMouseAngle_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventCraftWheelOpen
struct UDarwinCraftWheelBP_C_EventCraftWheelOpen_Params
{
};

// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventCraftWheelClose
struct UDarwinCraftWheelBP_C_EventCraftWheelClose_Params
{
};

// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventGameStartsNow
struct UDarwinCraftWheelBP_C_EventGameStartsNow_Params
{
};

// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventGameHasStarted
struct UDarwinCraftWheelBP_C_EventGameHasStarted_Params
{
};

// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventGamepadInventoryUse
struct UDarwinCraftWheelBP_C_EventGamepadInventoryUse_Params
{
};

// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventGamepadInventoryPressed
struct UDarwinCraftWheelBP_C_EventGamepadInventoryPressed_Params
{
};

// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventGamepadInventoryReleased
struct UDarwinCraftWheelBP_C_EventGamepadInventoryReleased_Params
{
};

// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventIsCrafting
struct UDarwinCraftWheelBP_C_EventIsCrafting_Params
{
	float*                                             progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum*                               enum_type;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFinished;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               craftingIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.ReHoverQuadrant
struct UDarwinCraftWheelBP_C_ReHoverQuadrant_Params
{
	int                                                QuadrantToHover;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.Tick
struct UDarwinCraftWheelBP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.ExecuteUbergraph_DarwinCraftWheelBP
struct UDarwinCraftWheelBP_C_ExecuteUbergraph_DarwinCraftWheelBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

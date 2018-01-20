#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CraftableToolScreendicatorBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CraftableToolScreendicatorBP.CraftableToolScreendicatorBP_C.EventUpdateScreendication
struct UCraftableToolScreendicatorBP_C_EventUpdateScreendication_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             arrowScale;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              onScreen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              behindCam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraftableToolScreendicatorBP.CraftableToolScreendicatorBP_C.Construct
struct UCraftableToolScreendicatorBP_C_Construct_Params
{
};

// Function CraftableToolScreendicatorBP.CraftableToolScreendicatorBP_C.EventSetDarwinItemType
struct UCraftableToolScreendicatorBP_C_EventSetDarwinItemType_Params
{
	EDarwinItemTypeEnum*                               ItemType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraftableToolScreendicatorBP.CraftableToolScreendicatorBP_C.EventEnterCenter
struct UCraftableToolScreendicatorBP_C_EventEnterCenter_Params
{
};

// Function CraftableToolScreendicatorBP.CraftableToolScreendicatorBP_C.EventLeaveCenter
struct UCraftableToolScreendicatorBP_C_EventLeaveCenter_Params
{
};

// Function CraftableToolScreendicatorBP.CraftableToolScreendicatorBP_C.ExecuteUbergraph_CraftableToolScreendicatorBP
struct UCraftableToolScreendicatorBP_C_ExecuteUbergraph_CraftableToolScreendicatorBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

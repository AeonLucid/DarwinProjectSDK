#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DPW_RobotBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DPW_RobotBP.DPW_RobotBP_C.Delivery
struct ADPW_RobotBP_C_Delivery_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DPW_RobotBP.DPW_RobotBP_C.Rotate
struct ADPW_RobotBP_C_Rotate_Params
{
	float                                              B;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DPW_RobotBP.DPW_RobotBP_C.UpdateLocation
struct ADPW_RobotBP_C_UpdateLocation_Params
{
	float                                              DistToPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               returning;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DPW_RobotBP.DPW_RobotBP_C.UserConstructionScript
struct ADPW_RobotBP_C_UserConstructionScript_Params
{
};

// Function DPW_RobotBP.DPW_RobotBP_C.Deliver
struct ADPW_RobotBP_C_Deliver_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DPW_RobotBP.DPW_RobotBP_C.RotateBox
struct ADPW_RobotBP_C_RotateBox_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DPW_RobotBP.DPW_RobotBP_C.DeliveryTranslation
struct ADPW_RobotBP_C_DeliveryTranslation_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              returning;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DPW_RobotBP.DPW_RobotBP_C.ReceiveTick
struct ADPW_RobotBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DPW_RobotBP.DPW_RobotBP_C.ExecuteUbergraph_DPW_RobotBP
struct ADPW_RobotBP_C_ExecuteUbergraph_DPW_RobotBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

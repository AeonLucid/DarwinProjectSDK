#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ProjectileScreendicatorBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventUpdateScreendication
struct UProjectileScreendicatorBP_C_EventUpdateScreendication_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             arrowScale;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              onScreen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              behindCam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventEnterCenter
struct UProjectileScreendicatorBP_C_EventEnterCenter_Params
{
};

// Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventLeaveCenter
struct UProjectileScreendicatorBP_C_EventLeaveCenter_Params
{
};

// Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventEnterInteractionRadius
struct UProjectileScreendicatorBP_C_EventEnterInteractionRadius_Params
{
};

// Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventLeaveInteractionRadius
struct UProjectileScreendicatorBP_C_EventLeaveInteractionRadius_Params
{
};

// Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventEnterScreen
struct UProjectileScreendicatorBP_C_EventEnterScreen_Params
{
};

// Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventLeaveScreen
struct UProjectileScreendicatorBP_C_EventLeaveScreen_Params
{
};

// Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.Construct
struct UProjectileScreendicatorBP_C_Construct_Params
{
};

// Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.ExecuteUbergraph_ProjectileScreendicatorBP
struct UProjectileScreendicatorBP_C_ExecuteUbergraph_ProjectileScreendicatorBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

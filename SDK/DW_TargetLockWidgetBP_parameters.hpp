#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_TargetLockWidgetBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TargetLockWidgetBP.TargetLockWidgetBP_C.EventAimLockTarget
struct UTargetLockWidgetBP_C_EventAimLockTarget_Params
{
	float*                                             progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHasTarget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TargetLockWidgetBP.TargetLockWidgetBP_C.EventAimEnd
struct UTargetLockWidgetBP_C_EventAimEnd_Params
{
};

// Function TargetLockWidgetBP.TargetLockWidgetBP_C.ExecuteUbergraph_TargetLockWidgetBP
struct UTargetLockWidgetBP_C_ExecuteUbergraph_TargetLockWidgetBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

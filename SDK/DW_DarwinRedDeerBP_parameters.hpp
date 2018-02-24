#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinRedDeerBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinRedDeerBP.DarwinRedDeerBP_C.UserConstructionScript
struct ADarwinRedDeerBP_C_UserConstructionScript_Params
{
};

// Function DarwinRedDeerBP.DarwinRedDeerBP_C.EventSetAllRenderCustomDepth
struct ADarwinRedDeerBP_C_EventSetAllRenderCustomDepth_Params
{
	bool*                                              render;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinRedDeerBP.DarwinRedDeerBP_C.EventSetAllCustomDepthStencilValue
struct ADarwinRedDeerBP_C_EventSetAllCustomDepthStencilValue_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinRedDeerBP.DarwinRedDeerBP_C.EventHitByWeapon
struct ADarwinRedDeerBP_C_EventHitByWeapon_Params
{
	class ADarwinZombie**                              zombie;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinRedDeerBP.DarwinRedDeerBP_C.ExecuteUbergraph_DarwinRedDeerBP
struct ADarwinRedDeerBP_C_ExecuteUbergraph_DarwinRedDeerBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

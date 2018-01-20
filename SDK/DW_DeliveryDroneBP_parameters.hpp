#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DeliveryDroneBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DeliveryDroneBP.DeliveryDroneBP_C.UserConstructionScript
struct ADeliveryDroneBP_C_UserConstructionScript_Params
{
};

// Function DeliveryDroneBP.DeliveryDroneBP_C.ReceiveBeginPlay
struct ADeliveryDroneBP_C_ReceiveBeginPlay_Params
{
};

// Function DeliveryDroneBP.DeliveryDroneBP_C.ReceiveTick
struct ADeliveryDroneBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeliveryDroneBP.DeliveryDroneBP_C.ExecuteUbergraph_DeliveryDroneBP
struct ADeliveryDroneBP_C_ExecuteUbergraph_DeliveryDroneBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

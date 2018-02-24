#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_BearTrapBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BearTrapBP.BearTrapBP_C.UserConstructionScript
struct ABearTrapBP_C_UserConstructionScript_Params
{
};

// Function BearTrapBP.BearTrapBP_C.EventCraftableToolDestroyed
struct ABearTrapBP_C_EventCraftableToolDestroyed_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BearTrapBP.BearTrapBP_C.EventCraftableToolSprung
struct ABearTrapBP_C_EventCraftableToolSprung_Params
{
	class ADarwinCharacter**                           characterTarget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BearTrapBP.BearTrapBP_C.ReceiveDestroyed
struct ABearTrapBP_C_ReceiveDestroyed_Params
{
};

// Function BearTrapBP.BearTrapBP_C.EventInitializeMeshArray
struct ABearTrapBP_C_EventInitializeMeshArray_Params
{
};

// Function BearTrapBP.BearTrapBP_C.EventCraftableToolDestroyedDedicatedServer
struct ABearTrapBP_C_EventCraftableToolDestroyedDedicatedServer_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BearTrapBP.BearTrapBP_C.ExecuteUbergraph_BearTrapBP
struct ABearTrapBP_C_ExecuteUbergraph_BearTrapBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

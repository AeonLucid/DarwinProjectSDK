#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CaltropBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CaltropBP.CaltropBP_C.UserConstructionScript
struct ACaltropBP_C_UserConstructionScript_Params
{
};

// Function CaltropBP.CaltropBP_C.EventInitializeMeshArray
struct ACaltropBP_C_EventInitializeMeshArray_Params
{
};

// Function CaltropBP.CaltropBP_C.EventCraftableToolDestroyed
struct ACaltropBP_C_EventCraftableToolDestroyed_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function CaltropBP.CaltropBP_C.EventCraftableToolSprung
struct ACaltropBP_C_EventCraftableToolSprung_Params
{
	class ADarwinCharacter**                           characterTarget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CaltropBP.CaltropBP_C.ReceiveTick
struct ACaltropBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CaltropBP.CaltropBP_C.ExecuteUbergraph_CaltropBP
struct ACaltropBP_C_ExecuteUbergraph_CaltropBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

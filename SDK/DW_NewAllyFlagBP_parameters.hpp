#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NewAllyFlagBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NewAllyFlagBP.NewAllyFlagBP_C.UserConstructionScript
struct ANewAllyFlagBP_C_UserConstructionScript_Params
{
};

// Function NewAllyFlagBP.NewAllyFlagBP_C.EventInitializeAvatarTexture
struct ANewAllyFlagBP_C_EventInitializeAvatarTexture_Params
{
	class UTexture2D**                                 AvatarTexture;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewAllyFlagBP.NewAllyFlagBP_C.EventAllyFlagDestroyed
struct ANewAllyFlagBP_C_EventAllyFlagDestroyed_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function NewAllyFlagBP.NewAllyFlagBP_C.ExecuteUbergraph_NewAllyFlagBP
struct ANewAllyFlagBP_C_ExecuteUbergraph_NewAllyFlagBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

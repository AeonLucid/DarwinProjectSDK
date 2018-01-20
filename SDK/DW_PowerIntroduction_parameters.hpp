#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PowerIntroduction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PowerIntroduction.PowerIntroduction_C.EventManHuntStart
struct UPowerIntroduction_C_EventManHuntStart_Params
{
	int*                                               targetCharacterID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PowerIntroduction.PowerIntroduction_C.EventManHuntEnd
struct UPowerIntroduction_C_EventManHuntEnd_Params
{
	int*                                               targetCharacterID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               killerCharacterID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerIntroduction.PowerIntroduction_C.ExecuteUbergraph_PowerIntroduction
struct UPowerIntroduction_C_ExecuteUbergraph_PowerIntroduction_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

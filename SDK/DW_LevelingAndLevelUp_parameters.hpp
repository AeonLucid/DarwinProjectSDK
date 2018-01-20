#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_LevelingAndLevelUp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LevelingAndLevelUp.LevelingAndLevelUp_C.EventGameStartsNow
struct ULevelingAndLevelUp_C_EventGameStartsNow_Params
{
};

// Function LevelingAndLevelUp.LevelingAndLevelUp_C.Tick
struct ULevelingAndLevelUp_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelingAndLevelUp.LevelingAndLevelUp_C.StartProgressBar
struct ULevelingAndLevelUp_C_StartProgressBar_Params
{
};

// Function LevelingAndLevelUp.LevelingAndLevelUp_C.FillGage
struct ULevelingAndLevelUp_C_FillGage_Params
{
};

// Function LevelingAndLevelUp.LevelingAndLevelUp_C.ExecuteUbergraph_LevelingAndLevelUp
struct ULevelingAndLevelUp_C_ExecuteUbergraph_LevelingAndLevelUp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CageHPIconBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CageHPIconBP.CageHPIconBP_C.Tick
struct UCageHPIconBP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CageHPIconBP.CageHPIconBP_C.Update
struct UCageHPIconBP_C_Update_Params
{
	float                                              currentHP;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              wantedHP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CageHPIconBP.CageHPIconBP_C.EventCageDestro
struct UCageHPIconBP_C_EventCageDestro_Params
{
	class ADarwinCage**                                Cage;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CageHPIconBP.CageHPIconBP_C.Construct
struct UCageHPIconBP_C_Construct_Params
{
};

// Function CageHPIconBP.CageHPIconBP_C.ExecuteUbergraph_CageHPIconBP
struct UCageHPIconBP_C_ExecuteUbergraph_CageHPIconBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

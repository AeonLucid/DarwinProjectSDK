#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinFootprintComponentBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinFootprintComponentBP.DarwinFootprintComponentBP_C.EventSimulatedFootStepSound
struct UDarwinFootprintComponentBP_C_EventSimulatedFootStepSound_Params
{
	class ADarwinCharacter**                           CharacterOwner;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFootprintTypeEnum*                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinFootprintComponentBP.DarwinFootprintComponentBP_C.EventLocalFootStepSound
struct UDarwinFootprintComponentBP_C_EventLocalFootStepSound_Params
{
	class ADarwinCharacter**                           CharacterOwner;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFootprintTypeEnum*                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinFootprintComponentBP.DarwinFootprintComponentBP_C.ExecuteUbergraph_DarwinFootprintComponentBP
struct UDarwinFootprintComponentBP_C_ExecuteUbergraph_DarwinFootprintComponentBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

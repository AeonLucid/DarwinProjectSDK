#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ChooseRegion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ChooseRegion.ChooseRegion_C.OpenChooseRegion
struct UChooseRegion_C_OpenChooseRegion_Params
{
};

// Function ChooseRegion.ChooseRegion_C.EventAddRegion
struct UChooseRegion_C_EventAddRegion_Params
{
	struct FString*                                    RegionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ChooseRegion.ChooseRegion_C.CloseMenu
struct UChooseRegion_C_CloseMenu_Params
{
};

// Function ChooseRegion.ChooseRegion_C.Construct
struct UChooseRegion_C_Construct_Params
{
};

// Function ChooseRegion.ChooseRegion_C.ExecuteUbergraph_ChooseRegion
struct UChooseRegion_C_ExecuteUbergraph_ChooseRegion_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

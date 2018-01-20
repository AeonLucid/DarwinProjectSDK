#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinCraftingComponentBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventLocalCraftingStart
struct UDarwinCraftingComponentBP_C_EventLocalCraftingStart_Params
{
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventLocalCraftingEnd
struct UDarwinCraftingComponentBP_C_EventLocalCraftingEnd_Params
{
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventLocalCraftingSuccess
struct UDarwinCraftingComponentBP_C_EventLocalCraftingSuccess_Params
{
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventLocalCraftingFail
struct UDarwinCraftingComponentBP_C_EventLocalCraftingFail_Params
{
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventSimulatedCraftingStart
struct UDarwinCraftingComponentBP_C_EventSimulatedCraftingStart_Params
{
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventSimulatedCraftingEnd
struct UDarwinCraftingComponentBP_C_EventSimulatedCraftingEnd_Params
{
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventSimulatedCraftingSuccess
struct UDarwinCraftingComponentBP_C_EventSimulatedCraftingSuccess_Params
{
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventSimulatedCraftingFail
struct UDarwinCraftingComponentBP_C_EventSimulatedCraftingFail_Params
{
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.ExecuteUbergraph_DarwinCraftingComponentBP
struct UDarwinCraftingComponentBP_C_ExecuteUbergraph_DarwinCraftingComponentBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

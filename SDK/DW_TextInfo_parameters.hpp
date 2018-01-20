#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_TextInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TextInfo.TextInfo_C.Get_TextBlock_38_ColorAndOpacity_1
struct UTextInfo_C_Get_TextBlock_38_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TextInfo.TextInfo_C.EventUpdateNumberOfWood
struct UTextInfo_C_EventUpdateNumberOfWood_Params
{
	int*                                               numberOfWood;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIncrement;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TextInfo.TextInfo_C.Initialize
struct UTextInfo_C_Initialize_Params
{
	EDarwinItemTypeEnum                                ItemType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TextInfo.TextInfo_C.EventGameStartsNow
struct UTextInfo_C_EventGameStartsNow_Params
{
};

// Function TextInfo.TextInfo_C.EventUpdateNumberOfElectronic
struct UTextInfo_C_EventUpdateNumberOfElectronic_Params
{
	int*                                               numberOfElectronic;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIncrement;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TextInfo.TextInfo_C.EventUpdateNumberOfLeather
struct UTextInfo_C_EventUpdateNumberOfLeather_Params
{
	int*                                               numberOfLeather;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIncrement;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TextInfo.TextInfo_C.ExecuteUbergraph_TextInfo
struct UTextInfo_C_ExecuteUbergraph_TextInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

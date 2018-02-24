#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PassiveAndRessources_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateNumberOfLeather
struct UPassiveAndRessources_C_EventUpdateNumberOfLeather_Params
{
	int*                                               numberOfLeather;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIncrement;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateNumberOfElectronic
struct UPassiveAndRessources_C_EventUpdateNumberOfElectronic_Params
{
	int*                                               numberOfElectronic;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIncrement;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateNumberOfWood
struct UPassiveAndRessources_C_EventUpdateNumberOfWood_Params
{
	int*                                               numberOfWood;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIncrement;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateBootLevel
struct UPassiveAndRessources_C_EventUpdateBootLevel_Params
{
	EDarwinItemTypeEnum*                               bootType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateBootType
struct UPassiveAndRessources_C_EventUpdateBootType_Params
{
	EDarwinItemTypeEnum*                               bootType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateArmorLevel
struct UPassiveAndRessources_C_EventUpdateArmorLevel_Params
{
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateCoatLevel
struct UPassiveAndRessources_C_EventUpdateCoatLevel_Params
{
	EDarwinItemTypeEnum*                               coatType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateCoatType
struct UPassiveAndRessources_C_EventUpdateCoatType_Params
{
	EDarwinItemTypeEnum*                               coatType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateWeaponLevel
struct UPassiveAndRessources_C_EventUpdateWeaponLevel_Params
{
	EDarwinItemTypeEnum*                               weaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateWeaponType
struct UPassiveAndRessources_C_EventUpdateWeaponType_Params
{
	EDarwinItemTypeEnum*                               weaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveAndRessources.PassiveAndRessources_C.ExecuteUbergraph_PassiveAndRessources
struct UPassiveAndRessources_C_ExecuteUbergraph_PassiveAndRessources_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

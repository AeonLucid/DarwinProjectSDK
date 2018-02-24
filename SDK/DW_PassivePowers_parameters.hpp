#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PassivePowers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassivePowers.PassivePowers_C.EventUpdateWeaponType
struct UPassivePowers_C_EventUpdateWeaponType_Params
{
	EDarwinItemTypeEnum*                               weaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassivePowers.PassivePowers_C.EventUpdateBootType
struct UPassivePowers_C_EventUpdateBootType_Params
{
	EDarwinItemTypeEnum*                               bootType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassivePowers.PassivePowers_C.EventUpdateCoatType
struct UPassivePowers_C_EventUpdateCoatType_Params
{
	EDarwinItemTypeEnum*                               coatType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassivePowers.PassivePowers_C.EventUpdateWeaponLevel
struct UPassivePowers_C_EventUpdateWeaponLevel_Params
{
	EDarwinItemTypeEnum*                               weaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassivePowers.PassivePowers_C.EventUpdateBootLevel
struct UPassivePowers_C_EventUpdateBootLevel_Params
{
	EDarwinItemTypeEnum*                               bootType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassivePowers.PassivePowers_C.EventUpdateCoatLevel
struct UPassivePowers_C_EventUpdateCoatLevel_Params
{
	EDarwinItemTypeEnum*                               coatType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassivePowers.PassivePowers_C.EventUpdateArmorLevel
struct UPassivePowers_C_EventUpdateArmorLevel_Params
{
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassivePowers.PassivePowers_C.Construct
struct UPassivePowers_C_Construct_Params
{
};

// Function PassivePowers.PassivePowers_C.ExecuteUbergraph_PassivePowers
struct UPassivePowers_C_ExecuteUbergraph_PassivePowers_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

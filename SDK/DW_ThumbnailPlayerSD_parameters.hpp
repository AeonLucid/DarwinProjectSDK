#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ThumbnailPlayerSD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.Initialize
struct UThumbnailPlayerSD_C_Initialize_Params
{
	int                                                playerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.EventPlayerIsDead
struct UThumbnailPlayerSD_C_EventPlayerIsDead_Params
{
	int*                                               playerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PodiumRank;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              firstDeath;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.EventUpdateAvatarTexture
struct UThumbnailPlayerSD_C_EventUpdateAvatarTexture_Params
{
	class UTexture**                                   avatar;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               playerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.EventUpdatePlayerGradient
struct UThumbnailPlayerSD_C_EventUpdatePlayerGradient_Params
{
	struct FDarwinColorGradient*                       payerGradient;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               playerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.EventBloodPactReviveNotification
struct UThumbnailPlayerSD_C_EventBloodPactReviveNotification_Params
{
	int*                                               reviverUniqueID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               victimUniqueID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.EventBloodPactDeadNotification
struct UThumbnailPlayerSD_C_EventBloodPactDeadNotification_Params
{
	EDarwinDamageTypeEnum*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               attackerUniqueID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               victimUniqueID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.ExecuteUbergraph_ThumbnailPlayerSD
struct UThumbnailPlayerSD_C_ExecuteUbergraph_ThumbnailPlayerSD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

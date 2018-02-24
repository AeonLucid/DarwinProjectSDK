#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ThumbnailAlly64px_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ThumbnailAlly64px.ThumbnailAlly64px_C.Initialize
struct UThumbnailAlly64px_C_Initialize_Params
{
	int                                                playerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThumbnailAlly64px.ThumbnailAlly64px_C.EventPlayerIsDead
struct UThumbnailAlly64px_C_EventPlayerIsDead_Params
{
	int*                                               playerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PodiumRank;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              firstDeath;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThumbnailAlly64px.ThumbnailAlly64px_C.EventUpdateAvatarTexture
struct UThumbnailAlly64px_C_EventUpdateAvatarTexture_Params
{
	class UTexture**                                   avatar;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               playerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThumbnailAlly64px.ThumbnailAlly64px_C.ExecuteUbergraph_ThumbnailAlly64px
struct UThumbnailAlly64px_C_ExecuteUbergraph_ThumbnailAlly64px_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

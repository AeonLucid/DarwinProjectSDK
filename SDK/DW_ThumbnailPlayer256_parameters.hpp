#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ThumbnailPlayer256_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ThumbnailPlayer256.ThumbnailPlayer256_C.SetColor
struct UThumbnailPlayer256_C_SetColor_Params
{
	int                                                playerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThumbnailPlayer256.ThumbnailPlayer256_C.SetColorToOriginal
struct UThumbnailPlayer256_C_SetColorToOriginal_Params
{
	int                                                playerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThumbnailPlayer256.ThumbnailPlayer256_C.Initialize
struct UThumbnailPlayer256_C_Initialize_Params
{
	int                                                playerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThumbnailPlayer256.ThumbnailPlayer256_C.EventUpdateAvatarTexture
struct UThumbnailPlayer256_C_EventUpdateAvatarTexture_Params
{
	class UTexture**                                   avatar;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               playerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThumbnailPlayer256.ThumbnailPlayer256_C.SetNetAvatar
struct UThumbnailPlayer256_C_SetNetAvatar_Params
{
};

// Function ThumbnailPlayer256.ThumbnailPlayer256_C.ExecuteUbergraph_ThumbnailPlayer256
struct UThumbnailPlayer256_C_ExecuteUbergraph_ThumbnailPlayer256_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

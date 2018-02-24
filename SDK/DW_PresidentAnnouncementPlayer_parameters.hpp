#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PresidentAnnouncementPlayer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PresidentAnnouncementPlayer.PresidentAnnouncementPlayer_C.Initialize
struct UPresidentAnnouncementPlayer_C_Initialize_Params
{
	struct FString                                     Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Body;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              LengthSeconds;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PresidentAnnouncementPlayer.PresidentAnnouncementPlayer_C.Tick
struct UPresidentAnnouncementPlayer_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PresidentAnnouncementPlayer.PresidentAnnouncementPlayer_C.ExecuteUbergraph_PresidentAnnouncementPlayer
struct UPresidentAnnouncementPlayer_C_ExecuteUbergraph_PresidentAnnouncementPlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

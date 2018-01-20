#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MyNameAndLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MyNameAndLevel.MyNameAndLevel_C.UpdatePartyLeaderUI
struct UMyNameAndLevel_C_UpdatePartyLeaderUI_Params
{
};

// Function MyNameAndLevel.MyNameAndLevel_C.EventUpdateLocalAvatarTexture
struct UMyNameAndLevel_C_EventUpdateLocalAvatarTexture_Params
{
	class UTexture2D**                                 outLocalAvatarTexture;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MyNameAndLevel.MyNameAndLevel_C.Construct
struct UMyNameAndLevel_C_Construct_Params
{
};

// Function MyNameAndLevel.MyNameAndLevel_C.EventUpdateAvatarTexture
struct UMyNameAndLevel_C_EventUpdateAvatarTexture_Params
{
	class UTexture2D**                                 avatar;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MyNameAndLevel.MyNameAndLevel_C.EventFriendPartyJoined
struct UMyNameAndLevel_C_EventFriendPartyJoined_Params
{
	struct FText*                                      friendName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UTexture2D**                                 friendAvatar;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MyNameAndLevel.MyNameAndLevel_C.EventFriendPartyLeft
struct UMyNameAndLevel_C_EventFriendPartyLeft_Params
{
};

// Function MyNameAndLevel.MyNameAndLevel_C.EventPlayerProfileStatsReceived
struct UMyNameAndLevel_C_EventPlayerProfileStatsReceived_Params
{
	struct FDarwinCareerStats*                         stats;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FDarwinProfile*                             Profile;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MyNameAndLevel.MyNameAndLevel_C.ExecuteUbergraph_MyNameAndLevel
struct UMyNameAndLevel_C_ExecuteUbergraph_MyNameAndLevel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

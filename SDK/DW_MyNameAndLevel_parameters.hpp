#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MyNameAndLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MyNameAndLevel.MyNameAndLevel_C.SetSwitchProfileVisibility
struct UMyNameAndLevel_C_SetSwitchProfileVisibility_Params
{
	bool                                               visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MyNameAndLevel.MyNameAndLevel_C.UpdatePlayerName
struct UMyNameAndLevel_C_UpdatePlayerName_Params
{
};

// Function MyNameAndLevel.MyNameAndLevel_C.UpdatePartyLeaderUI
struct UMyNameAndLevel_C_UpdatePartyLeaderUI_Params
{
};

// Function MyNameAndLevel.MyNameAndLevel_C.EventUpdateLocalAvatarTexture
struct UMyNameAndLevel_C_EventUpdateLocalAvatarTexture_Params
{
	class UTexture**                                   outLocalAvatarTexture;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MyNameAndLevel.MyNameAndLevel_C.Construct
struct UMyNameAndLevel_C_Construct_Params
{
};

// Function MyNameAndLevel.MyNameAndLevel_C.EventUpdateAvatarTexture
struct UMyNameAndLevel_C_EventUpdateAvatarTexture_Params
{
	class UTexture**                                   avatar;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               playerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MyNameAndLevel.MyNameAndLevel_C.EventFriendPartyJoined
struct UMyNameAndLevel_C_EventFriendPartyJoined_Params
{
	struct FText*                                      friendName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UTexture**                                   friendAvatar;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MyNameAndLevel.MyNameAndLevel_C.EventFriendPartyLeft
struct UMyNameAndLevel_C_EventFriendPartyLeft_Params
{
};

// Function MyNameAndLevel.MyNameAndLevel_C.EventPlayerProfileReceived
struct UMyNameAndLevel_C_EventPlayerProfileReceived_Params
{
	struct FDarwinPlayerStats*                         stats;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
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

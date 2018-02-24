#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MuteMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MuteMenu.MuteMenu_C.GetMuteStatusCount
struct UMuteMenu_C_GetMuteStatusCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MuteMenu.MuteMenu_C.UnfocusAll
struct UMuteMenu_C_UnfocusAll_Params
{
};

// Function MuteMenu.MuteMenu_C.GetMutePlayerStatusAtIndex
struct UMuteMenu_C_GetMutePlayerStatusAtIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMutePlayerStatus_C*                         Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MuteMenu.MuteMenu_C.MoveFocus
struct UMuteMenu_C_MoveFocus_Params
{
	int                                                side;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MuteMenu.MuteMenu_C.InitializeFocus
struct UMuteMenu_C_InitializeFocus_Params
{
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MuteMenu.MuteMenu_C.EventMuteMapAdd
struct UMuteMenu_C_EventMuteMapAdd_Params
{
	int*                                               UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              muted;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinRoleEnum*                                   Role;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MuteMenu.MuteMenu_C.Construct
struct UMuteMenu_C_Construct_Params
{
};

// Function MuteMenu.MuteMenu_C.EventInputSourceChanged
struct UMuteMenu_C_EventInputSourceChanged_Params
{
};

// Function MuteMenu.MuteMenu_C.ExecuteUbergraph_MuteMenu
struct UMuteMenu_C_ExecuteUbergraph_MuteMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

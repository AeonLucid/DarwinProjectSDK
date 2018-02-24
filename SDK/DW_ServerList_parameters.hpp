#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ServerList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ServerList.ServerList_C.CheckUserFocus
struct UServerList_C_CheckUserFocus_Params
{
};

// Function ServerList.ServerList_C.UpdateGamepadFocus
struct UServerList_C_UpdateGamepadFocus_Params
{
};

// Function ServerList.ServerList_C.ShowRoleSelection
struct UServerList_C_ShowRoleSelection_Params
{
	struct FBlueprintSessionResult                     Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               GameStarted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ShowDirectorName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                NumPlayers;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerList.ServerList_C.EventSessionNotFound
struct UServerList_C_EventSessionNotFound_Params
{
};

// Function ServerList.ServerList_C.EventSessionFound
struct UServerList_C_EventSessionFound_Params
{
	struct FBlueprintSessionResult*                    BlueprintSessionResult;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FString*                                    host_name;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    version;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    map_name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    show_director_name;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FDarwinPlayerInfo>*                  PlayersInfo;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bGameStarted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    num_spectators;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ServerList.ServerList_C.ServerRefresh
struct UServerList_C_ServerRefresh_Params
{
};

// Function ServerList.ServerList_C.StopServerRefresh
struct UServerList_C_StopServerRefresh_Params
{
};

// Function ServerList.ServerList_C.Tick
struct UServerList_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerList.ServerList_C.Back to Server list
struct UServerList_C_Back_to_Server_list_Params
{
};

// Function ServerList.ServerList_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UServerList_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ServerList.ServerList_C.InitParentInServerList
struct UServerList_C_InitParentInServerList_Params
{
	class UMainMenu_C*                                 MainMenu;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerList.ServerList_C.OpenServerList
struct UServerList_C_OpenServerList_Params
{
};

// Function ServerList.ServerList_C.CollapseServerList
struct UServerList_C_CollapseServerList_Params
{
};

// Function ServerList.ServerList_C.Construct
struct UServerList_C_Construct_Params
{
};

// Function ServerList.ServerList_C.MenuBackPressed
struct UServerList_C_MenuBackPressed_Params
{
};

// Function ServerList.ServerList_C.EventInputSourceChanged
struct UServerList_C_EventInputSourceChanged_Params
{
};

// Function ServerList.ServerList_C.EventMenuBack
struct UServerList_C_EventMenuBack_Params
{
	bool*                                              bIsEscape;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerList.ServerList_C.EventMenuClick
struct UServerList_C_EventMenuClick_Params
{
};

// Function ServerList.ServerList_C.ExecuteUbergraph_ServerList
struct UServerList_C_ExecuteUbergraph_ServerList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

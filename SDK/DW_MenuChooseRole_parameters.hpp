#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MenuChooseRole_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MenuChooseRole.MenuChooseRole_C.UpdateInputMode
struct UMenuChooseRole_C_UpdateInputMode_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.ShowChooseRoleMenu
struct UMenuChooseRole_C_ShowChooseRoleMenu_Params
{
	struct FText                                       playerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBlueprintSessionResult                     Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               GameStarted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     showDirectorName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                NumPlayers;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuChooseRole.MenuChooseRole_C.Tick
struct UMenuChooseRole_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuChooseRole.MenuChooseRole_C.AutoChoosePlayer
struct UMenuChooseRole_C_AutoChoosePlayer_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.InitServerListAsParent
struct UMenuChooseRole_C_InitServerListAsParent_Params
{
	class UServerList_C*                               ServerList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMainMenu_C*                                 MainMenu;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuChooseRole.MenuChooseRole_C.EventInputSourceChanged
struct UMenuChooseRole_C_EventInputSourceChanged_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.EventMenuBack
struct UMenuChooseRole_C_EventMenuBack_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.OpenChooseRoleMenu
struct UMenuChooseRole_C_OpenChooseRoleMenu_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.SetOverlay44Visibility
struct UMenuChooseRole_C_SetOverlay44Visibility_Params
{
	bool                                               IsonMainMenu;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Director_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_Director_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Player_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_Player_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Player_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_Player_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Duo_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_Duo_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Duo_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_Duo_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Duo_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_Duo_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.CustomEvent
struct UMenuChooseRole_C_CustomEvent_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.EventFriendPartyJoined
struct UMenuChooseRole_C_EventFriendPartyJoined_Params
{
	struct FText*                                      friendName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UTexture2D**                                 friendAvatar;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuChooseRole.MenuChooseRole_C.EventFriendPartyLeft
struct UMenuChooseRole_C_EventFriendPartyLeft_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.Construct
struct UMenuChooseRole_C_Construct_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Director_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_Director_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_ShowDirectorFAA_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_ShowDirectorFAA_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_ShowDirectorBloodPact_K2Node_ComponentBoundEvent_263_OnButtonClickedEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_ShowDirectorBloodPact_K2Node_ComponentBoundEvent_263_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Director_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_Director_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.ExitShowDirectorMenu
struct UMenuChooseRole_C_ExitShowDirectorMenu_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_ChooseRegion_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_ChooseRegion_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Player_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_Player_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.EventUpdateChosenRegion
struct UMenuChooseRole_C_EventUpdateChosenRegion_Params
{
	struct FString*                                    RegionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MenuChooseRole.MenuChooseRole_C.Hide Choose region
struct UMenuChooseRole_C_Hide_Choose_region_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.ChooseRegionEvent
struct UMenuChooseRole_C_ChooseRegionEvent_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.EventDevCommunicationReceived
struct UMenuChooseRole_C_EventDevCommunicationReceived_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.ExecuteUbergraph_MenuChooseRole
struct UMenuChooseRole_C_ExecuteUbergraph_MenuChooseRole_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

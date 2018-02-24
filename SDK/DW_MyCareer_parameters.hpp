#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MyCareer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MyCareer.MyCareer_C.ClearLeaderBoard
struct UMyCareer_C_ClearLeaderBoard_Params
{
	int                                                Array_Index;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MyCareer.MyCareer_C.FillLocalPlayerRank
struct UMyCareer_C_FillLocalPlayerRank_Params
{
	struct FString                                     Player_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Primary_Value;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Secondary_Value;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MyCareer.MyCareer_C.SetChooseComboBoxOpen
struct UMyCareer_C_SetChooseComboBoxOpen_Params
{
	bool                                               bIsOpen;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MyCareer.MyCareer_C.GetLeaderboard
struct UMyCareer_C_GetLeaderboard_Params
{
	int                                                StartRank;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LeaderboardTypeInt;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MyCareer.MyCareer_C.FillLeaderboard
struct UMyCareer_C_FillLeaderboard_Params
{
	int                                                Array_Index;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLocalPlayer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Player_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Primary_Value;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Secondary_Value;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OnlineId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MyCareer.MyCareer_C.Init
struct UMyCareer_C_Init_Params
{
};

// Function MyCareer.MyCareer_C.BndEvt__Button_Achievement_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
struct UMyCareer_C_BndEvt__Button_Achievement_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MyCareer.MyCareer_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature
struct UMyCareer_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MyCareer.MyCareer_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_41_OnButtonHoverEvent__DelegateSignature
struct UMyCareer_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_41_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MyCareer.MyCareer_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature
struct UMyCareer_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MyCareer.MyCareer_C.Init Parent in My Career
struct UMyCareer_C_Init_Parent_in_My_Career_Params
{
	class UMainMenu_C*                                 Main_Menu;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMainMenuAlpha_C*                            Main_Menu_Alpha;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MyCareer.MyCareer_C.Construct
struct UMyCareer_C_Construct_Params
{
};

// Function MyCareer.MyCareer_C.BndEvt__Button_MyRank_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UMyCareer_C_BndEvt__Button_MyRank_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MyCareer.MyCareer_C.BndEvt__ScrollBoxLeaderboard_K2Node_ComponentBoundEvent_63_OnUserScrolledEvent__DelegateSignature
struct UMyCareer_C_BndEvt__ScrollBoxLeaderboard_K2Node_ComponentBoundEvent_63_OnUserScrolledEvent__DelegateSignature_Params
{
	float                                              CurrentOffset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MyCareer.MyCareer_C.BndEvt__PreviousPage_K2Node_ComponentBoundEvent_167_OnButtonClickedEvent__DelegateSignature
struct UMyCareer_C_BndEvt__PreviousPage_K2Node_ComponentBoundEvent_167_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MyCareer.MyCareer_C.BndEvt__NextPage_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature
struct UMyCareer_C_BndEvt__NextPage_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MyCareer.MyCareer_C.BndEvt__Button_MyRank_K2Node_ComponentBoundEvent_96_OnButtonHoverEvent__DelegateSignature
struct UMyCareer_C_BndEvt__Button_MyRank_K2Node_ComponentBoundEvent_96_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MyCareer.MyCareer_C.BndEvt__Button_MyRank_K2Node_ComponentBoundEvent_117_OnButtonHoverEvent__DelegateSignature
struct UMyCareer_C_BndEvt__Button_MyRank_K2Node_ComponentBoundEvent_117_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MyCareer.MyCareer_C.BndEvt__Button_FisrtPage_K2Node_ComponentBoundEvent_1199_OnButtonClickedEvent__DelegateSignature
struct UMyCareer_C_BndEvt__Button_FisrtPage_K2Node_ComponentBoundEvent_1199_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MyCareer.MyCareer_C.MenuBackPressed
struct UMyCareer_C_MenuBackPressed_Params
{
};

// Function MyCareer.MyCareer_C.EventInputSourceChanged
struct UMyCareer_C_EventInputSourceChanged_Params
{
};

// Function MyCareer.MyCareer_C.EventMenuBack
struct UMyCareer_C_EventMenuBack_Params
{
	bool*                                              bIsEscape;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MyCareer.MyCareer_C.OnClickMyRank
struct UMyCareer_C_OnClickMyRank_Params
{
};

// Function MyCareer.MyCareer_C.OnClickPreviousPage
struct UMyCareer_C_OnClickPreviousPage_Params
{
};

// Function MyCareer.MyCareer_C.OnClickNextPage
struct UMyCareer_C_OnClickNextPage_Params
{
};

// Function MyCareer.MyCareer_C.OnClickFirstPage
struct UMyCareer_C_OnClickFirstPage_Params
{
};

// Function MyCareer.MyCareer_C.EventMenuXPressed
struct UMyCareer_C_EventMenuXPressed_Params
{
};

// Function MyCareer.MyCareer_C.BndEvt__Button_LastPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UMyCareer_C_BndEvt__Button_LastPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MyCareer.MyCareer_C.OnClickLastPage
struct UMyCareer_C_OnClickLastPage_Params
{
};

// Function MyCareer.MyCareer_C.EventLeaderboardReceived
struct UMyCareer_C_EventLeaderboardReceived_Params
{
	struct FDarwinLeaderboardInfos*                    leaderboardInfos;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MyCareer.MyCareer_C.FillCareerStats
struct UMyCareer_C_FillCareerStats_Params
{
};

// Function MyCareer.MyCareer_C.PostInit
struct UMyCareer_C_PostInit_Params
{
};

// Function MyCareer.MyCareer_C.Tick
struct UMyCareer_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MyCareer.MyCareer_C.ShowInmateStats
struct UMyCareer_C_ShowInmateStats_Params
{
};

// Function MyCareer.MyCareer_C.ShowSDStats
struct UMyCareer_C_ShowSDStats_Params
{
};

// Function MyCareer.MyCareer_C.ShowAchievementStats
struct UMyCareer_C_ShowAchievementStats_Params
{
};

// Function MyCareer.MyCareer_C.EventMenuRightPagePressed
struct UMyCareer_C_EventMenuRightPagePressed_Params
{
};

// Function MyCareer.MyCareer_C.EventMenuLeftPagePressed
struct UMyCareer_C_EventMenuLeftPagePressed_Params
{
};

// Function MyCareer.MyCareer_C.BndEvt__Button_SDStats_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
struct UMyCareer_C_BndEvt__Button_SDStats_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MyCareer.MyCareer_C.BndEvt__Button_Inmate_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
struct UMyCareer_C_BndEvt__Button_Inmate_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MyCareer.MyCareer_C.EventMenuClick
struct UMyCareer_C_EventMenuClick_Params
{
};

// Function MyCareer.MyCareer_C.EventMenuDPadLeft
struct UMyCareer_C_EventMenuDPadLeft_Params
{
};

// Function MyCareer.MyCareer_C.EventMenuRightTriggerPressed
struct UMyCareer_C_EventMenuRightTriggerPressed_Params
{
};

// Function MyCareer.MyCareer_C.EventMenuLeftTriggerPressed
struct UMyCareer_C_EventMenuLeftTriggerPressed_Params
{
};

// Function MyCareer.MyCareer_C.EventMenuDPadRight
struct UMyCareer_C_EventMenuDPadRight_Params
{
};

// Function MyCareer.MyCareer_C.EventPlayerProfileReceived
struct UMyCareer_C_EventPlayerProfileReceived_Params
{
	struct FDarwinPlayerStats*                         stats;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FDarwinProfile*                             Profile;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MyCareer.MyCareer_C.BndEvt__ChooseSortingText_K2Node_ComponentBoundEvent_44_OnSelectionChangedEvent__DelegateSignature
struct UMyCareer_C_BndEvt__ChooseSortingText_K2Node_ComponentBoundEvent_44_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FText                                       SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MyCareer.MyCareer_C.ExecuteUbergraph_MyCareer
struct UMyCareer_C_ExecuteUbergraph_MyCareer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

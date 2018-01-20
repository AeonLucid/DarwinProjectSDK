// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MyCareer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MyCareer.MyCareer_C.GetLeaderboard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StartRank                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LeaderboardType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMyCareer_C::GetLeaderboard(int StartRank, const struct FString& LeaderboardType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.GetLeaderboard");

	UMyCareer_C_GetLeaderboard_Params params;
	params.StartRank = StartRank;
	params.LeaderboardType = LeaderboardType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.FillLeaderboard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Array_Index                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLocalPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Player_Name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Primary_Value                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Secondary_Value                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMyCareer_C::FillLeaderboard(int Array_Index, bool IsLocalPlayer, const struct FString& Player_Name, float Primary_Value, float Secondary_Value, int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.FillLeaderboard");

	UMyCareer_C_FillLeaderboard_Params params;
	params.Array_Index = Array_Index;
	params.IsLocalPlayer = IsLocalPlayer;
	params.Player_Name = Player_Name;
	params.Primary_Value = Primary_Value;
	params.Secondary_Value = Secondary_Value;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCareer_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.Init");

	UMyCareer_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.BndEvt__ChooseSortingforranking_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMyCareer_C::BndEvt__ChooseSortingforranking_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.BndEvt__ChooseSortingforranking_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature");

	UMyCareer_C_BndEvt__ChooseSortingforranking_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.BndEvt__Button_Inmate_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCareer_C::BndEvt__Button_Inmate_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.BndEvt__Button_Inmate_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");

	UMyCareer_C_BndEvt__Button_Inmate_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.BndEvt__Button_SDStats_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCareer_C::BndEvt__Button_SDStats_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.BndEvt__Button_SDStats_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature");

	UMyCareer_C_BndEvt__Button_SDStats_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.BndEvt__Button_Achievement_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCareer_C::BndEvt__Button_Achievement_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.BndEvt__Button_Achievement_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");

	UMyCareer_C_BndEvt__Button_Achievement_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMyCareer_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature");

	UMyCareer_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_41_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMyCareer_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_41_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_41_OnButtonHoverEvent__DelegateSignature");

	UMyCareer_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_41_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCareer_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature");

	UMyCareer_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.Init Parent in My Career
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMainMenu_C*             Main_Menu                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMainMenuAlpha_C*        Main_Menu_Alpha                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMyCareer_C::Init_Parent_in_My_Career(class UMainMenu_C* Main_Menu, class UMainMenuAlpha_C* Main_Menu_Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.Init Parent in My Career");

	UMyCareer_C_Init_Parent_in_My_Career_Params params;
	params.Main_Menu = Main_Menu;
	params.Main_Menu_Alpha = Main_Menu_Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCareer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.Construct");

	UMyCareer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.BndEvt__Button_MyRank_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCareer_C::BndEvt__Button_MyRank_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.BndEvt__Button_MyRank_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UMyCareer_C_BndEvt__Button_MyRank_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.BndEvt__ScrollBoxLeaderboard_K2Node_ComponentBoundEvent_63_OnUserScrolledEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          CurrentOffset                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMyCareer_C::BndEvt__ScrollBoxLeaderboard_K2Node_ComponentBoundEvent_63_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.BndEvt__ScrollBoxLeaderboard_K2Node_ComponentBoundEvent_63_OnUserScrolledEvent__DelegateSignature");

	UMyCareer_C_BndEvt__ScrollBoxLeaderboard_K2Node_ComponentBoundEvent_63_OnUserScrolledEvent__DelegateSignature_Params params;
	params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.BndEvt__PreviousPage_K2Node_ComponentBoundEvent_167_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCareer_C::BndEvt__PreviousPage_K2Node_ComponentBoundEvent_167_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.BndEvt__PreviousPage_K2Node_ComponentBoundEvent_167_OnButtonClickedEvent__DelegateSignature");

	UMyCareer_C_BndEvt__PreviousPage_K2Node_ComponentBoundEvent_167_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.BndEvt__NextPage_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCareer_C::BndEvt__NextPage_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.BndEvt__NextPage_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature");

	UMyCareer_C_BndEvt__NextPage_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.BndEvt__Button_MyRank_K2Node_ComponentBoundEvent_96_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMyCareer_C::BndEvt__Button_MyRank_K2Node_ComponentBoundEvent_96_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.BndEvt__Button_MyRank_K2Node_ComponentBoundEvent_96_OnButtonHoverEvent__DelegateSignature");

	UMyCareer_C_BndEvt__Button_MyRank_K2Node_ComponentBoundEvent_96_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.BndEvt__Button_MyRank_K2Node_ComponentBoundEvent_117_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMyCareer_C::BndEvt__Button_MyRank_K2Node_ComponentBoundEvent_117_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.BndEvt__Button_MyRank_K2Node_ComponentBoundEvent_117_OnButtonHoverEvent__DelegateSignature");

	UMyCareer_C_BndEvt__Button_MyRank_K2Node_ComponentBoundEvent_117_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.BndEvt__Button_FisrtPage_K2Node_ComponentBoundEvent_1199_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCareer_C::BndEvt__Button_FisrtPage_K2Node_ComponentBoundEvent_1199_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.BndEvt__Button_FisrtPage_K2Node_ComponentBoundEvent_1199_OnButtonClickedEvent__DelegateSignature");

	UMyCareer_C_BndEvt__Button_FisrtPage_K2Node_ComponentBoundEvent_1199_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.MenuBackPressed
// (BlueprintCallable, BlueprintEvent)

void UMyCareer_C::MenuBackPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.MenuBackPressed");

	UMyCareer_C_MenuBackPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UMyCareer_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.EventInputSourceChanged");

	UMyCareer_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.EventMenuBack
// (Event, Public, BlueprintEvent)

void UMyCareer_C::EventMenuBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.EventMenuBack");

	UMyCareer_C_EventMenuBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.EventMenuDown
// (Event, Public, BlueprintEvent)

void UMyCareer_C::EventMenuDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.EventMenuDown");

	UMyCareer_C_EventMenuDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.EventMenuUp
// (Event, Public, BlueprintEvent)

void UMyCareer_C::EventMenuUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.EventMenuUp");

	UMyCareer_C_EventMenuUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.OnClickMyRank
// (BlueprintCallable, BlueprintEvent)

void UMyCareer_C::OnClickMyRank()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.OnClickMyRank");

	UMyCareer_C_OnClickMyRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.OnClickPreviousPage
// (BlueprintCallable, BlueprintEvent)

void UMyCareer_C::OnClickPreviousPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.OnClickPreviousPage");

	UMyCareer_C_OnClickPreviousPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.OnClickNextPage
// (BlueprintCallable, BlueprintEvent)

void UMyCareer_C::OnClickNextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.OnClickNextPage");

	UMyCareer_C_OnClickNextPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.OnClickFirstPage
// (BlueprintCallable, BlueprintEvent)

void UMyCareer_C::OnClickFirstPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.OnClickFirstPage");

	UMyCareer_C_OnClickFirstPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.EventMenuLeftPagePressed
// (Event, Public, BlueprintEvent)

void UMyCareer_C::EventMenuLeftPagePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.EventMenuLeftPagePressed");

	UMyCareer_C_EventMenuLeftPagePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.EventMenuRightPagePressed
// (Event, Public, BlueprintEvent)

void UMyCareer_C::EventMenuRightPagePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.EventMenuRightPagePressed");

	UMyCareer_C_EventMenuRightPagePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.EventMenuXPressed
// (Event, Public, BlueprintEvent)

void UMyCareer_C::EventMenuXPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.EventMenuXPressed");

	UMyCareer_C_EventMenuXPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.BndEvt__Button_LastPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCareer_C::BndEvt__Button_LastPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.BndEvt__Button_LastPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UMyCareer_C_BndEvt__Button_LastPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.OnClickLastPage
// (BlueprintCallable, BlueprintEvent)

void UMyCareer_C::OnClickLastPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.OnClickLastPage");

	UMyCareer_C_OnClickLastPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.EventMenuLeftTriggerPressed
// (Event, Public, BlueprintEvent)

void UMyCareer_C::EventMenuLeftTriggerPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.EventMenuLeftTriggerPressed");

	UMyCareer_C_EventMenuLeftTriggerPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.EventMenuRightTriggerPressed
// (Event, Public, BlueprintEvent)

void UMyCareer_C::EventMenuRightTriggerPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.EventMenuRightTriggerPressed");

	UMyCareer_C_EventMenuRightTriggerPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.EventPlayerProfileStatsReceived
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDarwinCareerStats*     stats                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FDarwinProfile*         Profile                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyCareer_C::EventPlayerProfileStatsReceived(struct FDarwinCareerStats* stats, struct FDarwinProfile* Profile)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.EventPlayerProfileStatsReceived");

	UMyCareer_C_EventPlayerProfileStatsReceived_Params params;
	params.stats = stats;
	params.Profile = Profile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.EventLeaderboardReceived
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDarwinLeaderboardInfos* leaderboardInfos               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyCareer_C::EventLeaderboardReceived(struct FDarwinLeaderboardInfos* leaderboardInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.EventLeaderboardReceived");

	UMyCareer_C_EventLeaderboardReceived_Params params;
	params.leaderboardInfos = leaderboardInfos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.FillCareerStats
// (BlueprintCallable, BlueprintEvent)

void UMyCareer_C::FillCareerStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.FillCareerStats");

	UMyCareer_C_FillCareerStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyCareer.MyCareer_C.ExecuteUbergraph_MyCareer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMyCareer_C::ExecuteUbergraph_MyCareer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyCareer.MyCareer_C.ExecuteUbergraph_MyCareer");

	UMyCareer_C_ExecuteUbergraph_MyCareer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

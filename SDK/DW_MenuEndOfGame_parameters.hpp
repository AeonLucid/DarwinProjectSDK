#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MenuEndOfGame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MenuEndOfGame.MenuEndOfGame_C.GetStatName
struct UMenuEndOfGame_C_GetStatName_Params
{
	EStatTypeEnum                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function MenuEndOfGame.MenuEndOfGame_C.GetTitle
struct UMenuEndOfGame_C_GetTitle_Params
{
	EStatTypeEnum                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function MenuEndOfGame.MenuEndOfGame_C.BndEvt__ButtonMainMenu_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct UMenuEndOfGame_C_BndEvt__ButtonMainMenu_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MenuEndOfGame.MenuEndOfGame_C.EventUpdateGameEndTime
struct UMenuEndOfGame_C_EventUpdateGameEndTime_Params
{
	struct FString*                                    gameTimeStr;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MenuEndOfGame.MenuEndOfGame_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature
struct UMenuEndOfGame_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MenuEndOfGame.MenuEndOfGame_C.Construct
struct UMenuEndOfGame_C_Construct_Params
{
};

// Function MenuEndOfGame.MenuEndOfGame_C.EventPlayerIsWinner
struct UMenuEndOfGame_C_EventPlayerIsWinner_Params
{
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBloodPactActive;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               allyID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuEndOfGame.MenuEndOfGame_C.EventMenuClick
struct UMenuEndOfGame_C_EventMenuClick_Params
{
};

// Function MenuEndOfGame.MenuEndOfGame_C.ExecuteUbergraph_MenuEndOfGame
struct UMenuEndOfGame_C_ExecuteUbergraph_MenuEndOfGame_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

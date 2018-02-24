#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_XboxStartScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function XboxStartScreen.XboxStartScreen_C.EventProceedToMainMenu
struct UXboxStartScreen_C_EventProceedToMainMenu_Params
{
};

// Function XboxStartScreen.XboxStartScreen_C.ProceedToMainMenu
struct UXboxStartScreen_C_ProceedToMainMenu_Params
{
};

// Function XboxStartScreen.XboxStartScreen_C.EventShowButtonPrompt
struct UXboxStartScreen_C_EventShowButtonPrompt_Params
{
};

// Function XboxStartScreen.XboxStartScreen_C.EventHideButtonPrompt
struct UXboxStartScreen_C_EventHideButtonPrompt_Params
{
};

// Function XboxStartScreen.XboxStartScreen_C.ExecuteUbergraph_XboxStartScreen
struct UXboxStartScreen_C_ExecuteUbergraph_XboxStartScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

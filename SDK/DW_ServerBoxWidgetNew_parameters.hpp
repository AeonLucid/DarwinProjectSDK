#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ServerBoxWidgetNew_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.Init
struct UServerBoxWidgetNew_C_Init_Params
{
	struct FBlueprintSessionResult                     Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     ServerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     version;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     showDirectorName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FDarwinPlayerInfo>                   PlayerInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               GameStarted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NumSpectators;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UServerList_C*                               ServerList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_266_OnButtonClickedEvent__DelegateSignature
struct UServerBoxWidgetNew_C_BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_266_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.BndEvt__Button_14_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UServerBoxWidgetNew_C_BndEvt__Button_14_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.JoinServer
struct UServerBoxWidgetNew_C_JoinServer_Params
{
};

// Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.EventMenuClick
struct UServerBoxWidgetNew_C_EventMenuClick_Params
{
};

// Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.Spectate
struct UServerBoxWidgetNew_C_Spectate_Params
{
};

// Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.ExecuteUbergraph_ServerBoxWidgetNew
struct UServerBoxWidgetNew_C_ExecuteUbergraph_ServerBoxWidgetNew_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

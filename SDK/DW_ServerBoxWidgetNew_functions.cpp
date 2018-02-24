// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ServerBoxWidgetNew_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.Init
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Session                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 ServerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 version                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ShowDirectorName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FDarwinPlayerInfo> PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           GameStarted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 NumSpectators                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UServerList_C*           ServerList                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBoxWidgetNew_C::Init(const struct FBlueprintSessionResult& Session, const struct FString& ServerName, const struct FString& version, const struct FString& MapName, const struct FString& ShowDirectorName, bool GameStarted, const struct FString& NumSpectators, class UServerList_C* ServerList, TArray<struct FDarwinPlayerInfo>* PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.Init");

	UServerBoxWidgetNew_C_Init_Params params;
	params.Session = Session;
	params.ServerName = ServerName;
	params.version = version;
	params.MapName = MapName;
	params.ShowDirectorName = ShowDirectorName;
	params.GameStarted = GameStarted;
	params.NumSpectators = NumSpectators;
	params.ServerList = ServerList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;
}


// Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_266_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UServerBoxWidgetNew_C::BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_266_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_266_OnButtonClickedEvent__DelegateSignature");

	UServerBoxWidgetNew_C_BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_266_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.BndEvt__Button_14_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UServerBoxWidgetNew_C::BndEvt__Button_14_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.BndEvt__Button_14_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UServerBoxWidgetNew_C_BndEvt__Button_14_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.JoinServer
// (BlueprintCallable, BlueprintEvent)

void UServerBoxWidgetNew_C::JoinServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.JoinServer");

	UServerBoxWidgetNew_C_JoinServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.EventMenuClick
// (Event, Public, BlueprintEvent)

void UServerBoxWidgetNew_C::EventMenuClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.EventMenuClick");

	UServerBoxWidgetNew_C_EventMenuClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.Spectate
// (BlueprintCallable, BlueprintEvent)

void UServerBoxWidgetNew_C::Spectate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.Spectate");

	UServerBoxWidgetNew_C_Spectate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.ExecuteUbergraph_ServerBoxWidgetNew
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBoxWidgetNew_C::ExecuteUbergraph_ServerBoxWidgetNew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBoxWidgetNew.ServerBoxWidgetNew_C.ExecuteUbergraph_ServerBoxWidgetNew");

	UServerBoxWidgetNew_C_ExecuteUbergraph_ServerBoxWidgetNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

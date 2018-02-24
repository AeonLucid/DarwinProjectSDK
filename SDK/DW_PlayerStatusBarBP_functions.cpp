// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PlayerStatusBarBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerStatusBarBP.PlayerStatusBarBP_C.GetCurrentPlayerIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBarBP_C::GetCurrentPlayerIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBarBP.PlayerStatusBarBP_C.GetCurrentPlayerIndex");

	UPlayerStatusBarBP_C_GetCurrentPlayerIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function PlayerStatusBarBP.PlayerStatusBarBP_C.EventPlayerJoinedGame
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                playerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                playerName12                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerStatusBarBP_C::EventPlayerJoinedGame(struct FString* playerName, int* playerID, struct FString* playerName12)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBarBP.PlayerStatusBarBP_C.EventPlayerJoinedGame");

	UPlayerStatusBarBP_C_EventPlayerJoinedGame_Params params;
	params.playerName = playerName;
	params.playerID = playerID;
	params.playerName12 = playerName12;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBarBP.PlayerStatusBarBP_C.EventEnterCamStateCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBarBP_C::EventEnterCamStateCharacter(int* playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBarBP.PlayerStatusBarBP_C.EventEnterCamStateCharacter");

	UPlayerStatusBarBP_C_EventEnterCamStateCharacter_Params params;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBarBP.PlayerStatusBarBP_C.EventLeaveCamStateCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBarBP_C::EventLeaveCamStateCharacter(int* playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBarBP.PlayerStatusBarBP_C.EventLeaveCamStateCharacter");

	UPlayerStatusBarBP_C_EventLeaveCamStateCharacter_Params params;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBarBP.PlayerStatusBarBP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBarBP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBarBP.PlayerStatusBarBP_C.Tick");

	UPlayerStatusBarBP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBarBP.PlayerStatusBarBP_C.OpenChoosePlayerInterface
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InstructionText                (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerStatusBarBP_C::OpenChoosePlayerInterface(const struct FText& InstructionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBarBP.PlayerStatusBarBP_C.OpenChoosePlayerInterface");

	UPlayerStatusBarBP_C_OpenChoosePlayerInterface_Params params;
	params.InstructionText = InstructionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBarBP.PlayerStatusBarBP_C.CloseChoosePlayerInterface
// (BlueprintCallable, BlueprintEvent)

void UPlayerStatusBarBP_C::CloseChoosePlayerInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBarBP.PlayerStatusBarBP_C.CloseChoosePlayerInterface");

	UPlayerStatusBarBP_C_CloseChoosePlayerInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBarBP.PlayerStatusBarBP_C.EventShowDirectorLeft
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                ShowDirectorName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerStatusBarBP_C::EventShowDirectorLeft(struct FString* ShowDirectorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBarBP.PlayerStatusBarBP_C.EventShowDirectorLeft");

	UPlayerStatusBarBP_C_EventShowDirectorLeft_Params params;
	params.ShowDirectorName = ShowDirectorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBarBP.PlayerStatusBarBP_C.EventShowDirectorJoined
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                ShowDirectorName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerStatusBarBP_C::EventShowDirectorJoined(struct FString* ShowDirectorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBarBP.PlayerStatusBarBP_C.EventShowDirectorJoined");

	UPlayerStatusBarBP_C_EventShowDirectorJoined_Params params;
	params.ShowDirectorName = ShowDirectorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatusBarBP.PlayerStatusBarBP_C.ExecuteUbergraph_PlayerStatusBarBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStatusBarBP_C::ExecuteUbergraph_PlayerStatusBarBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatusBarBP.PlayerStatusBarBP_C.ExecuteUbergraph_PlayerStatusBarBP");

	UPlayerStatusBarBP_C_ExecuteUbergraph_PlayerStatusBarBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MiniMapGameInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MiniMapGameInfo.MiniMapGameInfo_C.EventUpdateNumberOfPlayersLeftAlive
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           numberAlive                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMapGameInfo_C::EventUpdateNumberOfPlayersLeftAlive(int* numberAlive)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMapGameInfo.MiniMapGameInfo_C.EventUpdateNumberOfPlayersLeftAlive");

	UMiniMapGameInfo_C_EventUpdateNumberOfPlayersLeftAlive_Params params;
	params.numberAlive = numberAlive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMapGameInfo.MiniMapGameInfo_C.EventUpdateNumberOfKills
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           nbOfKills                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMapGameInfo_C::EventUpdateNumberOfKills(int* nbOfKills)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMapGameInfo.MiniMapGameInfo_C.EventUpdateNumberOfKills");

	UMiniMapGameInfo_C_EventUpdateNumberOfKills_Params params;
	params.nbOfKills = nbOfKills;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMapGameInfo.MiniMapGameInfo_C.ExecuteUbergraph_MiniMapGameInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMapGameInfo_C::ExecuteUbergraph_MiniMapGameInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMapGameInfo.MiniMapGameInfo_C.ExecuteUbergraph_MiniMapGameInfo");

	UMiniMapGameInfo_C_ExecuteUbergraph_MiniMapGameInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

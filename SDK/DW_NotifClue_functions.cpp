// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifClue_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotifClue.NotifClue_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum            clueType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 playerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UNotifClue_C::Initialize(EDarwinItemTypeEnum clueType, const struct FString& playerName, const struct FString& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifClue.NotifClue_C.Initialize");

	UNotifClue_C_Initialize_Params params;
	params.clueType = clueType;
	params.playerName = playerName;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifClue.NotifClue_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifClue_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifClue.NotifClue_C.Construct");

	UNotifClue_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifClue.NotifClue_C.ExecuteUbergraph_NotifClue
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifClue_C::ExecuteUbergraph_NotifClue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifClue.NotifClue_C.ExecuteUbergraph_NotifClue");

	UNotifClue_C_ExecuteUbergraph_NotifClue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

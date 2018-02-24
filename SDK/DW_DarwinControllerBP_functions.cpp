// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinControllerBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinControllerBP.DarwinControllerBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADarwinControllerBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinControllerBP.DarwinControllerBP_C.UserConstructionScript");

	ADarwinControllerBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinControllerBP.DarwinControllerBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADarwinControllerBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinControllerBP.DarwinControllerBP_C.ReceiveBeginPlay");

	ADarwinControllerBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinControllerBP.DarwinControllerBP_C.EventVideoAnnouncement
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                URL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                tilte                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                Body                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float*                         LengthSeconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinControllerBP_C::EventVideoAnnouncement(struct FString* URL, struct FString* tilte, struct FString* Body, float* LengthSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinControllerBP.DarwinControllerBP_C.EventVideoAnnouncement");

	ADarwinControllerBP_C_EventVideoAnnouncement_Params params;
	params.URL = URL;
	params.tilte = tilte;
	params.Body = Body;
	params.LengthSeconds = LengthSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinControllerBP.DarwinControllerBP_C.ExecuteUbergraph_DarwinControllerBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinControllerBP_C::ExecuteUbergraph_DarwinControllerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinControllerBP.DarwinControllerBP_C.ExecuteUbergraph_DarwinControllerBP");

	ADarwinControllerBP_C_ExecuteUbergraph_DarwinControllerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

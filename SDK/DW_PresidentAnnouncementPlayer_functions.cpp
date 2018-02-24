// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PresidentAnnouncementPlayer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PresidentAnnouncementPlayer.PresidentAnnouncementPlayer_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Title                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Body                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          LengthSeconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPresidentAnnouncementPlayer_C::Initialize(const struct FString& Title, const struct FString& Body, float LengthSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PresidentAnnouncementPlayer.PresidentAnnouncementPlayer_C.Initialize");

	UPresidentAnnouncementPlayer_C_Initialize_Params params;
	params.Title = Title;
	params.Body = Body;
	params.LengthSeconds = LengthSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PresidentAnnouncementPlayer.PresidentAnnouncementPlayer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPresidentAnnouncementPlayer_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PresidentAnnouncementPlayer.PresidentAnnouncementPlayer_C.Tick");

	UPresidentAnnouncementPlayer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PresidentAnnouncementPlayer.PresidentAnnouncementPlayer_C.ExecuteUbergraph_PresidentAnnouncementPlayer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPresidentAnnouncementPlayer_C::ExecuteUbergraph_PresidentAnnouncementPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PresidentAnnouncementPlayer.PresidentAnnouncementPlayer_C.ExecuteUbergraph_PresidentAnnouncementPlayer");

	UPresidentAnnouncementPlayer_C_ExecuteUbergraph_PresidentAnnouncementPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

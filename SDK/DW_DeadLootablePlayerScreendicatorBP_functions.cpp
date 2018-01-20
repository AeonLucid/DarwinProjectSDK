// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DeadLootablePlayerScreendicatorBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DeadLootablePlayerScreendicatorBP.DeadLootablePlayerScreendicatorBP_C.EventUpdateScreendication
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         arrowScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          onScreen                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          behindCam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDeadLootablePlayerScreendicatorBP_C::EventUpdateScreendication(float* Angle, float* arrowScale, float* Distance, float* Opacity, bool* onScreen, bool* behindCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeadLootablePlayerScreendicatorBP.DeadLootablePlayerScreendicatorBP_C.EventUpdateScreendication");

	UDeadLootablePlayerScreendicatorBP_C_EventUpdateScreendication_Params params;
	params.Angle = Angle;
	params.arrowScale = arrowScale;
	params.Distance = Distance;
	params.Opacity = Opacity;
	params.onScreen = onScreen;
	params.behindCam = behindCam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadLootablePlayerScreendicatorBP.DeadLootablePlayerScreendicatorBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDeadLootablePlayerScreendicatorBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeadLootablePlayerScreendicatorBP.DeadLootablePlayerScreendicatorBP_C.Construct");

	UDeadLootablePlayerScreendicatorBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadLootablePlayerScreendicatorBP.DeadLootablePlayerScreendicatorBP_C.EventSetCharacterUniqueID
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDeadLootablePlayerScreendicatorBP_C::EventSetCharacterUniqueID(int* UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeadLootablePlayerScreendicatorBP.DeadLootablePlayerScreendicatorBP_C.EventSetCharacterUniqueID");

	UDeadLootablePlayerScreendicatorBP_C_EventSetCharacterUniqueID_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadLootablePlayerScreendicatorBP.DeadLootablePlayerScreendicatorBP_C.EventBloodPactDeadHeartbeat
// (Event, Public, BlueprintEvent)

void UDeadLootablePlayerScreendicatorBP_C::EventBloodPactDeadHeartbeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeadLootablePlayerScreendicatorBP.DeadLootablePlayerScreendicatorBP_C.EventBloodPactDeadHeartbeat");

	UDeadLootablePlayerScreendicatorBP_C_EventBloodPactDeadHeartbeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadLootablePlayerScreendicatorBP.DeadLootablePlayerScreendicatorBP_C.ExecuteUbergraph_DeadLootablePlayerScreendicatorBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDeadLootablePlayerScreendicatorBP_C::ExecuteUbergraph_DeadLootablePlayerScreendicatorBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeadLootablePlayerScreendicatorBP.DeadLootablePlayerScreendicatorBP_C.ExecuteUbergraph_DeadLootablePlayerScreendicatorBP");

	UDeadLootablePlayerScreendicatorBP_C_ExecuteUbergraph_DeadLootablePlayerScreendicatorBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

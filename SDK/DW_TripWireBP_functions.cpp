// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_TripWireBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TripWireBP.TripWireBP_C.DisableAllCollisions
// (Public, BlueprintCallable, BlueprintEvent)

void ATripWireBP_C::DisableAllCollisions()
{
	static auto fn = UObject::FindObject<UFunction>("Function TripWireBP.TripWireBP_C.DisableAllCollisions");

	ATripWireBP_C_DisableAllCollisions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TripWireBP.TripWireBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATripWireBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TripWireBP.TripWireBP_C.UserConstructionScript");

	ATripWireBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TripWireBP.TripWireBP_C.EventInitializeMeshArray
// (Event, Public, BlueprintEvent)

void ATripWireBP_C::EventInitializeMeshArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function TripWireBP.TripWireBP_C.EventInitializeMeshArray");

	ATripWireBP_C_EventInitializeMeshArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TripWireBP.TripWireBP_C.EventCraftableToolSprung
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       characterTarget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATripWireBP_C::EventCraftableToolSprung(class ADarwinCharacter** characterTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TripWireBP.TripWireBP_C.EventCraftableToolSprung");

	ATripWireBP_C_EventCraftableToolSprung_Params params;
	params.characterTarget = characterTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TripWireBP.TripWireBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATripWireBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TripWireBP.TripWireBP_C.ReceiveBeginPlay");

	ATripWireBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TripWireBP.TripWireBP_C.EventCraftableToolDestroyed
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATripWireBP_C::EventCraftableToolDestroyed(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function TripWireBP.TripWireBP_C.EventCraftableToolDestroyed");

	ATripWireBP_C_EventCraftableToolDestroyed_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TripWireBP.TripWireBP_C.EventCraftableToolDestroyedDedicatedServer
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATripWireBP_C::EventCraftableToolDestroyedDedicatedServer(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function TripWireBP.TripWireBP_C.EventCraftableToolDestroyedDedicatedServer");

	ATripWireBP_C_EventCraftableToolDestroyedDedicatedServer_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TripWireBP.TripWireBP_C.EventCraftableToolSprungDedicatedServer
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       characterTarget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATripWireBP_C::EventCraftableToolSprungDedicatedServer(class ADarwinCharacter** characterTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TripWireBP.TripWireBP_C.EventCraftableToolSprungDedicatedServer");

	ATripWireBP_C_EventCraftableToolSprungDedicatedServer_Params params;
	params.characterTarget = characterTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TripWireBP.TripWireBP_C.ExecuteUbergraph_TripWireBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATripWireBP_C::ExecuteUbergraph_TripWireBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TripWireBP.TripWireBP_C.ExecuteUbergraph_TripWireBP");

	ATripWireBP_C_ExecuteUbergraph_TripWireBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

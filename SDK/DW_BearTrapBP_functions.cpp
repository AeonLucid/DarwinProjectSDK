// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_BearTrapBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BearTrapBP.BearTrapBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABearTrapBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BearTrapBP.BearTrapBP_C.UserConstructionScript");

	ABearTrapBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BearTrapBP.BearTrapBP_C.EventCraftableToolDestroyed
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABearTrapBP_C::EventCraftableToolDestroyed(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BearTrapBP.BearTrapBP_C.EventCraftableToolDestroyed");

	ABearTrapBP_C_EventCraftableToolDestroyed_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BearTrapBP.BearTrapBP_C.EventCraftableToolSprung
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       characterTarget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABearTrapBP_C::EventCraftableToolSprung(class ADarwinCharacter** characterTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BearTrapBP.BearTrapBP_C.EventCraftableToolSprung");

	ABearTrapBP_C_EventCraftableToolSprung_Params params;
	params.characterTarget = characterTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BearTrapBP.BearTrapBP_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABearTrapBP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BearTrapBP.BearTrapBP_C.ReceiveDestroyed");

	ABearTrapBP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BearTrapBP.BearTrapBP_C.EventInitializeMeshArray
// (Event, Public, BlueprintEvent)

void ABearTrapBP_C::EventInitializeMeshArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function BearTrapBP.BearTrapBP_C.EventInitializeMeshArray");

	ABearTrapBP_C_EventInitializeMeshArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BearTrapBP.BearTrapBP_C.EventCraftableToolDestroyedDedicatedServer
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABearTrapBP_C::EventCraftableToolDestroyedDedicatedServer(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BearTrapBP.BearTrapBP_C.EventCraftableToolDestroyedDedicatedServer");

	ABearTrapBP_C_EventCraftableToolDestroyedDedicatedServer_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BearTrapBP.BearTrapBP_C.ExecuteUbergraph_BearTrapBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABearTrapBP_C::ExecuteUbergraph_BearTrapBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BearTrapBP.BearTrapBP_C.ExecuteUbergraph_BearTrapBP");

	ABearTrapBP_C_ExecuteUbergraph_BearTrapBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

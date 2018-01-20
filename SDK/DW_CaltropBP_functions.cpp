// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CaltropBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CaltropBP.CaltropBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACaltropBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaltropBP.CaltropBP_C.UserConstructionScript");

	ACaltropBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaltropBP.CaltropBP_C.EventInitializeMeshArray
// (Event, Public, BlueprintEvent)

void ACaltropBP_C::EventInitializeMeshArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaltropBP.CaltropBP_C.EventInitializeMeshArray");

	ACaltropBP_C_EventInitializeMeshArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaltropBP.CaltropBP_C.EventCraftableToolDestroyed
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ACaltropBP_C::EventCraftableToolDestroyed(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaltropBP.CaltropBP_C.EventCraftableToolDestroyed");

	ACaltropBP_C_EventCraftableToolDestroyed_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaltropBP.CaltropBP_C.EventCraftableToolSprung
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       characterTarget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACaltropBP_C::EventCraftableToolSprung(class ADarwinCharacter** characterTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaltropBP.CaltropBP_C.EventCraftableToolSprung");

	ACaltropBP_C_EventCraftableToolSprung_Params params;
	params.characterTarget = characterTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaltropBP.CaltropBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACaltropBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaltropBP.CaltropBP_C.ReceiveTick");

	ACaltropBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaltropBP.CaltropBP_C.ExecuteUbergraph_CaltropBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACaltropBP_C::ExecuteUbergraph_CaltropBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaltropBP.CaltropBP_C.ExecuteUbergraph_CaltropBP");

	ACaltropBP_C_ExecuteUbergraph_CaltropBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

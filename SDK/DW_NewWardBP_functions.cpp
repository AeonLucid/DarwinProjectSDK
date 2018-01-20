// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NewWardBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewWardBP.NewWardBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANewWardBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWardBP.NewWardBP_C.UserConstructionScript");

	ANewWardBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWardBP.NewWardBP_C.EventCraftableToolDestroyed
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ANewWardBP_C::EventCraftableToolDestroyed(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWardBP.NewWardBP_C.EventCraftableToolDestroyed");

	ANewWardBP_C_EventCraftableToolDestroyed_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWardBP.NewWardBP_C.EventInitializeMeshArray
// (Event, Public, BlueprintEvent)

void ANewWardBP_C::EventInitializeMeshArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWardBP.NewWardBP_C.EventInitializeMeshArray");

	ANewWardBP_C_EventInitializeMeshArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWardBP.NewWardBP_C.EventWardPing
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ANewWardBP_C::EventWardPing(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWardBP.NewWardBP_C.EventWardPing");

	ANewWardBP_C_EventWardPing_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWardBP.NewWardBP_C.ExecuteUbergraph_NewWardBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANewWardBP_C::ExecuteUbergraph_NewWardBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWardBP.NewWardBP_C.ExecuteUbergraph_NewWardBP");

	ANewWardBP_C_ExecuteUbergraph_NewWardBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

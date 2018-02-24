// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MiniMapCharacterPylons_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.ToMapCoord
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InLoc                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               outLoc                         (Parm, OutParm, IsPlainOldData)

void UMiniMapCharacterPylons_C::ToMapCoord(const struct FVector2D& InLoc, struct FVector2D* outLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.ToMapCoord");

	UMiniMapCharacterPylons_C_ToMapCoord_Params params;
	params.InLoc = InLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outLoc != nullptr)
		*outLoc = params.outLoc;
}


// Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PylonIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Loc                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UMiniMapCharacterPylons_C::Initialize(int PylonIndex, const struct FVector2D& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.Initialize");

	UMiniMapCharacterPylons_C_Initialize_Params params;
	params.PylonIndex = PylonIndex;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.EventPylonJustActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMapCharacterPylons_C::EventPylonJustActivated(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.EventPylonJustActivated");

	UMiniMapCharacterPylons_C_EventPylonJustActivated_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.EventPylonStartedBeingHarvested
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           harvesterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMapCharacterPylons_C::EventPylonStartedBeingHarvested(int* Index, int* harvesterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.EventPylonStartedBeingHarvested");

	UMiniMapCharacterPylons_C_EventPylonStartedBeingHarvested_Params params;
	params.Index = Index;
	params.harvesterID = harvesterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.EventPylonStoppedBeingHarvested
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMapCharacterPylons_C::EventPylonStoppedBeingHarvested(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.EventPylonStoppedBeingHarvested");

	UMiniMapCharacterPylons_C_EventPylonStoppedBeingHarvested_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.EventPylonJustDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMapCharacterPylons_C::EventPylonJustDeactivated(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.EventPylonJustDeactivated");

	UMiniMapCharacterPylons_C_EventPylonJustDeactivated_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.EventPylonWillReactivate
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMapCharacterPylons_C::EventPylonWillReactivate(int* Index, float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.EventPylonWillReactivate");

	UMiniMapCharacterPylons_C_EventPylonWillReactivate_Params params;
	params.Index = Index;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.EventAllianceStart
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           allyID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMapCharacterPylons_C::EventAllianceStart(int* allyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.EventAllianceStart");

	UMiniMapCharacterPylons_C_EventAllianceStart_Params params;
	params.allyID = allyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.ExecuteUbergraph_MiniMapCharacterPylons
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMapCharacterPylons_C::ExecuteUbergraph_MiniMapCharacterPylons(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.ExecuteUbergraph_MiniMapCharacterPylons");

	UMiniMapCharacterPylons_C_ExecuteUbergraph_MiniMapCharacterPylons_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

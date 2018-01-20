// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MiniMapCharacterIconPylons_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MiniMapCharacterIconPylons.MiniMapCharacterIconPylons_C.EventPylonCreated
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                worldLoc                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UMiniMapCharacterIconPylons_C::EventPylonCreated(int* Index, struct FVector2D* Loc, struct FVector* worldLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMapCharacterIconPylons.MiniMapCharacterIconPylons_C.EventPylonCreated");

	UMiniMapCharacterIconPylons_C_EventPylonCreated_Params params;
	params.Index = Index;
	params.Loc = Loc;
	params.worldLoc = worldLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMapCharacterIconPylons.MiniMapCharacterIconPylons_C.ExecuteUbergraph_MiniMapCharacterIconPylons
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMapCharacterIconPylons_C::ExecuteUbergraph_MiniMapCharacterIconPylons(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMapCharacterIconPylons.MiniMapCharacterIconPylons_C.ExecuteUbergraph_MiniMapCharacterIconPylons");

	UMiniMapCharacterIconPylons_C_ExecuteUbergraph_MiniMapCharacterIconPylons_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

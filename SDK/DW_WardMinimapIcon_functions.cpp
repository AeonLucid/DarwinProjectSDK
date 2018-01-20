// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_WardMinimapIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WardMinimapIcon.WardMinimapIcon_C.ToMapCoord
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InLoc                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               outLoc                         (Parm, OutParm, IsPlainOldData)

void UWardMinimapIcon_C::ToMapCoord(const struct FVector2D& InLoc, struct FVector2D* outLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function WardMinimapIcon.WardMinimapIcon_C.ToMapCoord");

	UWardMinimapIcon_C_ToMapCoord_Params params;
	params.InLoc = InLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outLoc != nullptr)
		*outLoc = params.outLoc;
}


// Function WardMinimapIcon.WardMinimapIcon_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Loc                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UWardMinimapIcon_C::Initialize(const struct FVector2D& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function WardMinimapIcon.WardMinimapIcon_C.Initialize");

	UWardMinimapIcon_C_Initialize_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WardMinimapIcon.WardMinimapIcon_C.ExecuteUbergraph_WardMinimapIcon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWardMinimapIcon_C::ExecuteUbergraph_WardMinimapIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WardMinimapIcon.WardMinimapIcon_C.ExecuteUbergraph_WardMinimapIcon");

	UWardMinimapIcon_C_ExecuteUbergraph_WardMinimapIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

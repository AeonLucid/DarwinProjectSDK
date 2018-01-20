// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinPredatorMinimapIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinPredatorMinimapIcon.DarwinPredatorMinimapIcon_C.ToMapCoord
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InLoc                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               outLoc                         (Parm, OutParm, IsPlainOldData)

void UDarwinPredatorMinimapIcon_C::ToMapCoord(const struct FVector2D& InLoc, struct FVector2D* outLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPredatorMinimapIcon.DarwinPredatorMinimapIcon_C.ToMapCoord");

	UDarwinPredatorMinimapIcon_C_ToMapCoord_Params params;
	params.InLoc = InLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outLoc != nullptr)
		*outLoc = params.outLoc;
}


// Function DarwinPredatorMinimapIcon.DarwinPredatorMinimapIcon_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Loc                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UDarwinPredatorMinimapIcon_C::Initialize(int PlayerId, const struct FVector2D& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPredatorMinimapIcon.DarwinPredatorMinimapIcon_C.Initialize");

	UDarwinPredatorMinimapIcon_C_Initialize_Params params;
	params.PlayerId = PlayerId;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPredatorMinimapIcon.DarwinPredatorMinimapIcon_C.ExecuteUbergraph_DarwinPredatorMinimapIcon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPredatorMinimapIcon_C::ExecuteUbergraph_DarwinPredatorMinimapIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPredatorMinimapIcon.DarwinPredatorMinimapIcon_C.ExecuteUbergraph_DarwinPredatorMinimapIcon");

	UDarwinPredatorMinimapIcon_C_ExecuteUbergraph_DarwinPredatorMinimapIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

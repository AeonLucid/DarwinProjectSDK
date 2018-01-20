// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_TextInfoCustomization_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TextInfoCustomization.TextInfoCustomization_C.Get_TextBlock_38_ColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UTextInfoCustomization_C::Get_TextBlock_38_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TextInfoCustomization.TextInfoCustomization_C.Get_TextBlock_38_ColorAndOpacity_1");

	UTextInfoCustomization_C_Get_TextBlock_38_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TextInfoCustomization.TextInfoCustomization_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum            ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTextInfoCustomization_C::Initialize(EDarwinItemTypeEnum ItemType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextInfoCustomization.TextInfoCustomization_C.Initialize");

	UTextInfoCustomization_C_Initialize_Params params;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TextInfoCustomization.TextInfoCustomization_C.ExecuteUbergraph_TextInfoCustomization
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTextInfoCustomization_C::ExecuteUbergraph_TextInfoCustomization(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextInfoCustomization.TextInfoCustomization_C.ExecuteUbergraph_TextInfoCustomization");

	UTextInfoCustomization_C_ExecuteUbergraph_TextInfoCustomization_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

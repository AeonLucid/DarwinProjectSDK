// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ToolTIpWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ToolTIpWidget.ToolTIpWidget_C.Set tooltip text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Tool_tip_text                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UToolTIpWidget_C::Set_tooltip_text(const struct FText& Tool_tip_text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTIpWidget.ToolTIpWidget_C.Set tooltip text");

	UToolTIpWidget_C_Set_tooltip_text_Params params;
	params.Tool_tip_text = Tool_tip_text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTIpWidget.ToolTIpWidget_C.ExecuteUbergraph_ToolTIpWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UToolTIpWidget_C::ExecuteUbergraph_ToolTIpWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTIpWidget.ToolTIpWidget_C.ExecuteUbergraph_ToolTIpWidget");

	UToolTIpWidget_C_ExecuteUbergraph_ToolTIpWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_BP_JailDoorAnimation01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_JailDoorAnimation01.BP_JailDoorAnimation01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_JailDoorAnimation01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JailDoorAnimation01.BP_JailDoorAnimation01_C.UserConstructionScript");

	ABP_JailDoorAnimation01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JailDoorAnimation01.BP_JailDoorAnimation01_C.JailDoorOpen01
// (BlueprintCallable, BlueprintEvent)

void ABP_JailDoorAnimation01_C::JailDoorOpen01()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JailDoorAnimation01.BP_JailDoorAnimation01_C.JailDoorOpen01");

	ABP_JailDoorAnimation01_C_JailDoorOpen01_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JailDoorAnimation01.BP_JailDoorAnimation01_C.JailDoorClose
// (BlueprintCallable, BlueprintEvent)

void ABP_JailDoorAnimation01_C::JailDoorClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JailDoorAnimation01.BP_JailDoorAnimation01_C.JailDoorClose");

	ABP_JailDoorAnimation01_C_JailDoorClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JailDoorAnimation01.BP_JailDoorAnimation01_C.ExecuteUbergraph_BP_JailDoorAnimation01
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_JailDoorAnimation01_C::ExecuteUbergraph_BP_JailDoorAnimation01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JailDoorAnimation01.BP_JailDoorAnimation01_C.ExecuteUbergraph_BP_JailDoorAnimation01");

	ABP_JailDoorAnimation01_C_ExecuteUbergraph_BP_JailDoorAnimation01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

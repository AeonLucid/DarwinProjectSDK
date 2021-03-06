// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_BP_Package01_Open_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Package01_Open.BP_Package01_Open_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Package01_Open_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Package01_Open.BP_Package01_Open_C.UserConstructionScript");

	ABP_Package01_Open_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Package01_Open.BP_Package01_Open_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_Package01_Open_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Package01_Open.BP_Package01_Open_C.Timeline_0__FinishedFunc");

	ABP_Package01_Open_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Package01_Open.BP_Package01_Open_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_Package01_Open_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Package01_Open.BP_Package01_Open_C.Timeline_0__UpdateFunc");

	ABP_Package01_Open_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Package01_Open.BP_Package01_Open_C.PackageOpen01
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_Package01_Open_C::PackageOpen01(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Package01_Open.BP_Package01_Open_C.PackageOpen01");

	ABP_Package01_Open_C_PackageOpen01_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Package01_Open.BP_Package01_Open_C.PackageAppear01
// (BlueprintCallable, BlueprintEvent)

void ABP_Package01_Open_C::PackageAppear01()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Package01_Open.BP_Package01_Open_C.PackageAppear01");

	ABP_Package01_Open_C_PackageAppear01_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Package01_Open.BP_Package01_Open_C.ResetAnim
// (BlueprintCallable, BlueprintEvent)

void ABP_Package01_Open_C::ResetAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Package01_Open.BP_Package01_Open_C.ResetAnim");

	ABP_Package01_Open_C_ResetAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Package01_Open.BP_Package01_Open_C.ExecuteUbergraph_BP_Package01_Open
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Package01_Open_C::ExecuteUbergraph_BP_Package01_Open(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Package01_Open.BP_Package01_Open_C.ExecuteUbergraph_BP_Package01_Open");

	ABP_Package01_Open_C_ExecuteUbergraph_BP_Package01_Open_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

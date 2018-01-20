// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_BP_Package02_Open_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Package02_Open.BP_Package02_Open_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Package02_Open_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Package02_Open.BP_Package02_Open_C.UserConstructionScript");

	ABP_Package02_Open_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Package02_Open.BP_Package02_Open_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_Package02_Open_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Package02_Open.BP_Package02_Open_C.Timeline_0__FinishedFunc");

	ABP_Package02_Open_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Package02_Open.BP_Package02_Open_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_Package02_Open_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Package02_Open.BP_Package02_Open_C.Timeline_0__UpdateFunc");

	ABP_Package02_Open_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Package02_Open.BP_Package02_Open_C.PackageOpen02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_Package02_Open_C::PackageOpen02(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Package02_Open.BP_Package02_Open_C.PackageOpen02");

	ABP_Package02_Open_C_PackageOpen02_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Package02_Open.BP_Package02_Open_C.PackageAppear02
// (BlueprintCallable, BlueprintEvent)

void ABP_Package02_Open_C::PackageAppear02()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Package02_Open.BP_Package02_Open_C.PackageAppear02");

	ABP_Package02_Open_C_PackageAppear02_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Package02_Open.BP_Package02_Open_C.ResetAnim
// (BlueprintCallable, BlueprintEvent)

void ABP_Package02_Open_C::ResetAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Package02_Open.BP_Package02_Open_C.ResetAnim");

	ABP_Package02_Open_C_ResetAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Package02_Open.BP_Package02_Open_C.ExecuteUbergraph_BP_Package02_Open
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Package02_Open_C::ExecuteUbergraph_BP_Package02_Open(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Package02_Open.BP_Package02_Open_C.ExecuteUbergraph_BP_Package02_Open");

	ABP_Package02_Open_C_ExecuteUbergraph_BP_Package02_Open_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinCraftWheelBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.InventoryFail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InventoryIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum            ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelBP_C::InventoryFail(int InventoryIndex, EDarwinItemTypeEnum ItemType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.InventoryFail");

	UDarwinCraftWheelBP_C_InventoryFail_Params params;
	params.InventoryIndex = InventoryIndex;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.ShowTextInfoByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelBP_C::ShowTextInfoByIndex(int InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.ShowTextInfoByIndex");

	UDarwinCraftWheelBP_C_ShowTextInfoByIndex_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.SetCraftingIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            craftingIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelBP_C::SetCraftingIndex(int craftingIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.SetCraftingIndex");

	UDarwinCraftWheelBP_C_SetCraftingIndex_Params params;
	params.craftingIndex = craftingIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.HideTextInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UDarwinCraftWheelBP_C::HideTextInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.HideTextInfo");

	UDarwinCraftWheelBP_C_HideTextInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.ShowTextInfoOfType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelBP_C::ShowTextInfoOfType(EDarwinItemTypeEnum Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.ShowTextInfoOfType");

	UDarwinCraftWheelBP_C_ShowTextInfoOfType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.InitializeArrays
// (Public, BlueprintCallable, BlueprintEvent)

void UDarwinCraftWheelBP_C::InitializeArrays()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.InitializeArrays");

	UDarwinCraftWheelBP_C_InitializeArrays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDarwinCraftWheelBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.Construct");

	UDarwinCraftWheelBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventHoveredQuadrant
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelBP_C::EventHoveredQuadrant(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventHoveredQuadrant");

	UDarwinCraftWheelBP_C_EventHoveredQuadrant_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventUnHoveredQuadrant
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelBP_C::EventUnHoveredQuadrant(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventUnHoveredQuadrant");

	UDarwinCraftWheelBP_C_EventUnHoveredQuadrant_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventPressedQuadrant
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelBP_C::EventPressedQuadrant(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventPressedQuadrant");

	UDarwinCraftWheelBP_C_EventPressedQuadrant_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventUpdateMouseAngle
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelBP_C::EventUpdateMouseAngle(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventUpdateMouseAngle");

	UDarwinCraftWheelBP_C_EventUpdateMouseAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventCraftWheelOpen
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelBP_C::EventCraftWheelOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventCraftWheelOpen");

	UDarwinCraftWheelBP_C_EventCraftWheelOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventCraftWheelClose
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelBP_C::EventCraftWheelClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventCraftWheelClose");

	UDarwinCraftWheelBP_C_EventCraftWheelClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventGameStartsNow
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelBP_C::EventGameStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventGameStartsNow");

	UDarwinCraftWheelBP_C_EventGameStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventGameHasStarted
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelBP_C::EventGameHasStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventGameHasStarted");

	UDarwinCraftWheelBP_C_EventGameHasStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventGamepadInventoryUse
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelBP_C::EventGamepadInventoryUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventGamepadInventoryUse");

	UDarwinCraftWheelBP_C_EventGamepadInventoryUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventGamepadInventoryPressed
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelBP_C::EventGamepadInventoryPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventGamepadInventoryPressed");

	UDarwinCraftWheelBP_C_EventGamepadInventoryPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventGamepadInventoryReleased
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelBP_C::EventGamepadInventoryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventGamepadInventoryReleased");

	UDarwinCraftWheelBP_C_EventGamepadInventoryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventIsCrafting
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum*           enum_type                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFinished                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           craftingIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelBP_C::EventIsCrafting(float* progress, EDarwinItemTypeEnum* enum_type, bool* bFinished, int* craftingIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventIsCrafting");

	UDarwinCraftWheelBP_C_EventIsCrafting_Params params;
	params.progress = progress;
	params.enum_type = enum_type;
	params.bFinished = bFinished;
	params.craftingIndex = craftingIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.ReHoverQuadrant
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QuadrantToHover                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelBP_C::ReHoverQuadrant(int QuadrantToHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.ReHoverQuadrant");

	UDarwinCraftWheelBP_C_ReHoverQuadrant_Params params;
	params.QuadrantToHover = QuadrantToHover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelBP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.Tick");

	UDarwinCraftWheelBP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventCraftingCanceled
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelBP_C::EventCraftingCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventCraftingCanceled");

	UDarwinCraftWheelBP_C_EventCraftingCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventQueuedCraftingStart
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelBP_C::EventQueuedCraftingStart(EDarwinItemTypeEnum* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.EventQueuedCraftingStart");

	UDarwinCraftWheelBP_C_EventQueuedCraftingStart_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.ExecuteUbergraph_DarwinCraftWheelBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelBP_C::ExecuteUbergraph_DarwinCraftWheelBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelBP.DarwinCraftWheelBP_C.ExecuteUbergraph_DarwinCraftWheelBP");

	UDarwinCraftWheelBP_C_ExecuteUbergraph_DarwinCraftWheelBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

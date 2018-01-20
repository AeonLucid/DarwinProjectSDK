// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinFunctionLibrary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.ResetSoundToMenuSetting
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinFunctionLibrary_C::STATIC_ResetSoundToMenuSetting(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.ResetSoundToMenuSetting");

	UDarwinFunctionLibrary_C_ResetSoundToMenuSetting_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.PlaySpawnSound
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinFunctionLibrary_C::STATIC_PlaySpawnSound(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.PlaySpawnSound");

	UDarwinFunctionLibrary_C_PlaySpawnSound_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetFontMaterial
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceConstant* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinFunctionLibrary_C::STATIC_SetFontMaterial(class UTextBlock* Text, class UMaterialInstanceConstant* Material, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetFontMaterial");

	UDarwinFunctionLibrary_C_SetFontMaterial_Params params;
	params.Text = Text;
	params.Material = Material;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetDamageTypeName
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum          DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinFunctionLibrary_C::STATIC_SetDamageTypeName(EDarwinDamageTypeEnum DamageType, class UTextBlock* Text, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetDamageTypeName");

	UDarwinFunctionLibrary_C_SetDamageTypeName_Params params;
	params.DamageType = DamageType;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.StatToK
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UDarwinFunctionLibrary_C::STATIC_StatToK(int Value, class UObject* __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.StatToK");

	UDarwinFunctionLibrary_C_StatToK_Params params;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetFontOutlineMaterial
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceConstant* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinFunctionLibrary_C::STATIC_SetFontOutlineMaterial(class UTextBlock* Text, class UMaterialInstanceConstant* Material, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetFontOutlineMaterial");

	UDarwinFunctionLibrary_C_SetFontOutlineMaterial_Params params;
	params.Text = Text;
	params.Material = Material;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SecondsToText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UDarwinFunctionLibrary_C::STATIC_SecondsToText(float Seconds, class UObject* __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SecondsToText");

	UDarwinFunctionLibrary_C_SecondsToText_Params params;
	params.Seconds = Seconds;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetZoneName
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              ZoneTextWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ZoneHash                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinFunctionLibrary_C::STATIC_SetZoneName(class UTextBlock* ZoneTextWidget, const struct FString& ZoneHash, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetZoneName");

	UDarwinFunctionLibrary_C_SetZoneName_Params params;
	params.ZoneTextWidget = ZoneTextWidget;
	params.ZoneHash = ZoneHash;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.DarwinClearChildren
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinFunctionLibrary_C::STATIC_DarwinClearChildren(class UPanelWidget* NewParam, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.DarwinClearChildren");

	UDarwinFunctionLibrary_C_DarwinClearChildren_Params params;
	params.NewParam = NewParam;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.PopErrorMessage
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   line2                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinFunctionLibrary_C::STATIC_PopErrorMessage(const struct FText& Message, const struct FText& line2, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.PopErrorMessage");

	UDarwinFunctionLibrary_C_PopErrorMessage_Params params;
	params.Message = Message;
	params.line2 = line2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetUserWidgetOpacity
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             UserWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinFunctionLibrary_C::STATIC_SetUserWidgetOpacity(class UUserWidget* UserWidget, float Opacity, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetUserWidgetOpacity");

	UDarwinFunctionLibrary_C_SetUserWidgetOpacity_Params params;
	params.UserWidget = UserWidget;
	params.Opacity = Opacity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetFontAndOutlineMaterial
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceConstant* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinFunctionLibrary_C::STATIC_SetFontAndOutlineMaterial(class UTextBlock* Text, class UMaterialInstanceConstant* Material, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetFontAndOutlineMaterial");

	UDarwinFunctionLibrary_C_SetFontAndOutlineMaterial_Params params;
	params.Text = Text;
	params.Material = Material;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetImageOpacity
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinFunctionLibrary_C::STATIC_SetImageOpacity(class UImage* Image, float Opacity, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetImageOpacity");

	UDarwinFunctionLibrary_C_SetImageOpacity_Params params;
	params.Image = Image;
	params.Opacity = Opacity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetMaterial
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinFunctionLibrary_C::STATIC_SetMaterial(class UImage* Image, class UMaterialInterface* Material, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetMaterial");

	UDarwinFunctionLibrary_C_SetMaterial_Params params;
	params.Image = Image;
	params.Material = Material;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetTexture
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinFunctionLibrary_C::STATIC_SetTexture(class UImage* Image, class UTexture2D* Texture, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetTexture");

	UDarwinFunctionLibrary_C_SetTexture_Params params;
	params.Image = Image;
	params.Texture = Texture;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinFunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinFunctionLibrary.DarwinFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UDarwinFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinFunctionLibrary.DarwinFunctionLibrary_C");
		return ptr;
	}


	void STATIC_ResetSoundToMenuSetting(class UObject* __WorldContext);
	void STATIC_PlaySpawnSound(class UObject* __WorldContext);
	void STATIC_SetFontMaterial(class UTextBlock* Text, class UMaterialInstanceConstant* Material, class UObject* __WorldContext);
	void STATIC_SetDamageTypeName(EDarwinDamageTypeEnum DamageType, class UTextBlock* Text, class UObject* __WorldContext);
	void STATIC_StatToK(int Value, class UObject* __WorldContext, struct FText* Text);
	void STATIC_SetFontOutlineMaterial(class UTextBlock* Text, class UMaterialInstanceConstant* Material, class UObject* __WorldContext);
	void STATIC_SecondsToText(float Seconds, class UObject* __WorldContext, struct FText* Text);
	void STATIC_SetZoneName(class UTextBlock* ZoneTextWidget, const struct FString& ZoneHash, class UObject* __WorldContext);
	void STATIC_DarwinClearChildren(class UPanelWidget* NewParam, class UObject* __WorldContext);
	void STATIC_PopErrorMessage(const struct FText& Message, const struct FText& line2, class UObject* __WorldContext);
	void STATIC_SetUserWidgetOpacity(class UUserWidget* UserWidget, float Opacity, class UObject* __WorldContext);
	void STATIC_SetFontAndOutlineMaterial(class UTextBlock* Text, class UMaterialInstanceConstant* Material, class UObject* __WorldContext);
	void STATIC_SetImageOpacity(class UImage* Image, float Opacity, class UObject* __WorldContext);
	void STATIC_SetMaterial(class UImage* Image, class UMaterialInterface* Material, class UObject* __WorldContext);
	void STATIC_SetTexture(class UImage* Image, class UTexture2D* Texture, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

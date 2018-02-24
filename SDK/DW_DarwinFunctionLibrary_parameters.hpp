#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinFunctionLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.GetDamgeTypeForText
struct UDarwinFunctionLibrary_C_GetDamgeTypeForText_Params
{
	EDarwinDamageTypeEnum                              DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OutText;                                                  // (Parm, OutParm)
};

// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.GetZoneForText
struct UDarwinFunctionLibrary_C_GetZoneForText_Params
{
	struct FString                                     Zone_Text;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Out_Text;                                                 // (Parm, OutParm)
};

// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.IsZoneAvailableForAction
struct UDarwinFunctionLibrary_C_IsZoneAvailableForAction_Params
{
	class UDarwinUserWidget*                           SelfRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                ActionType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Available;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.MenuInputModeChangedForCursor
struct UDarwinFunctionLibrary_C_MenuInputModeChangedForCursor_Params
{
	class UObject*                                     WorldContext;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsingKeyboard;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.ResetSoundToMenuSetting
struct UDarwinFunctionLibrary_C_ResetSoundToMenuSetting_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.PlaySpawnSound
struct UDarwinFunctionLibrary_C_PlaySpawnSound_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetFontMaterial
struct UDarwinFunctionLibrary_C_SetFontMaterial_Params
{
	class UTextBlock*                                  Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceConstant*                   Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetDamageTypeName
struct UDarwinFunctionLibrary_C_SetDamageTypeName_Params
{
	EDarwinDamageTypeEnum                              DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.StatToK
struct UDarwinFunctionLibrary_C_StatToK_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetFontOutlineMaterial
struct UDarwinFunctionLibrary_C_SetFontOutlineMaterial_Params
{
	class UTextBlock*                                  Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceConstant*                   Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SecondsToText
struct UDarwinFunctionLibrary_C_SecondsToText_Params
{
	float                                              Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetZoneName
struct UDarwinFunctionLibrary_C_SetZoneName_Params
{
	class UTextBlock*                                  ZoneTextWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ZoneHash;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.DarwinClearChildren
struct UDarwinFunctionLibrary_C_DarwinClearChildren_Params
{
	class UPanelWidget*                                NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.PopErrorMessage
struct UDarwinFunctionLibrary_C_PopErrorMessage_Params
{
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       line2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetUserWidgetOpacity
struct UDarwinFunctionLibrary_C_SetUserWidgetOpacity_Params
{
	class UUserWidget*                                 UserWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetFontAndOutlineMaterial
struct UDarwinFunctionLibrary_C_SetFontAndOutlineMaterial_Params
{
	class UTextBlock*                                  Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceConstant*                   Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetImageOpacity
struct UDarwinFunctionLibrary_C_SetImageOpacity_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetMaterial
struct UDarwinFunctionLibrary_C_SetMaterial_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinFunctionLibrary.DarwinFunctionLibrary_C.SetTexture
struct UDarwinFunctionLibrary_C_SetTexture_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

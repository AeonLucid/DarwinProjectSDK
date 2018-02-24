#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinManHuntMinimapIcon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DarwinManHuntMinimapIcon.DarwinManHuntMinimapIcon_C
// 0x0014 (0x09DC - 0x09C8)
class UDarwinManHuntMinimapIcon_C : public UDarwinCharacterWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09C8(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      TargetChar;                                               // 0x09D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                playerID;                                                 // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DarwinManHuntMinimapIcon.DarwinManHuntMinimapIcon_C");
		return ptr;
	}


	void Initialize(int playerID, const struct FVector2D& Loc);
	void ToMapCoord(const struct FVector2D& InLoc, struct FVector2D* outLoc);
	void EventManHuntEnd(int* targetCharacterID, int* killerCharacterID, bool* isDead);
	void EventUpdateManHuntTargetLocation(struct FVector2D* Loc, struct FVector* worldLoc, float* Yaw, int* targetCharacterID);
	void ExecuteUbergraph_DarwinManHuntMinimapIcon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

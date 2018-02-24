#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_BP_LootDoor01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LootDoor01.BP_LootDoor01_C
// 0x0018 (0x0380 - 0x0368)
class ABP_LootDoor01_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SM_LootDoor01;                                            // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LootDoor01.BP_LootDoor01_C");
		return ptr;
	}


	void UserConstructionScript();
	void LootDoorOpen01();
	void ExecuteUbergraph_BP_LootDoor01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

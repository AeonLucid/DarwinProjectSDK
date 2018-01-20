#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_BP_JailDoorAnimation01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_JailDoorAnimation01.BP_JailDoorAnimation01_C
// 0x0021 (0x0389 - 0x0368)
class ABP_JailDoorAnimation01_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	class UAkComponent*                                Ak_Jail_Door;                                             // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      OpenJailDoor01;                                           // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsOpen;                                                   // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_JailDoorAnimation01.BP_JailDoorAnimation01_C");
		return ptr;
	}


	void UserConstructionScript();
	void JailDoorOpen01();
	void JailDoorClose();
	void ExecuteUbergraph_BP_JailDoorAnimation01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

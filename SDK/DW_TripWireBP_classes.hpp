#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_TripWireBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TripWireBP.TripWireBP_C
// 0x0040 (0x0438 - 0x03F8)
class ATripWireBP_C : public ADarwinTripwire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               AxeCol;                                                   // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                AkTripwire;                                               // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               PickupShape;                                              // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FadeMesh;                                                 // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TripWireBP.TripWireBP_C");
		return ptr;
	}


	void DisableAllCollisions();
	void UserConstructionScript();
	void EventInitializeMeshArray();
	void EventCraftableToolSprung(class ADarwinCharacter** characterTarget);
	void ReceiveBeginPlay();
	void EventCraftableToolDestroyed(struct FVector* Loc);
	void EventCraftableToolDestroyedDedicatedServer(struct FVector* Loc);
	void EventCraftableToolSprungDedicatedServer(class ADarwinCharacter** characterTarget);
	void ExecuteUbergraph_TripWireBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_BearTrapBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BearTrapBP.BearTrapBP_C
// 0x0030 (0x0420 - 0x03F0)
class ABearTrapBP_C : public ADarwinBearTrap
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ArrowDestro;                                              // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FadeMesh;                                                 // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticTrap;                                               // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ATrapSkelMeshActorBP_C*                      TrapSkelMeshActor;                                        // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BearTrapBP.BearTrapBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void EventCraftableToolDestroyed(struct FVector* Loc);
	void EventCraftableToolSprung(class ADarwinCharacter** characterTarget);
	void ReceiveDestroyed();
	void EventInitializeMeshArray();
	void EventCraftableToolDestroyedDedicatedServer(struct FVector* Loc);
	void ExecuteUbergraph_BearTrapBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

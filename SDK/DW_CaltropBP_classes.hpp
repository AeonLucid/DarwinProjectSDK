#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CaltropBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CaltropBP.CaltropBP_C
// 0x0028 (0x0430 - 0x0408)
class ACaltropBP_C : public ADarwinCaltrop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           PickupCapsule;                                            // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FadeMesh;                                                 // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CaltropBP.CaltropBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void EventInitializeMeshArray();
	void EventCraftableToolDestroyed(struct FVector* Loc);
	void EventCraftableToolSprung(class ADarwinCharacter** characterTarget);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_CaltropBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

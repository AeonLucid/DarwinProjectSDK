#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinMysteryPackageBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinMysteryPackageBP.DarwinMysteryPackageBP_C
// 0x0018 (0x0418 - 0x0400)
class ADarwinMysteryPackageBP_C : public ADarwinMysteryPackage
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	class UDestructibleComponent*                      SM_City_Decos_TrashCan_DM1;                               // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinMysteryPackageBP.DarwinMysteryPackageBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__SM_City_Decos_TrashCan_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void BndEvt__SM_City_Decos_TrashCan_DM1_K2Node_ComponentBoundEvent_36_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_DarwinMysteryPackageBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

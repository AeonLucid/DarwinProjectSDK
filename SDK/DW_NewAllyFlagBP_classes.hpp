#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NewAllyFlagBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NewAllyFlagBP.NewAllyFlagBP_C
// 0x0028 (0x03E0 - 0x03B8)
class ANewAllyFlagBP_C : public ADarwinAllyFlag
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Flag_Ally;                                                // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Pole;                                                     // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Flag;                                                     // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NewAllyFlagBP.NewAllyFlagBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void EventInitializeAvatarTexture(class UTexture2D** AvatarTexture);
	void EventAllyFlagDestroyed(struct FVector* Loc);
	void ExecuteUbergraph_NewAllyFlagBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

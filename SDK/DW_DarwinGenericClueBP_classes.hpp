#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinGenericClueBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinGenericClueBP.DarwinGenericClueBP_C
// 0x0020 (0x03D0 - 0x03B0)
class ADarwinGenericClueBP_C : public ADarwinClue
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Toolbox01;                                             // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinGenericClueBP.DarwinGenericClueBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void EventHideOutline();
	void EventShowOutline();
	void HighlightClue(bool* enable, int* stencil_value);
	void ExecuteUbergraph_DarwinGenericClueBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

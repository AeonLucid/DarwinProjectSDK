#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_TrapSkelMeshActorBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TrapSkelMeshActorBP.TrapSkelMeshActorBP_C
// 0x0000 (0x03F0 - 0x03F0)
class ATrapSkelMeshActorBP_C : public ASkeletalMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TrapSkelMeshActorBP.TrapSkelMeshActorBP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_AugmentedReality_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AugmentedReality.ARBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UARBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARBlueprintFunctionLibrary");
		return ptr;
	}


	EARTrackingQuality STATIC_GetTrackingQuality(class UObject* WorldContextObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

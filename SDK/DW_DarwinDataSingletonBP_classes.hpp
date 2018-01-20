#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinDataSingletonBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinDataSingletonBP.DarwinDataSingletonBP_C
// 0x0000 (0x0218 - 0x0218)
class UDarwinDataSingletonBP_C : public UDarwinDataSingleton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinDataSingletonBP.DarwinDataSingletonBP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

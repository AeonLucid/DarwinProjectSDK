#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_Basic.hpp"
#include "DW_CoreUObject_classes.hpp"
#include "DW_Engine_classes.hpp"
#include "DW_UMG_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MixerInteractivity.EMixerInteractivityParticipantState
enum class EMixerInteractivityParticipantState : uint8_t
{
	EMixerInteractivityParticipantState__Joined = 0,
	EMixerInteractivityParticipantState__Input_Disabled = 1,
	EMixerInteractivityParticipantState__Left = 2,
	EMixerInteractivityParticipantState__EMixerInteractivityParticipantState_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MixerInteractivity.MixerButtonEventDynamicDelegateWrapper
// 0x0020
struct FMixerButtonEventDynamicDelegateWrapper
{
	struct FScriptMulticastDelegate                    PressedDelegate;                                          // 0x0000(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    ReleasedDelegate;                                         // 0x0010(0x0010) (ZeroConstructor, InstancedReference)
};

// ScriptStruct MixerInteractivity.MixerStickEventDynamicDelegateWrapper
// 0x0010
struct FMixerStickEventDynamicDelegateWrapper
{
	struct FScriptMulticastDelegate                    Delegate;                                                 // 0x0000(0x0010) (ZeroConstructor, InstancedReference)
};

// ScriptStruct MixerInteractivity.MixerButtonEventBinding
// 0x0018
struct FMixerButtonEventBinding
{
	struct FName                                       TargetFunctionName;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ButtonId;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               Pressed;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct MixerInteractivity.MixerStickEventBinding
// 0x0010
struct FMixerStickEventBinding
{
	struct FName                                       TargetFunctionName;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       StickId;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MixerInteractivity.MixerObjectReference
// 0x0008
struct FMixerObjectReference
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MixerInteractivity.MixerButtonReference
// 0x0000 (0x0008 - 0x0008)
struct FMixerButtonReference : public FMixerObjectReference
{

};

// ScriptStruct MixerInteractivity.MixerSceneReference
// 0x0000 (0x0008 - 0x0008)
struct FMixerSceneReference : public FMixerObjectReference
{

};

// ScriptStruct MixerInteractivity.MixerGroupReference
// 0x0000 (0x0008 - 0x0008)
struct FMixerGroupReference : public FMixerObjectReference
{

};

// ScriptStruct MixerInteractivity.MixerStickReference
// 0x0000 (0x0008 - 0x0008)
struct FMixerStickReference : public FMixerObjectReference
{

};

// ScriptStruct MixerInteractivity.MixerTransactionId
// 0x0010
struct FMixerTransactionId
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct MixerInteractivity.MixerPredefinedGroup
// 0x0010
struct FMixerPredefinedGroup
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       InitialScene;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

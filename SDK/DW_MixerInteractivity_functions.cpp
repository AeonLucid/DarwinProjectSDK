// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MixerInteractivity_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.TriggerButtonCooldown
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FMixerButtonReference   Button                         (Parm)
// struct FTimespan               Cooldown                       (Parm)

void UMixerInteractivityBlueprintLibrary::STATIC_TriggerButtonCooldown(const struct FMixerButtonReference& Button, const struct FTimespan& Cooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.TriggerButtonCooldown");

	UMixerInteractivityBlueprintLibrary_TriggerButtonCooldown_Params params;
	params.Button = Button;
	params.Cooldown = Cooldown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.StopInteractivityNonLatent
// (Final, Native, Static, Public, BlueprintCallable)

void UMixerInteractivityBlueprintLibrary::STATIC_StopInteractivityNonLatent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.StopInteractivityNonLatent");

	UMixerInteractivityBlueprintLibrary_StopInteractivityNonLatent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.StopInteractivityLatent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UMixerInteractivityBlueprintLibrary::STATIC_StopInteractivityLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.StopInteractivityLatent");

	UMixerInteractivityBlueprintLibrary_StopInteractivityLatent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.StartInteractivityNonLatent
// (Final, Native, Static, Public, BlueprintCallable)

void UMixerInteractivityBlueprintLibrary::STATIC_StartInteractivityNonLatent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.StartInteractivityNonLatent");

	UMixerInteractivityBlueprintLibrary_StartInteractivityNonLatent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.StartInteractivityLatent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UMixerInteractivityBlueprintLibrary::STATIC_StartInteractivityLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.StartInteractivityLatent");

	UMixerInteractivityBlueprintLibrary_StartInteractivityLatent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.SetCurrentScene
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FMixerSceneReference    Scene                          (Parm)
// struct FMixerGroupReference    Group                          (Parm)

void UMixerInteractivityBlueprintLibrary::STATIC_SetCurrentScene(const struct FMixerSceneReference& Scene, const struct FMixerGroupReference& Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.SetCurrentScene");

	UMixerInteractivityBlueprintLibrary_SetCurrentScene_Params params;
	params.Scene = Scene;
	params.Group = Group;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.MoveParticipantToGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FMixerGroupReference    Group                          (Parm)
// int                            ParticipantId                  (Parm, ZeroConstructor, IsPlainOldData)

void UMixerInteractivityBlueprintLibrary::STATIC_MoveParticipantToGroup(const struct FMixerGroupReference& Group, int ParticipantId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.MoveParticipantToGroup");

	UMixerInteractivityBlueprintLibrary_MoveParticipantToGroup_Params params;
	params.Group = Group;
	params.ParticipantId = ParticipantId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.LoginSilently
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UMixerInteractivityBlueprintLibrary::STATIC_LoginSilently(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.LoginSilently");

	UMixerInteractivityBlueprintLibrary_LoginSilently_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetStickState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMixerStickReference    Stick                          (Parm)
// float                          XAxis                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          YAxis                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ParticipantId                  (Parm, ZeroConstructor, IsPlainOldData)

void UMixerInteractivityBlueprintLibrary::STATIC_GetStickState(const struct FMixerStickReference& Stick, int ParticipantId, float* XAxis, float* YAxis, bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetStickState");

	UMixerInteractivityBlueprintLibrary_GetStickState_Params params;
	params.Stick = Stick;
	params.ParticipantId = ParticipantId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XAxis != nullptr)
		*XAxis = params.XAxis;
	if (YAxis != nullptr)
		*YAxis = params.YAxis;
	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetStickDescription
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMixerStickReference    Stick                          (Parm)
// struct FText                   HelpText                       (Parm, OutParm)

void UMixerInteractivityBlueprintLibrary::STATIC_GetStickDescription(const struct FMixerStickReference& Stick, struct FText* HelpText)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetStickDescription");

	UMixerInteractivityBlueprintLibrary_GetStickDescription_Params params;
	params.Stick = Stick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HelpText != nullptr)
		*HelpText = params.HelpText;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetRemoteParticipantInfo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ParticipantId                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsParticipating                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)
// int                            Level                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FMixerGroupReference    Group                          (Parm, OutParm)
// bool                           InputEnabled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FDateTime               ConnectedAt                    (Parm, OutParm)
// struct FDateTime               LastInputAt                    (Parm, OutParm)

void UMixerInteractivityBlueprintLibrary::STATIC_GetRemoteParticipantInfo(int ParticipantId, bool* IsParticipating, struct FString* Name, int* Level, struct FMixerGroupReference* Group, bool* InputEnabled, struct FDateTime* ConnectedAt, struct FDateTime* LastInputAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetRemoteParticipantInfo");

	UMixerInteractivityBlueprintLibrary_GetRemoteParticipantInfo_Params params;
	params.ParticipantId = ParticipantId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsParticipating != nullptr)
		*IsParticipating = params.IsParticipating;
	if (Name != nullptr)
		*Name = params.Name;
	if (Level != nullptr)
		*Level = params.Level;
	if (Group != nullptr)
		*Group = params.Group;
	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;
	if (ConnectedAt != nullptr)
		*ConnectedAt = params.ConnectedAt;
	if (LastInputAt != nullptr)
		*LastInputAt = params.LastInputAt;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetParticipantsInGroup
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMixerGroupReference    Group                          (Parm)
// TArray<int>                    ParticipantIds                 (Parm, OutParm, ZeroConstructor)

void UMixerInteractivityBlueprintLibrary::STATIC_GetParticipantsInGroup(const struct FMixerGroupReference& Group, TArray<int>* ParticipantIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetParticipantsInGroup");

	UMixerInteractivityBlueprintLibrary_GetParticipantsInGroup_Params params;
	params.Group = Group;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParticipantIds != nullptr)
		*ParticipantIds = params.ParticipantIds;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMixerObjectReference   Obj                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UMixerInteractivityBlueprintLibrary::STATIC_GetName(const struct FMixerObjectReference& Obj)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetName");

	UMixerInteractivityBlueprintLibrary_GetName_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetLoggedInUserInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            UserId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsLoggedIn                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)
// int                            Level                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Experience                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Sparks                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMixerInteractivityBlueprintLibrary::STATIC_GetLoggedInUserInfo(int* UserId, bool* IsLoggedIn, struct FString* Name, int* Level, int* Experience, int* Sparks)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetLoggedInUserInfo");

	UMixerInteractivityBlueprintLibrary_GetLoggedInUserInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UserId != nullptr)
		*UserId = params.UserId;
	if (IsLoggedIn != nullptr)
		*IsLoggedIn = params.IsLoggedIn;
	if (Name != nullptr)
		*Name = params.Name;
	if (Level != nullptr)
		*Level = params.Level;
	if (Experience != nullptr)
		*Experience = params.Experience;
	if (Sparks != nullptr)
		*Sparks = params.Sparks;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetButtonState
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMixerButtonReference   Button                         (Parm)
// struct FTimespan               RemainingCooldown              (Parm, OutParm)
// float                          progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            DownCount                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            PressCount                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            UpCount                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ParticipantId                  (Parm, ZeroConstructor, IsPlainOldData)

void UMixerInteractivityBlueprintLibrary::STATIC_GetButtonState(const struct FMixerButtonReference& Button, int ParticipantId, struct FTimespan* RemainingCooldown, float* progress, int* DownCount, int* PressCount, int* UpCount, bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetButtonState");

	UMixerInteractivityBlueprintLibrary_GetButtonState_Params params;
	params.Button = Button;
	params.ParticipantId = ParticipantId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RemainingCooldown != nullptr)
		*RemainingCooldown = params.RemainingCooldown;
	if (progress != nullptr)
		*progress = params.progress;
	if (DownCount != nullptr)
		*DownCount = params.DownCount;
	if (PressCount != nullptr)
		*PressCount = params.PressCount;
	if (UpCount != nullptr)
		*UpCount = params.UpCount;
	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetButtonDescription
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMixerButtonReference   Button                         (Parm)
// struct FText                   ButtonText                     (Parm, OutParm)
// struct FText                   HelpText                       (Parm, OutParm)
// int                            SparkCost                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMixerInteractivityBlueprintLibrary::STATIC_GetButtonDescription(const struct FMixerButtonReference& Button, struct FText* ButtonText, struct FText* HelpText, int* SparkCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetButtonDescription");

	UMixerInteractivityBlueprintLibrary_GetButtonDescription_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonText != nullptr)
		*ButtonText = params.ButtonText;
	if (HelpText != nullptr)
		*HelpText = params.HelpText;
	if (SparkCost != nullptr)
		*SparkCost = params.SparkCost;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.CaptureSparkTransaction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FMixerTransactionId     TransactionId                  (Parm)

void UMixerInteractivityBlueprintLibrary::STATIC_CaptureSparkTransaction(const struct FMixerTransactionId& TransactionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.CaptureSparkTransaction");

	UMixerInteractivityBlueprintLibrary_CaptureSparkTransaction_Params params;
	params.TransactionId = TransactionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

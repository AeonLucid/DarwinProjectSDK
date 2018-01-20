#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NewGuyABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NewGuyABP.NewGuyABP_C.MakeLeftRightBinary
struct UNewGuyABP_C_MakeLeftRightBinary_Params
{
	float                                              InLeftRight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutLeftRight;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewGuyABP.NewGuyABP_C.SetShouldBypassIdle
struct UNewGuyABP_C_SetShouldBypassIdle_Params
{
	bool                                               ShouldBypassIdle;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewGuyABP.NewGuyABP_C.ShouldAxeInteruptGotoAir
struct UNewGuyABP_C_ShouldAxeInteruptGotoAir_Params
{
	bool                                               ShouldGotoAir;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewGuyABP.NewGuyABP_C.Should180L_tr_idle
struct UNewGuyABP_C_Should180L_tr_idle_Params
{
	bool                                               Should180L;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewGuyABP.NewGuyABP_C.Should180R_tr_idle
struct UNewGuyABP_C_Should180R_tr_idle_Params
{
	bool                                               Should180R;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewGuyABP.NewGuyABP_C.SetShouldBeInAir
struct UNewGuyABP_C_SetShouldBeInAir_Params
{
	bool                                               shouldBeInAir;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewGuyABP.NewGuyABP_C.PrintFloat
struct UNewGuyABP_C_PrintFloat_Params
{
	float                                              In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewGuyABP.NewGuyABP_C.IsVelocityZero
struct UNewGuyABP_C_IsVelocityZero_Params
{
	bool                                               ZeroVel;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewGuyABP.NewGuyABP_C.ShouldGotoGroundFromLanding
struct UNewGuyABP_C_ShouldGotoGroundFromLanding_Params
{
	bool                                               GotoGround;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewGuyABP.NewGuyABP_C.IsGoingBackward
struct UNewGuyABP_C_IsGoingBackward_Params
{
	bool                                               GoingBackward;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewGuyABP.NewGuyABP_C.Should180L
struct UNewGuyABP_C_Should180L_Params
{
	bool                                               Should180L;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewGuyABP.NewGuyABP_C.Should180R
struct UNewGuyABP_C_Should180R_Params
{
	bool                                               Should180R;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewGuyABP.NewGuyABP_C.ControlIsCenter
struct UNewGuyABP_C_ControlIsCenter_Params
{
	bool                                               GoingNowhere;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewGuyABP.NewGuyABP_C.IsGoingForward
struct UNewGuyABP_C_IsGoingForward_Params
{
	bool                                               GoingForward;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewGuyABP.NewGuyABP_C.SetLeftRightBlendBuffer
struct UNewGuyABP_C_SetLeftRightBlendBuffer_Params
{
	float                                              InTRR;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutTrue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_13AB04B14A3999B4C03B0698564E666C
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_13AB04B14A3999B4C03B0698564E666C_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_CC096EBC4C69594FA9F55F9EAAD4DD82
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_CC096EBC4C69594FA9F55F9EAAD4DD82_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_C697B84042C951B187ED4A94612E8D87
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_C697B84042C951B187ED4A94612E8D87_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_746D197A4392F14A84B6D3B776EE00A9
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_746D197A4392F14A84B6D3B776EE00A9_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_049867144201F73EBC885286491C1B46
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_049867144201F73EBC885286491C1B46_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_BED722854D86348D7FEC09962EAEE11C
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_BED722854D86348D7FEC09962EAEE11C_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_422C57314C194F36550C50978DC4E4AC
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_422C57314C194F36550C50978DC4E4AC_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_774CCFB5405E5F8F5617EDB6AE779197
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_774CCFB5405E5F8F5617EDB6AE779197_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_61C989624C90FF57A639A29508523E61
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_61C989624C90FF57A639A29508523E61_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_6CF494A845E297F460DECF9423400F4F
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_6CF494A845E297F460DECF9423400F4F_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_AB1761994CC46300C5F95797CB6D9DD2
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_AB1761994CC46300C5F95797CB6D9DD2_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_8E0B26DE4A1052237144959C5F1DC39D
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_8E0B26DE4A1052237144959C5F1DC39D_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_DD9B8FD84841B8C99D977B9DDC0EFA73
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_DD9B8FD84841B8C99D977B9DDC0EFA73_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_C5085F014AC772FCB211D0AE548D80BF
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_C5085F014AC772FCB211D0AE548D80BF_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_C2F729CD44CA4E4245B7899E2A3EFDE3
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_C2F729CD44CA4E4245B7899E2A3EFDE3_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_69F940534DE23E2DE7221488133AF4BD
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_69F940534DE23E2DE7221488133AF4BD_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_3EC4F4EA46A8DDBD04C37D9EE505664B
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_3EC4F4EA46A8DDBD04C37D9EE505664B_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_0807E6784D354D620A2562AC66034ED8
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_0807E6784D354D620A2562AC66034ED8_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_96C33AF3428219E988CD6BACC7AC8C55
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_96C33AF3428219E988CD6BACC7AC8C55_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_AF598CA6496F6C5E1A8B2EBB84E79040
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_AF598CA6496F6C5E1A8B2EBB84E79040_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_F18EC19D46C4B12F53E7EAB6CBF94D3E
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_F18EC19D46C4B12F53E7EAB6CBF94D3E_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_130D2C074966DCDF6F81E2B45B9E25A5
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_130D2C074966DCDF6F81E2B45B9E25A5_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_FDA76CEF4A8EE1B8CF8021857F048488
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_FDA76CEF4A8EE1B8CF8021857F048488_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_9AE5E907443A616985A60895164FCF48
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_9AE5E907443A616985A60895164FCF48_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_652BE3A949D2470B55F2B289308B367B
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_652BE3A949D2470B55F2B289308B367B_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_EE52A0A6423D293C2117BDA8170F29C7
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_EE52A0A6423D293C2117BDA8170F29C7_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_06738D9E4E038819B6F1D6808C7DE9E0
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_06738D9E4E038819B6F1D6808C7DE9E0_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_8E5001924522C63D6CFB37BDD06E19A1
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_8E5001924522C63D6CFB37BDD06E19A1_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_153D23FC487E13A219AEF48EC0B91562
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_153D23FC487E13A219AEF48EC0B91562_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_47335C104F895BAF6FB1DA896DBC7D5F
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_47335C104F895BAF6FB1DA896DBC7D5F_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_CBAA8F06420BFB140F3FED85D291A0A6
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_CBAA8F06420BFB140F3FED85D291A0A6_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_D890316E4C076949091801BE84FDCB20
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_D890316E4C076949091801BE84FDCB20_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_A025837842AF9175FBBE75A125F08904
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_A025837842AF9175FBBE75A125F08904_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_0CAFC53247362D72DB80E982FCB834DB
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_0CAFC53247362D72DB80E982FCB834DB_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_37E4F2C449D32F6E3E9DF58AC8233834
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_37E4F2C449D32F6E3E9DF58AC8233834_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_7AC6E77C475D70195604EF84D0879AA0
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_7AC6E77C475D70195604EF84D0879AA0_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_93A4A579416E6B543F5FAFAADC32AC3A
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_93A4A579416E6B543F5FAFAADC32AC3A_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_FBC77FF1434A849FC704C082C162B86A
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_FBC77FF1434A849FC704C082C162B86A_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_DABD757D46A6769106D6A8B8D42EE5B1
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_DABD757D46A6769106D6A8B8D42EE5B1_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_7F207C1A4CBFA072075CF28D5BD2B90A
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_7F207C1A4CBFA072075CF28D5BD2B90A_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_400D6823444BE54134996E83E60E43C2
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_400D6823444BE54134996E83E60E43C2_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_6A3BB725496DCC7221AEAAB5D4CA99CF
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_6A3BB725496DCC7221AEAAB5D4CA99CF_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_1B506928427D32084564F29F6875CBB0
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_1B506928427D32084564F29F6875CBB0_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_37BB50A9432A26DE3982CABB7703B231
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_37BB50A9432A26DE3982CABB7703B231_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_AE9AF28A4F119D0FC740ECB4216309CB
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_AE9AF28A4F119D0FC740ECB4216309CB_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_6117768C473B4FB6F6A01EA8ACC66983
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_6117768C473B4FB6F6A01EA8ACC66983_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_9360573D422FE47373E463839437DED4
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_9360573D422FE47373E463839437DED4_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_241D6B5D4B383D3E717931B51007C8C6
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_241D6B5D4B383D3E717931B51007C8C6_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_102F4E93400C9EC2FF12A2A455EE8F1C
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_102F4E93400C9EC2FF12A2A455EE8F1C_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_681386984D8D48B96BC581A883B66066
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_681386984D8D48B96BC581A883B66066_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D27057E440F5AD205B7EF2967B44F19E
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D27057E440F5AD205B7EF2967B44F19E_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_CC3BF9734CE8965B96E543A6206D6CC7
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_CC3BF9734CE8965B96E543A6206D6CC7_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_EFC0E4C243EC2A142825EEBAA5165EB4
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_EFC0E4C243EC2A142825EEBAA5165EB4_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_D62166D143D5A8D4B6C2249091A7B8F2
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_D62166D143D5A8D4B6C2249091A7B8F2_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_030515C941CA83FE36C2CA8BA6B6D1D3
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_030515C941CA83FE36C2CA8BA6B6D1D3_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_95F1DAAE435D8016C339D29638BA2F17
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_95F1DAAE435D8016C339D29638BA2F17_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_19A2C5B248684A8E99324991A8E156FC
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_19A2C5B248684A8E99324991A8E156FC_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_F6954A1E40EDF79FC71F5FA6B8531670
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_F6954A1E40EDF79FC71F5FA6B8531670_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_09360C9F47316576B27AB88BBC7927A4
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_09360C9F47316576B27AB88BBC7927A4_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_8CA230C24808D65E98FB9F8AB2CFB537
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_8CA230C24808D65E98FB9F8AB2CFB537_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_83C79B3C46CEC3CBCF556F9120BC4039
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_83C79B3C46CEC3CBCF556F9120BC4039_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_A7FA5AB243FAA8CE511C58B385583D7D
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_A7FA5AB243FAA8CE511C58B385583D7D_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_B420E3BC49632B6B9D466A94B2E3EE8C
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_B420E3BC49632B6B9D466A94B2E3EE8C_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_90F780894E2CB30951B1DE9A267723D2
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_90F780894E2CB30951B1DE9A267723D2_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_248DF99346864F4BA5DDA788ADC9656B
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_248DF99346864F4BA5DDA788ADC9656B_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_F88F3A08476891C35E4C649C650BB6A5
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_F88F3A08476891C35E4C649C650BB6A5_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_5E016E7B4F8A432C42C45B8EF39EC6BA
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_5E016E7B4F8A432C42C45B8EF39EC6BA_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_06B49D2D463E264C6A06C2BBDD090E6F
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_06B49D2D463E264C6A06C2BBDD090E6F_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_778CD0E44F82B9109D600CA580173DD5
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_778CD0E44F82B9109D600CA580173DD5_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_BBAA235942829B48D6C564835167FC56
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_BBAA235942829B48D6C564835167FC56_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_EC277C794EC1848A4EF195BF70442D48
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_EC277C794EC1848A4EF195BF70442D48_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_2962BEBC412810D3AA6618B3A873DE0A
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_2962BEBC412810D3AA6618B3A873DE0A_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_AAAF46CB4878F10235D6F4A413D7F24B
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_AAAF46CB4878F10235D6F4A413D7F24B_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_2539E18F487B76B84ACB2DB8020E56C7
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_2539E18F487B76B84ACB2DB8020E56C7_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_E2FEBC86402807D864EDB3BC008125A2
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_E2FEBC86402807D864EDB3BC008125A2_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_2D09BF9D4D980F12CDA1E78A8209E0F6
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_2D09BF9D4D980F12CDA1E78A8209E0F6_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_BE412A8A4F94540BBA27EB974BC1828C
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_BE412A8A4F94540BBA27EB974BC1828C_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_6E5E3F28485234876BC1A091679EC20E
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_6E5E3F28485234876BC1A091679EC20E_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_SequencePlayer_4B4DFF5E41087BF5E688C5B02D5D7FF4
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_SequencePlayer_4B4DFF5E41087BF5E688C5B02D5D7FF4_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_CE69C2544BB522A45C7830A6279B8B55
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_CE69C2544BB522A45C7830A6279B8B55_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_FC96695148A6B1335EB6DCB8C3C5D916
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_FC96695148A6B1335EB6DCB8C3C5D916_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_FADE4FE34F50D12DD189C5AC88A2AB77
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_FADE4FE34F50D12DD189C5AC88A2AB77_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_33C099B5435EEEF1B59A49A7FACC6598
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_33C099B5435EEEF1B59A49A7FACC6598_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_A5D0AED1441E363715795BB53925703E
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_A5D0AED1441E363715795BB53925703E_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_FFE517F844A82624C0A9E29C4AFF6EB4
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_FFE517F844A82624C0A9E29C4AFF6EB4_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_278C020A44E9AD5505369A8BBECA42E9
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_278C020A44E9AD5505369A8BBECA42E9_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_1CD0210B4C8D3D997AEF7CA84BF100E0
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_1CD0210B4C8D3D997AEF7CA84BF100E0_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_AE5C5339471889E409966BA083E5BFFF
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_AE5C5339471889E409966BA083E5BFFF_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_BB976B4347D9F3F8645410ABA154061D
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_BB976B4347D9F3F8645410ABA154061D_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_90B9BF5D48C33FF68BF6978D2D8B6C8F
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_90B9BF5D48C33FF68BF6978D2D8B6C8F_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_F665EF7744C199818EDF238FE89FB8CD
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_F665EF7744C199818EDF238FE89FB8CD_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_1C1146D04CD1257EE74262BE17F096FD
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_1C1146D04CD1257EE74262BE17F096FD_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_BAC78F004832B5C2FD1814A74879F910
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_BAC78F004832B5C2FD1814A74879F910_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_BE7E1C9940D18274D65C1EA76D798F12
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_BE7E1C9940D18274D65C1EA76D798F12_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_8AC5367A42481B92921EAE82D55CEFE7
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_8AC5367A42481B92921EAE82D55CEFE7_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_6D64458845A4AEF5FC50688E9277AE05
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_6D64458845A4AEF5FC50688E9277AE05_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D333C89940F367541E1D46A6595BE880
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D333C89940F367541E1D46A6595BE880_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_193F518F47324F134A6DD6BE5C6D50A2
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_193F518F47324F134A6DD6BE5C6D50A2_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_4CDB76374C8B0FBC8E7309B7D9E92B7F
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_4CDB76374C8B0FBC8E7309B7D9E92B7F_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_3B6C61A949BE7FA193FB01A02B4B90D5
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_3B6C61A949BE7FA193FB01A02B4B90D5_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_50BE986A498F2153C845C2AF6EF8A433
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_50BE986A498F2153C845C2AF6EF8A433_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_74509C5B4E5F668F92EF6E93925AE013
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_74509C5B4E5F668F92EF6E93925AE013_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_67E5C1234A185EAF65E7019790DA079B
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_67E5C1234A185EAF65E7019790DA079B_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_7A54BD39458C2C51021C76B0D58C378F
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_7A54BD39458C2C51021C76B0D58C378F_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_31D164FA4D2C8D3F0689A881C3488415
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_31D164FA4D2C8D3F0689A881C3488415_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_289EB4CD4B93C53FE809078273F32138
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_289EB4CD4B93C53FE809078273F32138_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_78612EFA48E8A21030A54F933FC20DB8
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_78612EFA48E8A21030A54F933FC20DB8_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_F701FFC247940F6F4F19BCA9CA43EB88
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_F701FFC247940F6F4F19BCA9CA43EB88_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_19CD561945B2F4C660862A99D1F909EB
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_19CD561945B2F4C660862A99D1F909EB_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_A7799F904EBE3B7DA22326867D9337AA
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_A7799F904EBE3B7DA22326867D9337AA_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_7C2CC87A4F3D53B2EB7FF5B4085414CF
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_7C2CC87A4F3D53B2EB7FF5B4085414CF_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_8B02291343FAF3F7955EE0B0F7CB1AF1
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_8B02291343FAF3F7955EE0B0F7CB1AF1_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_92926EAB4B93946F56AA91BBC69D6BB4
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_92926EAB4B93946F56AA91BBC69D6BB4_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_AD9DC0D8426714B2FDA2D3BE04DE8B13
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_AD9DC0D8426714B2FDA2D3BE04DE8B13_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_9E2C93DE4E90769F30210AAA36223EBB
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_9E2C93DE4E90769F30210AAA36223EBB_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_9B373A09413C89CB3432A68B002A8313
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_9B373A09413C89CB3432A68B002A8313_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_FF1A9F8548B6453399D71DBD65C3FFFC
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_FF1A9F8548B6453399D71DBD65C3FFFC_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D6A2675743B19F6822EB21B24AF07909
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D6A2675743B19F6822EB21B24AF07909_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_46FD23F249DEB0048BB8BD885A5D78E0
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_46FD23F249DEB0048BB8BD885A5D78E0_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_37F86DD54B94B55198B841B30FD96E09
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_37F86DD54B94B55198B841B30FD96E09_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_B3EAFCD34A6641F24F5E378D9BA1F40C
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_B3EAFCD34A6641F24F5E378D9BA1F40C_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_4FDA883A4575DB3CA0B0A8A8DC98777D
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_4FDA883A4575DB3CA0B0A8A8DC98777D_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_37D3BA584AAAB507B69B18807D142B26
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_37D3BA584AAAB507B69B18807D142B26_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_AA3E1CF94FDE29E990886DA7BE6D8CBD
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_AA3E1CF94FDE29E990886DA7BE6D8CBD_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_F09B26A4431FBF2DDEA0FC90EF626D6C
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_F09B26A4431FBF2DDEA0FC90EF626D6C_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_5C729AE14980548720C3A8910E500651
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_5C729AE14980548720C3A8910E500651_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D71C42EA46643442037BF7ACBC90D47B
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D71C42EA46643442037BF7ACBC90D47B_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_111E14D3491BD4771E7B36B97AD38AF8
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_111E14D3491BD4771E7B36B97AD38AF8_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_377AC9A640A47C85089DD59233C8FDAF
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_377AC9A640A47C85089DD59233C8FDAF_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_E810BE6448DDA45022D3B9971B52D4F9
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_E810BE6448DDA45022D3B9971B52D4F9_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_41DFD5034C6F6C90F529BC88A149217C
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_41DFD5034C6F6C90F529BC88A149217C_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_E0D5671249E6AE8CC8197E8A58ACCCA9
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_E0D5671249E6AE8CC8197E8A58ACCCA9_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_E9E87352405C267D6DABB897B0593A80
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_E9E87352405C267D6DABB897B0593A80_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_F35B6E314A1F3D9436757E9FC86DA7E3
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_F35B6E314A1F3D9436757E9FC86DA7E3_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByInt_9CEDCD0247D96CEEC2970DA5AC06669C
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByInt_9CEDCD0247D96CEEC2970DA5AC06669C_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_3F2895A94BE4BB2C63C2FBB7E1B1B16F
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_3F2895A94BE4BB2C63C2FBB7E1B1B16F_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_4A6A13A1495EF344E03E58BE9B3AAA3F
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_4A6A13A1495EF344E03E58BE9B3AAA3F_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_CC16AAA7427A79D75A6C0398B40794A1
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_CC16AAA7427A79D75A6C0398B40794A1_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_ACD047F547D8B40884C78995A1815534
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_ACD047F547D8B40884C78995A1815534_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_FDDEF4244295E480F0078A8957B6B1E5
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_FDDEF4244295E480F0078A8957B6B1E5_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_8B9256F84C21259C1FB9B7BB46CB80D2
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_8B9256F84C21259C1FB9B7BB46CB80D2_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_D26A93BA4AA6B79FC1ABDDA6D204CD6E
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_D26A93BA4AA6B79FC1ABDDA6D204CD6E_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_439EFDB142CA9866FA778DB5816222DC
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_439EFDB142CA9866FA778DB5816222DC_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_8F18017F4F8CA8E37F1CEEB780C7EAF1
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_8F18017F4F8CA8E37F1CEEB780C7EAF1_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_135D3BA748CBC500EBEBC388C41849AE
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_135D3BA748CBC500EBEBC388C41849AE_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_87B89902469DCF3B16FB8AB2A2654AA2
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_87B89902469DCF3B16FB8AB2A2654AA2_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_69B4BA5E418430F2C7FE9D8A79ECA374
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_69B4BA5E418430F2C7FE9D8A79ECA374_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_SequencePlayer_FCD492934AD4163EF2C35B92DA994824
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_SequencePlayer_FCD492934AD4163EF2C35B92DA994824_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_SequencePlayer_61E545654CEB878EA44AEBBA64D9331C
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_SequencePlayer_61E545654CEB878EA44AEBBA64D9331C_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_C097D9E7450B8720493C7CB4B7925DB8
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_C097D9E7450B8720493C7CB4B7925DB8_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_B3BE0B2142BDC6AC3AF2A99395D58E4D
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_B3BE0B2142BDC6AC3AF2A99395D58E4D_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByInt_BDCC81C04F900830CBFBD4B6F2E5412E
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByInt_BDCC81C04F900830CBFBD4B6F2E5412E_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_382043034170AE61AC99D782A534175B
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_382043034170AE61AC99D782A534175B_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_88F561384CAFD098BC1BE991D470A14D
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_88F561384CAFD098BC1BE991D470A14D_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_66274F1648CA3DD8D4A0E5B0024C6AC1
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_66274F1648CA3DD8D4A0E5B0024C6AC1_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_DB5967544307396AE637E68D502FC777
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_DB5967544307396AE637E68D502FC777_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_3DC2B69049062629FE3E8885871E8FD2
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_3DC2B69049062629FE3E8885871E8FD2_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_062A14AF498110A896D9CAABF4FC4010
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_062A14AF498110A896D9CAABF4FC4010_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_084DD3994581F657FD1BA8843915FCD8
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_084DD3994581F657FD1BA8843915FCD8_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_06A78CFF44766E6C8E60A486B02D647A
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_06A78CFF44766E6C8E60A486B02D647A_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_A67CD96B40354890296D19A17A7A509B
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_A67CD96B40354890296D19A17A7A509B_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_B05EE8624903BE82477E2BB99AC4D3AD
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_B05EE8624903BE82477E2BB99AC4D3AD_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_F4D6E08E4DB748AE6818269D1E43C0C1
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_F4D6E08E4DB748AE6818269D1E43C0C1_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_E648B42B42F2C87F6C94FB8583AC9C98
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_E648B42B42F2C87F6C94FB8583AC9C98_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_78A816314E56236D9E2A05B51FBA4B34
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_78A816314E56236D9E2A05B51FBA4B34_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_EA32C0534D1F5B3B898078BC55B053D9
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_EA32C0534D1F5B3B898078BC55B053D9_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_DBDE4B4F4525EB2D6C463383873AD5A2
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_DBDE4B4F4525EB2D6C463383873AD5A2_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_706A126E4C280304E2A327BA87213DEC
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_706A126E4C280304E2A327BA87213DEC_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_AC373C5D4F3AD2B9FAD7D78A64A99457
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_AC373C5D4F3AD2B9FAD7D78A64A99457_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_E1035AF6431F743AB20E5B93E4D4303C
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_E1035AF6431F743AB20E5B93E4D4303C_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_2F0124D94786B63A9176C8B61A2654CF
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_2F0124D94786B63A9176C8B61A2654CF_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_0C18790A42E8AD7FB86E6BA2EAF0D91D
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_0C18790A42E8AD7FB86E6BA2EAF0D91D_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_B1E5EB8348C2C0723C7191ACDCDF586E
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_B1E5EB8348C2C0723C7191ACDCDF586E_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_31065FF54B265435A6A39DAA7596D442
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_31065FF54B265435A6A39DAA7596D442_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_5CE5ABB74EE9F4C665FBF38E6779F518
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_5CE5ABB74EE9F4C665FBF38E6779F518_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_0DA4D77148106E3B8046BC8DFFE45015
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_0DA4D77148106E3B8046BC8DFFE45015_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_716B3D1E46F0C081CA6DEA823AA0F04E
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_716B3D1E46F0C081CA6DEA823AA0F04E_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_291480D14815ED7CBE81C0B4EDC42F28
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_291480D14815ED7CBE81C0B4EDC42F28_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_C8B3E57F41F24A22B90FD6816C712C9A
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_C8B3E57F41F24A22B90FD6816C712C9A_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_FDFBC8994AC6E32980F28395CA75FD91
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_FDFBC8994AC6E32980F28395CA75FD91_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_BF30E0C844C4CD51CD18758332A14664
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_BF30E0C844C4CD51CD18758332A14664_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_9FABA90B42615D9B70C8CCB5F951B293
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_9FABA90B42615D9B70C8CCB5F951B293_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_012A4BB44804C8A447A7DE94C94AF507
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_012A4BB44804C8A447A7DE94C94AF507_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_5841AA4A4A91F26162C7C49D183010DF
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_5841AA4A4A91F26162C7C49D183010DF_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D41EF7D8496B27C2F57521A8D477E1D9
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D41EF7D8496B27C2F57521A8D477E1D9_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_78B030384B7878FA8DEBC984BDAA9ED4
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_78B030384B7878FA8DEBC984BDAA9ED4_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_A41C2DBA49DD6F56571506869EAF3C96
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_A41C2DBA49DD6F56571506869EAF3C96_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_0ED7C3BD4E4C88FEF4E8A5BDBA1E7DBE
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_0ED7C3BD4E4C88FEF4E8A5BDBA1E7DBE_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_46152A8F48CCAD461D5957AF23C6D569
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_46152A8F48CCAD461D5957AF23C6D569_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_4AA5A91946D68E5FA955B9A77AF3AE91
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_4AA5A91946D68E5FA955B9A77AF3AE91_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_D4C8D10D40EE7086E66315AFA01BEFFB
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_D4C8D10D40EE7086E66315AFA01BEFFB_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_MultiWayBlend_05FC9F6743AA55B99A6AE5BEA0591EBF
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_MultiWayBlend_05FC9F6743AA55B99A6AE5BEA0591EBF_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_6A18D0F74A579D76FF6072B8BDBA8F07
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_6A18D0F74A579D76FF6072B8BDBA8F07_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_42850F9E47919253C9F273894CF41D13
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_42850F9E47919253C9F273894CF41D13_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_FF675A2943519415F690D7BFA18166EB
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_FF675A2943519415F690D7BFA18166EB_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_EF5511124B2E3E5F8F585794FEE844C6
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_EF5511124B2E3E5F8F585794FEE844C6_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_D091FFBC482FBFE495C6C39E3DFC3F0D
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_D091FFBC482FBFE495C6C39E3DFC3F0D_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_62814D0A4B9E7BCE60FD25B4DF8A18DD
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_62814D0A4B9E7BCE60FD25B4DF8A18DD_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_MultiWayBlend_436D92204A571E324C7FF6A6D3BB5750
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_MultiWayBlend_436D92204A571E324C7FF6A6D3BB5750_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_E1A9C1BD4E362F2FF0F02C9038878465
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_E1A9C1BD4E362F2FF0F02C9038878465_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_D4CAA3DE4AA53A7EA21BDC80B6B3CDB0
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_D4CAA3DE4AA53A7EA21BDC80B6B3CDB0_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_1BC0260A4440D752B81DDFA60E82F610
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_1BC0260A4440D752B81DDFA60E82F610_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_71BB0EE34D551295CA7F17B62826BD42
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_71BB0EE34D551295CA7F17B62826BD42_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_9CBD1CE14B60AF1BCA20028236E56E3D
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_9CBD1CE14B60AF1BCA20028236E56E3D_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_41E09A5D4E1DC745974F4DA05EC8543A
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_41E09A5D4E1DC745974F4DA05EC8543A_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_21E60FEB46AE62118FA731B00CE175EB
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_21E60FEB46AE62118FA731B00CE175EB_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_A915626848B4C138ADDEB5999AEA2D72
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_A915626848B4C138ADDEB5999AEA2D72_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_066251304FCC59E97A1FD2B7D2EFB01E
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_066251304FCC59E97A1FD2B7D2EFB01E_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_A7BC9E2642C986A359075D8A6236DE30
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_A7BC9E2642C986A359075D8A6236DE30_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_87F57DC9437363ACBDF7328F4906173B
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_87F57DC9437363ACBDF7328F4906173B_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_2A73306B4EE6C9E52397A896C8F342F5
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_2A73306B4EE6C9E52397A896C8F342F5_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_32596A814B12BB47A1DEB0A2C19B56C0
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_32596A814B12BB47A1DEB0A2C19B56C0_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_5E4B43084A258FAEF3CCCFBFDD26BA65
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_5E4B43084A258FAEF3CCCFBFDD26BA65_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D32DCB214FB4DB2DF769B186DB13E332
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D32DCB214FB4DB2DF769B186DB13E332_Params
{
};

// Function NewGuyABP.NewGuyABP_C.BlueprintUpdateAnimation
struct UNewGuyABP_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_07795FDE4102F258D4418ABC7174A280
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_07795FDE4102F258D4418ABC7174A280_Params
{
};

// Function NewGuyABP.NewGuyABP_C.AnimNotify_IdleLoop
struct UNewGuyABP_C_AnimNotify_IdleLoop_Params
{
};

// Function NewGuyABP.NewGuyABP_C.AnimNotify_InAirStart
struct UNewGuyABP_C_AnimNotify_InAirStart_Params
{
};

// Function NewGuyABP.NewGuyABP_C.AnimNotify_EnterJumpAttackLanding
struct UNewGuyABP_C_AnimNotify_EnterJumpAttackLanding_Params
{
};

// Function NewGuyABP.NewGuyABP_C.AnimNotify_EnterNormalLanding
struct UNewGuyABP_C_AnimNotify_EnterNormalLanding_Params
{
};

// Function NewGuyABP.NewGuyABP_C.AnimNotify_EnterRunFront
struct UNewGuyABP_C_AnimNotify_EnterRunFront_Params
{
};

// Function NewGuyABP.NewGuyABP_C.AnimNotify_LeftAxeSwing
struct UNewGuyABP_C_AnimNotify_LeftAxeSwing_Params
{
};

// Function NewGuyABP.NewGuyABP_C.AnimNotify_EnterAxeWindup
struct UNewGuyABP_C_AnimNotify_EnterAxeWindup_Params
{
};

// Function NewGuyABP.NewGuyABP_C.AnimNotify_EnterAxeSwing
struct UNewGuyABP_C_AnimNotify_EnterAxeSwing_Params
{
};

// Function NewGuyABP.NewGuyABP_C.AnimNotify_EnterGround
struct UNewGuyABP_C_AnimNotify_EnterGround_Params
{
};

// Function NewGuyABP.NewGuyABP_C.AnimNotify_LeftFalling
struct UNewGuyABP_C_AnimNotify_LeftFalling_Params
{
};

// Function NewGuyABP.NewGuyABP_C.AnimNotify_EnterAimRunFront
struct UNewGuyABP_C_AnimNotify_EnterAimRunFront_Params
{
};

// Function NewGuyABP.NewGuyABP_C.AnimNotify_EnterRunBack
struct UNewGuyABP_C_AnimNotify_EnterRunBack_Params
{
};

// Function NewGuyABP.NewGuyABP_C.AnimNotify_EnterAimRunBack
struct UNewGuyABP_C_AnimNotify_EnterAimRunBack_Params
{
};

// Function NewGuyABP.NewGuyABP_C.AnimNotify_EnterAimLoop
struct UNewGuyABP_C_AnimNotify_EnterAimLoop_Params
{
};

// Function NewGuyABP.NewGuyABP_C.AnimNotify_LeaveAimLoop
struct UNewGuyABP_C_AnimNotify_LeaveAimLoop_Params
{
};

// Function NewGuyABP.NewGuyABP_C.AnimNotify_EnterJumpThrust
struct UNewGuyABP_C_AnimNotify_EnterJumpThrust_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_8F96FB0249D5CA688CC7D3B40E2C22D4
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_8F96FB0249D5CA688CC7D3B40E2C22D4_Params
{
};

// Function NewGuyABP.NewGuyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D55E981D4191124BD569F6BF0BDF0091
struct UNewGuyABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D55E981D4191124BD569F6BF0BDF0091_Params
{
};

// Function NewGuyABP.NewGuyABP_C.ExecuteUbergraph_NewGuyABP
struct UNewGuyABP_C_ExecuteUbergraph_NewGuyABP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NewGuyABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass NewGuyABP.NewGuyABP_C
// 0xC83C (0xCCFC - 0x04C0)
class UNewGuyABP_C : public UDarwinCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3396BB8C4EC034BE48A556B6E197C2A5;      // 0x04C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D32DCB214FB4DB2DF769B186DB13E332;// 0x0510(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5E4B43084A258FAEF3CCCFBFDD26BA65;// 0x0590(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_066251304FCC59E97A1FD2B7D2EFB01E;// 0x0610(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_95263FD1492C8A9B27B5E78D134536A6;// 0x0690(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BC62E94A4F01D7655A2F1DA88347E600;// 0x0700(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_594946A849BD3744BE764993BD2EDC31;// 0x0748(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2A31622345AFE8059C4CFCB6BD26D72C;// 0x07B8(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A915626848B4C138ADDEB5999AEA2D72;// 0x0828(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2C27B7744D6BA7F41E221F84D36CD4AA;// 0x08F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6A821597443FE56F8867B7A54BE97855;// 0x0940(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1BC0260A4440D752B81DDFA60E82F610;// 0x09C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EF5511124B2E3E5F8F585794FEE844C6;// 0x0A40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_42850F9E47919253C9F273894CF41D13;// 0x0AC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_78B030384B7878FA8DEBC984BDAA9ED4;// 0x0B40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BF30E0C844C4CD51CD18758332A14664;// 0x0BC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0DA4D77148106E3B8046BC8DFFE45015;// 0x0C40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E1035AF6431F743AB20E5B93E4D4303C;// 0x0CC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F4D6E08E4DB748AE6818269D1E43C0C1;// 0x0D40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_382043034170AE61AC99D782A534175B;// 0x0DC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B3BE0B2142BDC6AC3AF2A99395D58E4D;// 0x0E40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C097D9E7450B8720493C7CB4B7925DB8;// 0x0EC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_135D3BA748CBC500EBEBC388C41849AE;// 0x0F40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CC16AAA7427A79D75A6C0398B40794A1;// 0x0FC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F35B6E314A1F3D9436757E9FC86DA7E3;// 0x1040(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E9E87352405C267D6DABB897B0593A80;// 0x10C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D71C42EA46643442037BF7ACBC90D47B;// 0x1140(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_37D3BA584AAAB507B69B18807D142B26;// 0x11C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_37F86DD54B94B55198B841B30FD96E09;// 0x1240(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AD9DC0D8426714B2FDA2D3BE04DE8B13;// 0x12C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19CD561945B2F4C660862A99D1F909EB;// 0x1340(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7A54BD39458C2C51021C76B0D58C378F;// 0x13C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4CDB76374C8B0FBC8E7309B7D9E92B7F;// 0x1440(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BE7E1C9940D18274D65C1EA76D798F12;// 0x14C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_90B9BF5D48C33FF68BF6978D2D8B6C8F;// 0x1540(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FFE517F844A82624C0A9E29C4AFF6EB4;// 0x15C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FADE4FE34F50D12DD189C5AC88A2AB77;// 0x1640(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2D09BF9D4D980F12CDA1E78A8209E0F6;// 0x16C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2962BEBC412810D3AA6618B3A873DE0A;// 0x1740(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5E016E7B4F8A432C42C45B8EF39EC6BA;// 0x17C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_95F1DAAE435D8016C339D29638BA2F17;// 0x1840(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_030515C941CA83FE36C2CA8BA6B6D1D3;// 0x18C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D27057E440F5AD205B7EF2967B44F19E;// 0x1940(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_681386984D8D48B96BC581A883B66066;// 0x19C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_102F4E93400C9EC2FF12A2A455EE8F1C;// 0x1A40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_241D6B5D4B383D3E717931B51007C8C6;// 0x1AC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_37E4F2C449D32F6E3E9DF58AC8233834;// 0x1B40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A025837842AF9175FBBE75A125F08904;// 0x1BC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_47335C104F895BAF6FB1DA896DBC7D5F;// 0x1C40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8E5001924522C63D6CFB37BDD06E19A1;// 0x1CC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EE52A0A6423D293C2117BDA8170F29C7;// 0x1D40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FDA76CEF4A8EE1B8CF8021857F048488;// 0x1DC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_69F940534DE23E2DE7221488133AF4BD;// 0x1E40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8E0B26DE4A1052237144959C5F1DC39D;// 0x1EC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_778CD0E44F82B9109D600CA580173DD5;// 0x1F40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ACD047F547D8B40884C78995A1815534;// 0x1FC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D55E981D4191124BD569F6BF0BDF0091;// 0x2040(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8F96FB0249D5CA688CC7D3B40E2C22D4;// 0x20C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87B89902469DCF3B16FB8AB2A2654AA2;// 0x2140(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FDDEF4244295E480F0078A8957B6B1E5;// 0x21C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33C099B5435EEEF1B59A49A7FACC6598;// 0x2240(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EC277C794EC1848A4EF195BF70442D48;// 0x22C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BBAA235942829B48D6C564835167FC56;// 0x2340(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_06B49D2D463E264C6A06C2BBDD090E6F;// 0x23C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_07795FDE4102F258D4418ABC7174A280;// 0x2440(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13AB04B14A3999B4C03B0698564E666C;// 0x24C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CC096EBC4C69594FA9F55F9EAAD4DD82;// 0x2540(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C697B84042C951B187ED4A94612E8D87;// 0x25C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_746D197A4392F14A84B6D3B776EE00A9;// 0x2640(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_049867144201F73EBC885286491C1B46;// 0x26C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BED722854D86348D7FEC09962EAEE11C;// 0x2740(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44E2B70C4D205B87135B28AA40A0CF04;// 0x27C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_422C57314C194F36550C50978DC4E4AC;// 0x2840(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_774CCFB5405E5F8F5617EDB6AE779197;// 0x28C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_61C989624C90FF57A639A29508523E61;// 0x2940(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6CF494A845E297F460DECF9423400F4F;// 0x29C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AB1761994CC46300C5F95797CB6D9DD2;// 0x2A40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DD9B8FD84841B8C99D977B9DDC0EFA73;// 0x2AC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C2F729CD44CA4E4245B7899E2A3EFDE3;// 0x2B40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9AE5E907443A616985A60895164FCF48;// 0x2BC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3EC4F4EA46A8DDBD04C37D9EE505664B;// 0x2C40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0807E6784D354D620A2562AC66034ED8;// 0x2CC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_96C33AF3428219E988CD6BACC7AC8C55;// 0x2D40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AF598CA6496F6C5E1A8B2EBB84E79040;// 0x2DC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F18EC19D46C4B12F53E7EAB6CBF94D3E;// 0x2E40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_130D2C074966DCDF6F81E2B45B9E25A5;// 0x2EC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C5085F014AC772FCB211D0AE548D80BF;// 0x2F40(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DF3DD00345E224218DACFEB2AEC4DDB0;// 0x2FC0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EE4449304194B7AA553809AFDEE45DD4;// 0x3030(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_73A769844F6BAF193ACF1E906C0A3B54;// 0x30A0(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_47974BB14B278E10E665B7AE3DD17465;// 0x3110(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D682D02340E762EACFF2D786BFE1934E;// 0x31F0(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_66B4A8634502612ED07FE08D1EA0189A;// 0x3260(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5DBC31904A20649F59238991496C401F;// 0x3340(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9EE730B54D117C2C1B4F408E477B65AD;// 0x33B0(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_44C075AB4454CD4B5E8A9EAE6CA272D2;// 0x3420(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_40309F8F4583645D1ECD9492BF89517D;// 0x3500(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_AD2722FD4DD579A49EC7A9A48EAA5122;// 0x3570(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9B9DB9D14B3A0FC556D65E82E3F0A077;// 0x3650(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_72DFC2174F0CA1EA533210B85081C55B;// 0x36C0(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5CC8B7084EC4B68F340D50AC259C9068;// 0x37A0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3BF9825349A345EF1E384EA890B14324;// 0x3810(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7BB76C3442882532065EFD83AD49F40B;// 0x3880(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F6EA6DEB47222CFE3CFEA28631B4E748;// 0x38F0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9BFECE834498073D6BA2718FDCAA1187;// 0x3960(0x0070)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_9AFC3F17451B1FD311F7ABA2B4192621;// 0x39D0(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1750570D433D994D6D8718A48DFA9BEE;// 0x3AA0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_652BE3A949D2470B55F2B289308B367B;// 0x3AE8(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3AB41B9A4275EA8366B983AC304FFB7F;// 0x3C10(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_88EB3ECC4652373A6EF4A7A551BA9492;// 0x3C58(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0E0EEA0145A46DB2E0C012B7868B0029;// 0x3CC8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FC7FAD9F4AB9E9C23997C0BCC1AF94C0;// 0x3D10(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B49A7BC54E29BB70F482ACAD3FC22875;// 0x3D80(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D7620E354CB30AD2B7E533900FF4ADE5;// 0x3DC8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3671948B406137DC85DBF088A0A8E0C6;// 0x3E38(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_06738D9E4E038819B6F1D6808C7DE9E0;// 0x3E80(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_08F1DD6F4D212B2D776FC68B82318936;// 0x3FA8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_153D23FC487E13A219AEF48EC0B91562;// 0x3FF0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_475AC30D4B6E1F52978210A3DB1AC5B8;// 0x4118(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_CBAA8F06420BFB140F3FED85D291A0A6;// 0x4160(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_758BA8004C919C8A8172FBAD4FB741ED;// 0x4288(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D890316E4C076949091801BE84FDCB20;// 0x42D0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5C6272014EB43BF3A4FE069B065F7CFE;// 0x43F8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0CAFC53247362D72DB80E982FCB834DB;// 0x4440(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C9F851354DCBAD2FC1E36E97A575D686;// 0x4568(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C59465894072D014A1FE09AA0AB6EBA6;// 0x45B0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2FA73BA348AB19C304585FB68394669F;// 0x4620(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_68AF3B35473B27323B1DAD901165C86C;// 0x4668(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EF0AE9724110EF7B19EE23B38DDE2501;// 0x46D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1F0DE19E48C5C321455F349AA1920851;// 0x4720(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CE37BD4040483035779D2189F31D6C0C;// 0x47A0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E298569A4770EAA8FFCC49BC98AA0315;// 0x4810(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7AC6E77C475D70195604EF84D0879AA0;// 0x4858(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_93A4A579416E6B543F5FAFAADC32AC3A;// 0x4980(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FBC77FF1434A849FC704C082C162B86A;// 0x4A50(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_DABD757D46A6769106D6A8B8D42EE5B1;// 0x4B78(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7F207C1A4CBFA072075CF28D5BD2B90A;// 0x4CA0(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_400D6823444BE54134996E83E60E43C2;// 0x4D70(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6A3BB725496DCC7221AEAAB5D4CA99CF;// 0x4E98(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_1B506928427D32084564F29F6875CBB0;// 0x4F68(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_37BB50A9432A26DE3982CABB7703B231;// 0x5090(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_50F6CD8843893FD37EF6D5B31CC6C5FD;// 0x5160(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AE9AF28A4F119D0FC740ECB4216309CB;// 0x51D0(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6117768C473B4FB6F6A01EA8ACC66983;// 0x52A0(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9360573D422FE47373E463839437DED4;// 0x5370(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E7216E6C47C6E6C05F9D969901ED5E4C;// 0x5498(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8FE9ADEF4F01BFAF0636AF9832E48D5F;// 0x54E0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BEFF6CBC43CD56657A4CD397736E6370;// 0x5550(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_CC3BF9734CE8965B96E543A6206D6CC7;// 0x5598(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EFC0E4C243EC2A142825EEBAA5165EB4;// 0x56C0(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D62166D143D5A8D4B6C2249091A7B8F2;// 0x5790(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_65052DA143B270EDBB22578001A3D7E8;// 0x58B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4C24B070441329B995E3D79CD3F4AB8A;// 0x5900(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DEAB7A0246E55A3849086AA46ACCC91E;// 0x5970(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_19A2C5B248684A8E99324991A8E156FC;// 0x59E0(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F6954A1E40EDF79FC71F5FA6B8531670;// 0x5AB0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5D99F7B246D10E22B2CC22BA6630DE61;// 0x5B80(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_09360C9F47316576B27AB88BBC7927A4;// 0x5BF0(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8CA230C24808D65E98FB9F8AB2CFB537;// 0x5CC0(0x0128)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2FFF1FE249CD3B5A4A40D388743EB9A8;// 0x5DE8(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_83C79B3C46CEC3CBCF556F9120BC4039;// 0x5E58(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A7FA5AB243FAA8CE511C58B385583D7D;// 0x5F28(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B420E3BC49632B6B9D466A94B2E3EE8C;// 0x5FF8(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_90F780894E2CB30951B1DE9A267723D2;// 0x6120(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_248DF99346864F4BA5DDA788ADC9656B;// 0x61F0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E3B95D2A40B1D05CA214C395DB6BA272;// 0x6318(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_AAAF46CB4878F10235D6F4A413D7F24B;// 0x6360(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2539E18F487B76B84ACB2DB8020E56C7;// 0x6488(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E2FEBC86402807D864EDB3BC008125A2;// 0x6558(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7CE7EB91443E9CAA824EBABDB799EAF8;// 0x6680(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BE412A8A4F94540BBA27EB974BC1828C;// 0x66C8(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6E5E3F28485234876BC1A091679EC20E;// 0x67F0(0x0128)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4B4DFF5E41087BF5E688C5B02D5D7FF4;// 0x6918(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CE69C2544BB522A45C7830A6279B8B55;// 0x6988(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FC96695148A6B1335EB6DCB8C3C5D916;// 0x6A58(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6D864FB24EE10AE86C87B181881DC546;// 0x6B28(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A5D0AED1441E363715795BB53925703E;// 0x6B70(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_938A2AE841005FAB35EB658362CF77A7;// 0x6C40(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6DD5ABFF4EB8DB61F1E7E2AB68BAD89F;// 0x6CB0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BE7A0169458DD5AD871DF684EE8C32C6;// 0x6D20(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x6D68(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_278C020A44E9AD5505369A8BBECA42E9;// 0x6D70(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1CD0210B4C8D3D997AEF7CA84BF100E0;// 0x6DF0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AE5C5339471889E409966BA083E5BFFF;// 0x6E70(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BB976B4347D9F3F8645410ABA154061D;// 0x6EF0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F665EF7744C199818EDF238FE89FB8CD;// 0x6F70(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1C1146D04CD1257EE74262BE17F096FD;// 0x6FF0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BAC78F004832B5C2FD1814A74879F910;// 0x7070(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8AC5367A42481B92921EAE82D55CEFE7;// 0x70F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6D64458845A4AEF5FC50688E9277AE05;// 0x7170(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D333C89940F367541E1D46A6595BE880;// 0x71F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_193F518F47324F134A6DD6BE5C6D50A2;// 0x7270(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3B6C61A949BE7FA193FB01A02B4B90D5;// 0x72F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_50BE986A498F2153C845C2AF6EF8A433;// 0x7370(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_74509C5B4E5F668F92EF6E93925AE013;// 0x73F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_67E5C1234A185EAF65E7019790DA079B;// 0x7470(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31D164FA4D2C8D3F0689A881C3488415;// 0x74F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_289EB4CD4B93C53FE809078273F32138;// 0x7570(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_78612EFA48E8A21030A54F933FC20DB8;// 0x75F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F701FFC247940F6F4F19BCA9CA43EB88;// 0x7670(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A7799F904EBE3B7DA22326867D9337AA;// 0x76F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C2CC87A4F3D53B2EB7FF5B4085414CF;// 0x7770(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8B02291343FAF3F7955EE0B0F7CB1AF1;// 0x77F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_92926EAB4B93946F56AA91BBC69D6BB4;// 0x7870(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9E2C93DE4E90769F30210AAA36223EBB;// 0x78F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9B373A09413C89CB3432A68B002A8313;// 0x7970(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF1A9F8548B6453399D71DBD65C3FFFC;// 0x79F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D6A2675743B19F6822EB21B24AF07909;// 0x7A70(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_46FD23F249DEB0048BB8BD885A5D78E0;// 0x7AF0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B3EAFCD34A6641F24F5E378D9BA1F40C;// 0x7B70(0x0080)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_ABF4633144DDF7135BFAE79C632318E8;// 0x7BF0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4FDA883A4575DB3CA0B0A8A8DC98777D;// 0x7C38(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7A94570D4EC3F72A133D198AADEBCFA4;// 0x7D60(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_AA3E1CF94FDE29E990886DA7BE6D8CBD;// 0x7DA8(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9A1F043A4DC1AF88C685879546B6CB5A;// 0x7ED0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F09B26A4431FBF2DDEA0FC90EF626D6C;// 0x7F18(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3516C0884169A49AA8549097B93D946C;// 0x8040(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5C729AE14980548720C3A8910E500651;// 0x8088(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_60EE16504B21C54FDE60AA8930B5719A;// 0x81B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E37FC2024A9AA5E4F776FAA478DF77C0;// 0x81F8(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_111E14D3491BD4771E7B36B97AD38AF8;// 0x8268(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27234EF04C2489DACDC9A1AADF30BA1C;// 0x8338(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_377AC9A640A47C85089DD59233C8FDAF;// 0x83A8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_02ED9244477BDD72A45EFBAC6EC1DEAD;// 0x8478(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_43A1563B424A8F0B7CBF4A820E9E1B3B;// 0x84E8(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E810BE6448DDA45022D3B9971B52D4F9;// 0x8558(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_41DFD5034C6F6C90F529BC88A149217C;// 0x8628(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E0D5671249E6AE8CC8197E8A58ACCCA9;// 0x86F8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6D5764F74BF1E79DE14B3AAB622C3EA7;// 0x87C8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8893DE304C6DBC73DD70ABB0610C80C5;// 0x8838(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_39367BEB49E62BC841907F8B7856AE80;// 0x88A8(0x0048)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_9CEDCD0247D96CEEC2970DA5AC06669C;// 0x88F0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7C39C98F47C04757EA01DCBE3A2A7139;// 0x89C0(0x0070)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3F2895A94BE4BB2C63C2FBB7E1B1B16F;// 0x8A30(0x0128)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_611E9AB348B0F61A59825CB1B0DB02A3;// 0x8B58(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CCF033274B5FBC0F22FB00B01D102106;// 0x8BC8(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4A6A13A1495EF344E03E58BE9B3AAA3F;// 0x8C38(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A37FA459492D82C532699EAD95C0EF5A;// 0x8D08(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8B9256F84C21259C1FB9B7BB46CB80D2;// 0x8D50(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_61795A2A4283BA485C2C77B5DFA970C5;// 0x8E78(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D26A93BA4AA6B79FC1ABDDA6D204CD6E;// 0x8EC0(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_439EFDB142CA9866FA778DB5816222DC;// 0x8FE8(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8F18017F4F8CA8E37F1CEEB780C7EAF1;// 0x9110(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D95CC6EC466F0D675F4DE288408B0B6B;// 0x91E0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6E0B078D466FC2F3E463C78CFBEC160A;// 0x9228(0x00D8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3F40B49842AB7F702FBEE5B4C32ECD0F;// 0x9300(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F02725B041296C51B64AC1B993B2E51C;// 0x9348(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C834E6F74C2DA9FEC0D8AEB1DD2851A1;// 0x93B8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_69B4BA5E418430F2C7FE9D8A79ECA374;// 0x9400(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FCD492934AD4163EF2C35B92DA994824;// 0x94D0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_61E545654CEB878EA44AEBBA64D9331C;// 0x9540(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_94E416B9439B52E38D1BCD85954E2DF3;// 0x95B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C3A8C8184BAF79F2C803F1A4DC435949;// 0x95F8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B30C8B9A40504CABD79C83ACFA05362C;// 0x9668(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6908620F4881083B9F04479D00136593;// 0x96B0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D20BC8AB48C1B522ED374E8CA8F94FF7;// 0x9720(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A2FA4ECB499AA246BB72BC9FBDEFF000;// 0x9768(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_65C532B140B4B94B0EDF22B7F2082EB2;// 0x97D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E7CF879145DFAB85E00B5E8653B38B13;// 0x9820(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30B0D0844306A756676E8893F27ECDA6;// 0x9890(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_61EB945F46013355001C77B2C1FB0100;// 0x9900(0x0070)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_BDCC81C04F900830CBFBD4B6F2E5412E;// 0x9970(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C3F545AB470F4233ED1B3D8F05AC96C3;// 0x9A40(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7D25FB0D47A8A69A41D0498A56668FA7;// 0x9AB0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_74B767C04EDAE5BDC254DEA6AB723A8A;// 0x9B20(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6C64351C446953CD74E47C8FA3F172AF;// 0x9B90(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AE3EF5CD4AC78F821891918056040F11;// 0x9BD8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_669E243441DA080EC70E4888ADF11B9B;// 0x9C48(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CD7C3D39420F4E31F3813B8C42D2DD98;// 0x9C90(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_483FFF77483C1ABF5378159A41913342;// 0x9D00(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_88F561384CAFD098BC1BE991D470A14D;// 0x9D48(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_66274F1648CA3DD8D4A0E5B0024C6AC1;// 0x9E18(0x0128)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DB5967544307396AE637E68D502FC777;// 0x9F40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3DC2B69049062629FE3E8885871E8FD2;// 0x9FC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_062A14AF498110A896D9CAABF4FC4010;// 0xA040(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_084DD3994581F657FD1BA8843915FCD8;// 0xA0C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_06A78CFF44766E6C8E60A486B02D647A;// 0xA140(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A67CD96B40354890296D19A17A7A509B;// 0xA1C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B05EE8624903BE82477E2BB99AC4D3AD;// 0xA240(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E648B42B42F2C87F6C94FB8583AC9C98;// 0xA2C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_78A816314E56236D9E2A05B51FBA4B34;// 0xA340(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EA32C0534D1F5B3B898078BC55B053D9;// 0xA3C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DBDE4B4F4525EB2D6C463383873AD5A2;// 0xA440(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_706A126E4C280304E2A327BA87213DEC;// 0xA4C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AC373C5D4F3AD2B9FAD7D78A64A99457;// 0xA540(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2F0124D94786B63A9176C8B61A2654CF;// 0xA5C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0C18790A42E8AD7FB86E6BA2EAF0D91D;// 0xA640(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B1E5EB8348C2C0723C7191ACDCDF586E;// 0xA6C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31065FF54B265435A6A39DAA7596D442;// 0xA740(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5CE5ABB74EE9F4C665FBF38E6779F518;// 0xA7C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_716B3D1E46F0C081CA6DEA823AA0F04E;// 0xA840(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_291480D14815ED7CBE81C0B4EDC42F28;// 0xA8C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C8B3E57F41F24A22B90FD6816C712C9A;// 0xA940(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FDFBC8994AC6E32980F28395CA75FD91;// 0xA9C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9FABA90B42615D9B70C8CCB5F951B293;// 0xAA40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_012A4BB44804C8A447A7DE94C94AF507;// 0xAAC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5841AA4A4A91F26162C7C49D183010DF;// 0xAB40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D41EF7D8496B27C2F57521A8D477E1D9;// 0xABC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A41C2DBA49DD6F56571506869EAF3C96;// 0xAC40(0x0080)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D9513FD94520D8A89D6ED291BE73AB4A;// 0xACC0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0ED7C3BD4E4C88FEF4E8A5BDBA1E7DBE;// 0xAD08(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_62A9FEEA459316EA5B814D8945E3C8D1;// 0xAE30(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_46152A8F48CCAD461D5957AF23C6D569;// 0xAE78(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0237AF604E0970A41C4648AF76A330DA;// 0xAFA0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4AA5A91946D68E5FA955B9A77AF3AE91;// 0xAFE8(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D4C8D10D40EE7086E66315AFA01BEFFB;// 0xB110(0x0128)
	struct FAnimNode_MultiWayBlend                     AnimGraphNode_MultiWayBlend_05FC9F6743AA55B99A6AE5BEA0591EBF;// 0xB238(0x0070)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6A18D0F74A579D76FF6072B8BDBA8F07;// 0xB2A8(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8E0CC8CB4A6B7B0D3D9AAAB7A1BB67E5;// 0xB3D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_38D2626644FDD945D2FCFB8A321771D0;// 0xB418(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F0D2B85448E30D07F6FB3FA270AB4845;// 0xB488(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_98D15BD04669BF07B1FB8991B306E6CB;// 0xB4D0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FB7D11B84E578409D8B948967626BB42;// 0xB540(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FF675A2943519415F690D7BFA18166EB;// 0xB588(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2FFD6E0B405D11C2EA0B1EB03C6EB5AF;// 0xB6B0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D091FFBC482FBFE495C6C39E3DFC3F0D;// 0xB6F8(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_62814D0A4B9E7BCE60FD25B4DF8A18DD;// 0xB820(0x0128)
	struct FAnimNode_MultiWayBlend                     AnimGraphNode_MultiWayBlend_436D92204A571E324C7FF6A6D3BB5750;// 0xB948(0x0070)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E1A9C1BD4E362F2FF0F02C9038878465;// 0xB9B8(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D4CAA3DE4AA53A7EA21BDC80B6B3CDB0;// 0xBAE0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_33BC689F428E1E80793FE587805D7AF7;// 0xBC08(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_71BB0EE34D551295CA7F17B62826BD42;// 0xBC50(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6794E9594E83C55AD0D3D395AB9F2F5F;// 0xBD78(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EA07832A4DCDCFD443DE4F8776A1360C;// 0xBDC0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_308F8F484D912F6BE48A35A007A5ABBB;// 0xBE30(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9CBD1CE14B60AF1BCA20028236E56E3D;// 0xBF00(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_41E09A5D4E1DC745974F4DA05EC8543A;// 0xC028(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_21E60FEB46AE62118FA731B00CE175EB;// 0xC150(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5891C2E94CFDD92B7B71F3A54F065AF5;// 0xC220(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4785A17044F16B601B8967A79FBF8A9F;// 0xC268(0x00D8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_740C80B44A0577BD9F0E3D88C7BD19DA;// 0xC340(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_17EC8C1248447548E4E407B39C151997;// 0xC388(0x00D8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D205F73F428F8167F92EDFA1E0637CE8;// 0xC460(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9482724A42552B839F10D98568FB869E;// 0xC4A8(0x00D8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7B45A4884F0ED608BDD3878881803C33;// 0xC580(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A7BC9E2642C986A359075D8A6236DE30;// 0xC660(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_836B6E764DFF8774A1A1FAA0A253DF56;// 0xC730(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_069E329145BC2982DD507A96893F1271;// 0xC7D8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4D93890040389CDC47278CA09F364659;// 0xC828(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_87F57DC9437363ACBDF7328F4906173B;// 0xC878(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2A73306B4EE6C9E52397A896C8F342F5;// 0xC9A0(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_32596A814B12BB47A1DEB0A2C19B56C0;// 0xCAC8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0BC1103345DB750B22D3B490607C6382;// 0xCB98(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1F83D24A4F8DC336F3E6DBB9B30D672B;// 0xCC68(0x0070)
	float                                              LeftRightBlendBuffer;                                     // 0xCCD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FidgetStrength;                                           // 0xCCDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WantedFidgetStrength;                                     // 0xCCE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldBeInAir;                                            // 0xCCE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               shouldBypassIdle;                                         // 0xCCE5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0xCCE6(0x0002) MISSED OFFSET
	float                                              AirZBlendBuffer;                                          // 0xCCE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FromAxeSwing;                                             // 0xCCEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldBypassJumpThrust;                                   // 0xCCED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInAimLoop;                                              // 0xCCEE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               JumpLandHappenedInAimLoop;                                // 0xCCEF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpImpulseDir;                                           // 0xCCF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FromJumpImpulse;                                          // 0xCCF4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0xCCF5(0x0003) MISSED OFFSET
	int                                                WinnerAnimationIndex;                                     // 0xCCF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass NewGuyABP.NewGuyABP_C");
		return ptr;
	}


	void MakeLeftRightBinary(float InLeftRight, float* OutLeftRight);
	void SetShouldBypassIdle(bool shouldBypassIdle, bool* Out);
	void ShouldAxeInteruptGotoAir(bool* ShouldGotoAir);
	void Should180L_tr_idle(bool* should180L);
	void Should180R_tr_idle(bool* Should180R);
	void SetShouldBeInAir(bool ShouldBeInAir, bool* Out);
	void PrintFloat(float In, bool* Out);
	void IsVelocityZero(bool* ZeroVel);
	void ShouldGotoGroundFromLanding(bool* GotoGround);
	void IsGoingBackward(bool* GoingBackward);
	void should180L(bool* should180L);
	void Should180R(bool* Should180R);
	void ControlIsCenter(bool* GoingNowhere);
	void IsGoingForward(bool* GoingForward);
	void SetLeftRightBlendBuffer(float InTRR, bool* OutTrue);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_BBAA235942829B48D6C564835167FC56();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_06B49D2D463E264C6A06C2BBDD090E6F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_EE52A0A6423D293C2117BDA8170F29C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_EC277C794EC1848A4EF195BF70442D48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_07795FDE4102F258D4418ABC7174A280();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_13AB04B14A3999B4C03B0698564E666C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_CC096EBC4C69594FA9F55F9EAAD4DD82();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_C697B84042C951B187ED4A94612E8D87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_8E5001924522C63D6CFB37BDD06E19A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_746D197A4392F14A84B6D3B776EE00A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_049867144201F73EBC885286491C1B46();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_BED722854D86348D7FEC09962EAEE11C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_47335C104F895BAF6FB1DA896DBC7D5F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_44E2B70C4D205B87135B28AA40A0CF04();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_422C57314C194F36550C50978DC4E4AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_774CCFB5405E5F8F5617EDB6AE779197();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_61C989624C90FF57A639A29508523E61();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_A025837842AF9175FBBE75A125F08904();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_6CF494A845E297F460DECF9423400F4F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_AB1761994CC46300C5F95797CB6D9DD2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_DD9B8FD84841B8C99D977B9DDC0EFA73();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_C2F729CD44CA4E4245B7899E2A3EFDE3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_37E4F2C449D32F6E3E9DF58AC8233834();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_9AE5E907443A616985A60895164FCF48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_3EC4F4EA46A8DDBD04C37D9EE505664B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_0807E6784D354D620A2562AC66034ED8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_241D6B5D4B383D3E717931B51007C8C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_96C33AF3428219E988CD6BACC7AC8C55();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_AF598CA6496F6C5E1A8B2EBB84E79040();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_F18EC19D46C4B12F53E7EAB6CBF94D3E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_102F4E93400C9EC2FF12A2A455EE8F1C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_130D2C074966DCDF6F81E2B45B9E25A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_C5085F014AC772FCB211D0AE548D80BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByInt_9AFC3F17451B1FD311F7ABA2B4192621();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_681386984D8D48B96BC581A883B66066();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_652BE3A949D2470B55F2B289308B367B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D27057E440F5AD205B7EF2967B44F19E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_06738D9E4E038819B6F1D6808C7DE9E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_030515C941CA83FE36C2CA8BA6B6D1D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_153D23FC487E13A219AEF48EC0B91562();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_95F1DAAE435D8016C339D29638BA2F17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_CBAA8F06420BFB140F3FED85D291A0A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_D890316E4C076949091801BE84FDCB20();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_5E016E7B4F8A432C42C45B8EF39EC6BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_0CAFC53247362D72DB80E982FCB834DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_7AC6E77C475D70195604EF84D0879AA0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_93A4A579416E6B543F5FAFAADC32AC3A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_FBC77FF1434A849FC704C082C162B86A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_DABD757D46A6769106D6A8B8D42EE5B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_7F207C1A4CBFA072075CF28D5BD2B90A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_400D6823444BE54134996E83E60E43C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_6A3BB725496DCC7221AEAAB5D4CA99CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_1B506928427D32084564F29F6875CBB0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_37BB50A9432A26DE3982CABB7703B231();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_AE9AF28A4F119D0FC740ECB4216309CB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_6117768C473B4FB6F6A01EA8ACC66983();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_9360573D422FE47373E463839437DED4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_2962BEBC412810D3AA6618B3A873DE0A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_33C099B5435EEEF1B59A49A7FACC6598();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_CC3BF9734CE8965B96E543A6206D6CC7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_EFC0E4C243EC2A142825EEBAA5165EB4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_D62166D143D5A8D4B6C2249091A7B8F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_2D09BF9D4D980F12CDA1E78A8209E0F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_19A2C5B248684A8E99324991A8E156FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_F6954A1E40EDF79FC71F5FA6B8531670();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_09360C9F47316576B27AB88BBC7927A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_8CA230C24808D65E98FB9F8AB2CFB537();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_83C79B3C46CEC3CBCF556F9120BC4039();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_A7FA5AB243FAA8CE511C58B385583D7D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_B420E3BC49632B6B9D466A94B2E3EE8C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_90F780894E2CB30951B1DE9A267723D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_248DF99346864F4BA5DDA788ADC9656B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_FADE4FE34F50D12DD189C5AC88A2AB77();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_FDDEF4244295E480F0078A8957B6B1E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_87B89902469DCF3B16FB8AB2A2654AA2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_8F96FB0249D5CA688CC7D3B40E2C22D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_FFE517F844A82624C0A9E29C4AFF6EB4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_90B9BF5D48C33FF68BF6978D2D8B6C8F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_AAAF46CB4878F10235D6F4A413D7F24B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_2539E18F487B76B84ACB2DB8020E56C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_E2FEBC86402807D864EDB3BC008125A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_BE7E1C9940D18274D65C1EA76D798F12();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_BE412A8A4F94540BBA27EB974BC1828C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_6E5E3F28485234876BC1A091679EC20E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_SequencePlayer_4B4DFF5E41087BF5E688C5B02D5D7FF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_CE69C2544BB522A45C7830A6279B8B55();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_FC96695148A6B1335EB6DCB8C3C5D916();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_4CDB76374C8B0FBC8E7309B7D9E92B7F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_7A54BD39458C2C51021C76B0D58C378F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_A5D0AED1441E363715795BB53925703E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_19CD561945B2F4C660862A99D1F909EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_278C020A44E9AD5505369A8BBECA42E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_AD9DC0D8426714B2FDA2D3BE04DE8B13();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_1CD0210B4C8D3D997AEF7CA84BF100E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_AE5C5339471889E409966BA083E5BFFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_BB976B4347D9F3F8645410ABA154061D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_F665EF7744C199818EDF238FE89FB8CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D55E981D4191124BD569F6BF0BDF0091();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_1C1146D04CD1257EE74262BE17F096FD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_37F86DD54B94B55198B841B30FD96E09();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_BAC78F004832B5C2FD1814A74879F910();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_8AC5367A42481B92921EAE82D55CEFE7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_6D64458845A4AEF5FC50688E9277AE05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D333C89940F367541E1D46A6595BE880();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_37D3BA584AAAB507B69B18807D142B26();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_193F518F47324F134A6DD6BE5C6D50A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_3B6C61A949BE7FA193FB01A02B4B90D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_50BE986A498F2153C845C2AF6EF8A433();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_74509C5B4E5F668F92EF6E93925AE013();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_67E5C1234A185EAF65E7019790DA079B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D71C42EA46643442037BF7ACBC90D47B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_31D164FA4D2C8D3F0689A881C3488415();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_289EB4CD4B93C53FE809078273F32138();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_78612EFA48E8A21030A54F933FC20DB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_E9E87352405C267D6DABB897B0593A80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_F701FFC247940F6F4F19BCA9CA43EB88();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_A7799F904EBE3B7DA22326867D9337AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_7C2CC87A4F3D53B2EB7FF5B4085414CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_8B02291343FAF3F7955EE0B0F7CB1AF1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_F35B6E314A1F3D9436757E9FC86DA7E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_92926EAB4B93946F56AA91BBC69D6BB4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_9E2C93DE4E90769F30210AAA36223EBB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_9B373A09413C89CB3432A68B002A8313();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_FF1A9F8548B6453399D71DBD65C3FFFC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D6A2675743B19F6822EB21B24AF07909();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_46FD23F249DEB0048BB8BD885A5D78E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_CC16AAA7427A79D75A6C0398B40794A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_B3EAFCD34A6641F24F5E378D9BA1F40C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_4FDA883A4575DB3CA0B0A8A8DC98777D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_AA3E1CF94FDE29E990886DA7BE6D8CBD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_F09B26A4431FBF2DDEA0FC90EF626D6C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_135D3BA748CBC500EBEBC388C41849AE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_5C729AE14980548720C3A8910E500651();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_111E14D3491BD4771E7B36B97AD38AF8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_377AC9A640A47C85089DD59233C8FDAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_E810BE6448DDA45022D3B9971B52D4F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_41DFD5034C6F6C90F529BC88A149217C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_E0D5671249E6AE8CC8197E8A58ACCCA9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_C097D9E7450B8720493C7CB4B7925DB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByInt_9CEDCD0247D96CEEC2970DA5AC06669C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_3F2895A94BE4BB2C63C2FBB7E1B1B16F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_4A6A13A1495EF344E03E58BE9B3AAA3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_B3BE0B2142BDC6AC3AF2A99395D58E4D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_ACD047F547D8B40884C78995A1815534();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_382043034170AE61AC99D782A534175B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_69F940534DE23E2DE7221488133AF4BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_8B9256F84C21259C1FB9B7BB46CB80D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_D26A93BA4AA6B79FC1ABDDA6D204CD6E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_439EFDB142CA9866FA778DB5816222DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_8F18017F4F8CA8E37F1CEEB780C7EAF1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_778CD0E44F82B9109D600CA580173DD5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_F4D6E08E4DB748AE6818269D1E43C0C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_69B4BA5E418430F2C7FE9D8A79ECA374();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_SequencePlayer_FCD492934AD4163EF2C35B92DA994824();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_SequencePlayer_61E545654CEB878EA44AEBBA64D9331C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_E1035AF6431F743AB20E5B93E4D4303C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_0DA4D77148106E3B8046BC8DFFE45015();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByInt_BDCC81C04F900830CBFBD4B6F2E5412E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_BF30E0C844C4CD51CD18758332A14664();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_88F561384CAFD098BC1BE991D470A14D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_66274F1648CA3DD8D4A0E5B0024C6AC1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_DB5967544307396AE637E68D502FC777();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_3DC2B69049062629FE3E8885871E8FD2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_062A14AF498110A896D9CAABF4FC4010();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_084DD3994581F657FD1BA8843915FCD8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_78B030384B7878FA8DEBC984BDAA9ED4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_06A78CFF44766E6C8E60A486B02D647A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_A67CD96B40354890296D19A17A7A509B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_B05EE8624903BE82477E2BB99AC4D3AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_E648B42B42F2C87F6C94FB8583AC9C98();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_78A816314E56236D9E2A05B51FBA4B34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_EA32C0534D1F5B3B898078BC55B053D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_DBDE4B4F4525EB2D6C463383873AD5A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_706A126E4C280304E2A327BA87213DEC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_AC373C5D4F3AD2B9FAD7D78A64A99457();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_2F0124D94786B63A9176C8B61A2654CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_0C18790A42E8AD7FB86E6BA2EAF0D91D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_42850F9E47919253C9F273894CF41D13();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_B1E5EB8348C2C0723C7191ACDCDF586E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_31065FF54B265435A6A39DAA7596D442();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_5CE5ABB74EE9F4C665FBF38E6779F518();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_716B3D1E46F0C081CA6DEA823AA0F04E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_EF5511124B2E3E5F8F585794FEE844C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_291480D14815ED7CBE81C0B4EDC42F28();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_C8B3E57F41F24A22B90FD6816C712C9A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_FDFBC8994AC6E32980F28395CA75FD91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_9FABA90B42615D9B70C8CCB5F951B293();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_012A4BB44804C8A447A7DE94C94AF507();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_5841AA4A4A91F26162C7C49D183010DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_1BC0260A4440D752B81DDFA60E82F610();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D41EF7D8496B27C2F57521A8D477E1D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_A41C2DBA49DD6F56571506869EAF3C96();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_0ED7C3BD4E4C88FEF4E8A5BDBA1E7DBE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_46152A8F48CCAD461D5957AF23C6D569();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_4AA5A91946D68E5FA955B9A77AF3AE91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_D4C8D10D40EE7086E66315AFA01BEFFB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_MultiWayBlend_05FC9F6743AA55B99A6AE5BEA0591EBF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_6A18D0F74A579D76FF6072B8BDBA8F07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_FF675A2943519415F690D7BFA18166EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_D091FFBC482FBFE495C6C39E3DFC3F0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_62814D0A4B9E7BCE60FD25B4DF8A18DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_MultiWayBlend_436D92204A571E324C7FF6A6D3BB5750();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_E1A9C1BD4E362F2FF0F02C9038878465();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_D4CAA3DE4AA53A7EA21BDC80B6B3CDB0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_6A821597443FE56F8867B7A54BE97855();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_71BB0EE34D551295CA7F17B62826BD42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_308F8F484D912F6BE48A35A007A5ABBB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_9CBD1CE14B60AF1BCA20028236E56E3D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_41E09A5D4E1DC745974F4DA05EC8543A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_21E60FEB46AE62118FA731B00CE175EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_A915626848B4C138ADDEB5999AEA2D72();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_066251304FCC59E97A1FD2B7D2EFB01E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_A7BC9E2642C986A359075D8A6236DE30();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_87F57DC9437363ACBDF7328F4906173B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendSpacePlayer_2A73306B4EE6C9E52397A896C8F342F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_32596A814B12BB47A1DEB0A2C19B56C0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_BlendListByBool_0BC1103345DB750B22D3B490607C6382();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_5E4B43084A258FAEF3CCCFBFDD26BA65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_D32DCB214FB4DB2DF769B186DB13E332();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_FDA76CEF4A8EE1B8CF8021857F048488();
	void AnimNotify_IdleLoop();
	void AnimNotify_InAirStart();
	void AnimNotify_EnterJumpAttackLanding();
	void AnimNotify_EnterNormalLanding();
	void AnimNotify_EnterRunFront();
	void AnimNotify_LeftAxeSwing();
	void AnimNotify_EnterAxeWindup();
	void AnimNotify_EnterAxeSwing();
	void AnimNotify_EnterGround();
	void AnimNotify_LeftFalling();
	void AnimNotify_EnterAimRunFront();
	void AnimNotify_EnterRunBack();
	void AnimNotify_EnterAimRunBack();
	void AnimNotify_EnterAimLoop();
	void AnimNotify_LeaveAimLoop();
	void AnimNotify_EnterJumpThrust();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewGuyABP_AnimGraphNode_TransitionResult_8E0B26DE4A1052237144959C5F1DC39D();
	void AnimNotify_EnteredWinner();
	void AnimNotify_ForceFeedback_Str3();
	void AnimNotify_ForceFeedback_Str5();
	void AnimNotify_EnteredEmoteM();
	void AnimNotify_LeftEmoteM();
	void AnimNotify_ForceFeedback_Str2();
	void ExecuteUbergraph_NewGuyABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

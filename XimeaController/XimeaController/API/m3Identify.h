

#pragma once
// This source file contains camera model enumerators generated by m3apil_device_enum.xslt

#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{
  MODEL_ID_UNKNOWN			=0,
  	MODEL_ID_MR274CU_BH          =1,
	MODEL_ID_MR16000MU           =2,
	MODEL_ID_MR282CC_BH          =3,
	MODEL_ID_MR274MU_BH          =4,
	MODEL_ID_MR456CU_BH          =5,
	MODEL_ID_MR252CC_BH          =6,
	MODEL_ID_MR4021MU_BH         =7,
	MODEL_ID_MR4022MU_BH         =116,
	MODEL_ID_MR655CU_BH          =9,
	MODEL_ID_MR11002M            =10,
	MODEL_ID_MR4021CU_BH         =11,
	MODEL_ID_MR655MU_BH          =12,
	MODEL_ID_MR282CU_BH          =13,
	MODEL_ID_MR252CU_BH          =14,
	MODEL_ID_MR285MU_BH          =15,
	MODEL_ID_MR285CU_BH          =16,
	MODEL_ID_MR285MC_BH          =17,
	MODEL_ID_MR285CC_BH          =18,
	MODEL_ID_MH160MC_KK_FA       =112,
	MODEL_ID_MU9PC_BH            =20,
	MODEL_ID_MR11002C            =21,
	MODEL_ID_MU9PM_MH            =22,
	MODEL_ID_MU9PC_MH            =23,
	MODEL_ID_MU9PM_BH            =24,
	MODEL_ID_CURRERA_RS04        =25,
	MODEL_ID_CURRERA_RL04        =26,
	MODEL_ID_CURRERA_RS04C       =27,
	MODEL_ID_CURRERA_RL04C       =28,
	MODEL_ID_CURRERA_RS13        =29,
	MODEL_ID_CURRERA_RL13        =30,
	MODEL_ID_CURRERA_RS13C       =31,
	MODEL_ID_CURRERA_RL13C       =32,
	MODEL_ID_CURRERA_RS50        =33,
	MODEL_ID_CURRERA_RL50        =34,
	MODEL_ID_CURRERA_RS50C       =35,
	MODEL_ID_MQ013CG_E2          =49,
	MODEL_ID_MQ013MG_E2          =50,
	MODEL_ID_MQ003CG_CM          =51,
	MODEL_ID_MQ003MG_CM          =52,
	MODEL_ID_MQ022CG_CM          =53,
	MODEL_ID_MQ022MG_CM          =54,
	MODEL_ID_MQ042CG_CM          =55,
	MODEL_ID_MQ042MG_CM          =56,
	MODEL_ID_MM282CU_BH          =158,
	MODEL_ID_MQ022MG_CM_SR2      =58,
	MODEL_ID_MQ042CG_CM_TG       =59,
	MODEL_ID_MQ042MG_CM_TG       =60,
	MODEL_ID_MQ_USB3LINK         =61,
	MODEL_ID_MU9PC_SLC5          =62,
	MODEL_ID_MQ022CG_CM_TS       =66,
	MODEL_ID_MQ022MG_CM_TS       =67,
	MODEL_ID_MQ042CG_CM_TS       =68,
	MODEL_ID_MQ042MG_CM_TS       =69,
	MODEL_ID_MQ013CG_ONV         =70,
	MODEL_ID_MQ013MG_ONV         =71,
	MODEL_ID_MQ013RG_E2          =72,
	MODEL_ID_MQ042RG_CM          =73,
	MODEL_ID_CURRERA_RL50C       =74,
	MODEL_ID_MR11002XC_ICW       =75,
	MODEL_ID_MQ020CG_E2          =76,
	MODEL_ID_MQ020MG_E2          =77,
	MODEL_ID_MQ022RG_CM          =78,
	MODEL_ID_MR285CC_DP          =79,
	MODEL_ID_MR285MC_DP          =80,
	MODEL_ID_MR252CU_BRD         =81,
	MODEL_ID_MH110MC_KK_FA       =82,
	MODEL_ID_MR282CU_BRD         =83,
	MODEL_ID_MR282CC_DP          =84,
	MODEL_ID_MR285MU_BH_IRE      =85,
	MODEL_ID_MR285MC_DP_IRE      =86,
	MODEL_ID_MH110XC_KK_FA       =87,
	MODEL_ID_MH160XC_KK_FA       =88,
	MODEL_ID_MR252CC_DP          =90,
	MODEL_ID_MR285MC_BH_IRE      =91,
	MODEL_ID_MR456CC_BH          =92,
	MODEL_ID_MR282CU_DP          =93,
	MODEL_ID_MQ022HG_IM_ST32_NIR =135,
	MODEL_ID_MR282CC_BRD         =96,
	MODEL_ID_MR252CC_BRD         =100,
	MODEL_ID_MQ022HG_IM_SM4X4_VIS=136,
	MODEL_ID_MR252CU_DP          =101,
	MODEL_ID_MR285MU_BRD         =102,
	MODEL_ID_MR285CU_BRD         =103,
	MODEL_ID_MR285MC_BRD         =104,
	MODEL_ID_MR285CC_BRD         =105,
	MODEL_ID_MR285CC_DP_IRE      =106,
	MODEL_ID_MR285CC_BH_IRE      =107,
	MODEL_ID_MR285CU_BH_IRE      =108,
	MODEL_ID_MX11002             =109,
	MODEL_ID_MH110CC_KK_FA       =110,
	MODEL_ID_MR16000CU           =111,
	MODEL_ID_MH160CC_KK_FA       =113,
	MODEL_ID_MR4022MC_VELETA     =114,
	MODEL_ID_MR4021MC_VELETA     =115,
	MODEL_ID_MU9JC_BH            =117,
	MODEL_ID_MU9JM_BH            =118,
	MODEL_ID_MQ022HG_IM_LS100_NIR=134,
	MODEL_ID_CB120RG_CM_X8G3     =174,
	MODEL_ID_MD091CC_SY          =122,
	MODEL_ID_CB120MG_CM_X8G3     =173,
	MODEL_ID_MD028CU_SY          =126,
	MODEL_ID_MD061CU_SY          =127,
	MODEL_ID_MD091CU_SY          =128,
	MODEL_ID_MD028MU_SY          =129,
	MODEL_ID_MD061MU_SY          =130,
	MODEL_ID_MD091MU_SY          =131,
	MODEL_ID_CB200CG_CM          =132,
	MODEL_ID_CB200MG_CM          =133,
	MODEL_ID_CB120CG_CM_X8G3     =172,
	MODEL_ID_CB120RG_CM          =171,
	MODEL_ID_MD120CU_SY          =139,
	MODEL_ID_MD120MU_SY          =140,
	MODEL_ID_MQ022HG_IM_UN       =141,
	MODEL_ID_CAL_Simulator       =142,
	MODEL_ID_MT031CG_SY          =164,
	MODEL_ID_MQ022HG_IM_LS150_VISNIR=143,
	MODEL_ID_MQ022HG_IM_SM5X5_NIR=144,
	MODEL_ID_MQ022HG_IM_SM4X4_NIR=145,
	MODEL_ID_MQ022MG_CM_BARE_BRD =146,
	MODEL_ID_MQ042MG_CM_BARE_BRD =147,
	MODEL_ID_MT023CG_SY          =148,
	MODEL_ID_MT023MG_SY          =149,
	MODEL_ID_MT200CG_CM          =150,
	MODEL_ID_MT200MG_CM          =151,
	MODEL_ID_CB120CG_CM          =152,
	MODEL_ID_CB120MG_CM          =153,
	MODEL_ID_MT003CG_LX          =154,
	MODEL_ID_MT003MG_LX          =155,
	MODEL_ID_MQ013CG_ON          =156,
	MODEL_ID_MQ013MG_ON          =157,
	MODEL_ID_MT050CG_SY          =159,
	MODEL_ID_MT050MG_SY          =160,
	MODEL_ID_MT120CG_CM          =161,
	MODEL_ID_MT031MG_SY          =165,
	MODEL_ID_MT120MG_CM          =163,
	MODEL_ID_MJ042MC_TS          =166,
	MODEL_ID_MH110XC_KK_TP2_1    =168,
	MODEL_ID_MC023CG_SY_UB       =169,
	MODEL_ID_MC023MG_SY_UB       =170,
	MODEL_ID_MX124CG_SY          =175,
	MODEL_ID_MX124MG_SY          =176,
	MODEL_ID_MX089CG_SY          =177,
	MODEL_ID_MX089MG_SY          =178,
	MODEL_ID_MC031CG_SY_UB       =179,
	MODEL_ID_MC031MG_SY_UB       =180,

}E_MODEL;

#ifdef __cplusplus
}
#endif


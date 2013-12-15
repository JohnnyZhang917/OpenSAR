
#ifndef CANTP_CFG_H_
#define CANTP_CFG_H_

#include "CanTp_Types.h"

#define CANTP_MAIN_FUNCTION_PERIOD_TIME_MS	10  /* ms */
#define CANTP_CONVERT_MS_TO_MAIN_CYCLES(x) 	((x)/CANTP_MAIN_FUNCTION_PERIOD_TIME_MS)

#define CANTP_NSDU_CONFIG_LIST_SIZE 	4
#define CANTP_NSDU_RUNTIME_LIST_SIZE 	4
#define CANTP_RXID_LIST_SIZE 			4

#define FRTP_CANCEL_TRANSMIT_REQUEST 	STD_OFF
#define CANTP_VERSION_INFO_API STD_OFF   /**< Build version info API */
#if defined(USE_DET)
#define CANTP_DEV_ERROR_DETECT STD_ON
#else
#define CANTP_DEV_ERROR_DETECT STD_OFF
#endif

/* CanTp NSdu Id */
#define CANTP_DIAG_P2P_REQ		0
#define CANTP_DIAG_P2P_ACK		1
#define CANTP_DIAG_P2A_REQ		2
#define CANTP_DIAG_P2A_ACK		3

extern const CanTp_ConfigType CanTpConfig;
extern const CanTp_NSduType CanTpNSduConfigList[];
extern const CanTp_RxIdType CanTp_RxIdList[];

#endif


/** \file \brief bootLib.h - boot support function library */

/**
*
* \internal \copyright
*
* Copyright (c) 1990-1992, 2018 Wind River Systems, Inc.
*
* The right to copy, distribute, modify, or otherwise make use
* of this software may be licensed only pursuant to the terms
* of an applicable Wind River license agreement.
*/

/**
*
* \internal
modification history
--------------------
05may18,foo  remove version from mod hist (VXWCS-22)
22sep92,rrr  added support for c++.
04jul92,jcf  cleaned up.
26may92,rrr  the tree shuffle.
04oct91,rrr  passed through the ansification filter,
                 -changed VOID to void
                 -changed copyright notice
05oct90,shl  added ANSI function prototypes;
                 added copyright notice.
10aug90,dnw  added declaration of bootParamsErrorPrint ().
18jul90,dnw  written.
*/

#ifndef  __INCbootLibh
#define  __INCbootLibh

#include <sysInc.h>

/**
* \file \details
*
* ### Description
* BOOT_PARAMS is a structure containing all the fields of the
* VxWorks boot line. The functions in bootLib convert this structure
* to and from the boot line ASCII string.
*
* \cond internal
*/

/* defines */
 
#define BOOT_DEV_LEN    20
	
/* max chars in device name */

#define BOOT_HOST_LEN	20	/* max chars in host name */
#define BOOT_ADDR_LEN	30	/* max chars in net addr */
#define BOOT_FILE_LEN	80	/* max chars in file name */
#define BOOT_USR_LEN	20	/* max chars in user name */
#define BOOT_PASSWORD_LEN	20	/* max chars in password */
#define BOOT_OTHER_LEN	80	/* max chars in “other” field */
#define BOOT_FIELD_LEN	80	/* max chars in boot field */

/* typedefs */
	
typedef struct bootParams	/* BOOT_PARAMS */
    {
    char bootDev [BOOT_DEV_LEN];        /* boot device code */
    char hostName [BOOT_HOST_LEN];      /* name of host */
    char targetName [BOOT_HOST_LEN];    /* name of target */
    char ead [BOOT_ADDR_LEN];           /* ethernet internet addr */
    char bad [BOOT_ADDR_LEN];           /* backplane internet addr */
    char had [BOOT_ADDR_LEN];           /* host internet addr */
    char gad [BOOT_ADDR_LEN];           /* gateway internet addr */
    char bootFile [BOOT_FILE_LEN];      /* name of boot file */
    char startupScript [BOOT_FILE_LEN]; /* name of startup script */
    char usr [BOOT_USR_LEN];            /* user name */
    char passwd [BOOT_PASSWORD_LEN];    /* password */
    char other [BOOT_OTHER_LEN];        /* avail to application */
    int  procNum;                       /* processor number */
    int  flags;                         /* configuration flags */
    } BOOT_PARAMS;

#ifdef  __cplusplus 
extern “C” {
#endif /*  __cplusplus */

/* function declarations */

extern STATUS bootBpAnchorExtract (const char * string, char ** pAnchorAdrs);
extern STATUS bootNetmaskExtract (const char * string, int * pNetmask);
extern STATUS bootScanNum (const char ** ppString, int * pValue, BOOL hex);
extern STATUS bootStructToString (const char * paramString, BOOT_PARAMS *
                                  pBootParams);
extern char * bootStringToStruct (const char * bootString, BOOT_PARAMS *
                                  pBootParams);
extern void	bootParamsErrorPrint (const char * bootString, char * pError);
extern void	bootParamsPrompt (const char * string);
extern void	bootParamsShow (const char * paramString);

#ifdef  __cplusplus
}
#endif /*  __cplusplus */

#endif /* __INCbootLibh */

# Makefile - VxWorks  makefile
#
# Copyright 2019 Wind River Systems, Inc.
#
# The right to copy, distribute, modify or otherwise make use
# of this software may be licensed only pursuant to the terms
# of an applicable Wind River license agreement.
#
# modification history
# --------------------
# 18jun19,l_z  created
#

ifeq ($(SPACE), user)
include $(WIND_USR_MK)/defs.vsbvars.mk
else
include $(WIND_KRNL_MK)/defs.vsbvars.mk
endif

# layer variable
KERNEL_PUBLIC_H_DIRS = h
USER_PUBLIC_H_DIRS = h
BUILD_DIRS = src
BUILD_USER_DIRS = src
PRE_BUILD_DIRS = src
POSTBUILD_RTP_DIRS = src
POST_NOBUILD_CDFDIRS = cdf
POSTBUILD_RTP_LAYER_DEPENDS = 

# source Makefile
LIB_BASE_NAME = 

ifeq ($(SPACE), user)
include $(WIND_USR_MK)/defs.library.mk
else
include $(WIND_KRNL_MK)/defs.library.mk
endif

C_EXCLUDE =

CC_WARNINGS = $(CC_WARNINGS_NONE)

ifdef _WRS_CONFIG_ARCH_i86
C_EXCLUDE += 
endif

ifdef _WRS_CONFIG_ARCH_simlinux
C_EXCLUDE += 
endif

ifdef _WRS_CONFIG_ARCH_simpc
C_EXCLUDE += 
endif

ifdef _WRS_CONFIG_ARCH_arm
C_EXCLUDE += 
endif

ifdef _WRS_CONFIG_ARCH_ppc
C_EXCLUDE += 
endif

SOURCE = $(filter-out $(C_EXCLUDE),$(notdir $(wildcard *.c)))
OBJS = $(C_SOURCE:.c=.o)

EXTRA_DEFINE+=-D_WRS_XXXX

ifeq ($(SPACE), user)
include $(WIND_USR_MK)/rules.library.mk
else
include $(WIND_KRNL_MK)/rules.library.mk
endif

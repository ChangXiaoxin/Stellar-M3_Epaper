#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source;E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/kernel/tirtos/packages;E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack
override XDCROOT = E:/ti/ccs910/xdctools_3_55_02_22_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source;E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/kernel/tirtos/packages;E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack;E:/ti/ccs910/xdctools_3_55_02_22_core/packages;..
HOSTOS = Windows
endif

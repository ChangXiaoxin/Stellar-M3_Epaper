################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
TOOLS/onboard.obj: E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack/common/cc26xx/onboard.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"E:/ti/ccs910/ccs/tools/compiler/ti-cgt-arm_18.12.2.LTS/bin/armcl" --cmd_file="E:/ti/MyProjects/E-Link/src/ble5_simple_peripheral_cc2640r2lp_stack_library/TOOLS/defines/ble5_simple_peripheral_cc2640r2lp_stack_library_FlashROM_Library.opt" --cmd_file="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack/config/build_components.opt" --cmd_file="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack/config/factory_config.opt" --cmd_file="E:/ti/MyProjects/E-Link/src/ble5_simple_peripheral_cc2640r2lp_stack_library/TOOLS/build_config.opt"  -mv7M3 --code_state=16 -me -O4 --opt_for_speed=0 --include_path="E:/ti/MyProjects/E-Link/src/ble5_simple_peripheral_cc2640r2lp_stack_library" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack/controller/cc26xx/inc" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack/inc" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack/rom" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack/common/cc26xx" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack/common/cc26xx/npi/stack" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack/icall/inc" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack/hal/src/target/_common" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack/hal/src/target/_common/cc26xx" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack/hal/src/target" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack/hal/src/inc" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack/icall/src/inc" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack/npi/src" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack/osal/src/inc" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack/services/src/aes/cc26xx" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack/services/src/nv/cc26xx" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack/services/src/nv" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/ble5stack/services/src/saddr" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/devices/cc26x0r2" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/devices/cc26x0r2/rf_patches" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/devices/cc26x0r2/inc" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/source" --include_path="E:/ti/simplelink_cc2640r2_sdk_5_30_00_03/kernel/tirtos/packages" --include_path="E:/ti/ccs910/xdctools_3_55_02_22_core/packages" --include_path="E:/ti/ccs910/ccs/tools/compiler/ti-cgt-arm_18.12.2.LTS/include" --define=DeviceFamily_CC26X0R2 -g --c99 --gcc --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="TOOLS/$(basename $(<F)).d_raw" --obj_directory="TOOLS" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '



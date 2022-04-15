###########################################################################
## Makefile generated for component 'Motor_and_Driver'. 
## 
## Makefile     : Motor_and_Driver.mk
## Generated on : Thu Apr 14 13:01:31 2022
## Final product: ./Motor_and_Driver.exe
## Product type : executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPILER_COMMAND_FILE   Compiler command listing model reference header paths
# CMD_FILE                Command file

PRODUCT_NAME              = Motor_and_Driver
MAKEFILE                  = Motor_and_Driver.mk
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2021b
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2021b/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = D:/Repos/ExoModel/Data/Cache/sm_cache
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 1
TGT_FCN_LIB               = ISO_C
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ../../..
COMPILER_COMMAND_FILE     = Motor_and_Driver_comp.rsp
CMD_FILE                  = Motor_and_Driver.rsp
C_STANDARD_OPTS           = -fwrapv
CPP_STANDARD_OPTS         = -fwrapv
LIBSSC_SLI_MINGW64_OBJS   = 
LIBSSC_CORE_MINGW64_OBJS  = 
LIBNE_MINGW64_OBJS        = 
LIBMC_MINGW64_OBJS        = 
LIBEX_MINGW64_OBJS        = 
LIBPM_MINGW64_OBJS        = 

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          MinGW64 | gmake (64-bit Windows)
# Supported Version(s):    6.x
# ToolchainInfo Version:   2021b
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# C_STANDARD_OPTS
# CPP_STANDARD_OPTS
# MINGW_ROOT
# MINGW_C_STANDARD_OPTS

#-----------
# MACROS
#-----------

WARN_FLAGS            = -Wall -W -Wwrite-strings -Winline -Wstrict-prototypes -Wnested-externs -Wpointer-arith -Wcast-align
WARN_FLAGS_MAX        = $(WARN_FLAGS) -Wcast-qual -Wshadow
CPP_WARN_FLAGS        = -Wall -W -Wwrite-strings -Winline -Wpointer-arith -Wcast-align
CPP_WARN_FLAGS_MAX    = $(CPP_WARN_FLAGS) -Wcast-qual -Wshadow
MW_EXTERNLIB_DIR      = $(MATLAB_ROOT)/extern/lib/win64/mingw64
SHELL                 = %SystemRoot%/system32/cmd.exe

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -lws2_32

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: GNU C Compiler
CC_PATH = $(MINGW_ROOT)
CC = "$(CC_PATH)/gcc"

# Linker: GNU Linker
LD_PATH = $(MINGW_ROOT)
LD = "$(LD_PATH)/g++"

# C++ Compiler: GNU C++ Compiler
CPP_PATH = $(MINGW_ROOT)
CPP = "$(CPP_PATH)/g++"

# C++ Linker: GNU C++ Linker
CPP_LD_PATH = $(MINGW_ROOT)
CPP_LD = "$(CPP_LD_PATH)/g++"

# Archiver: GNU Archiver
AR_PATH = $(MINGW_ROOT)
AR = "$(AR_PATH)/ar"

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)/mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%/bin/win64
MAKE = "$(MAKE_PATH)/gmake"


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @del
ECHO                = @echo
MV                  = @move
RUN                 =

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              = ruvs
CFLAGS               = -c $(MINGW_C_STANDARD_OPTS) -m64 \
                       -O3 -fno-loop-optimize -fno-aggressive-loop-optimizations
CPPFLAGS             = -c $(CPP_STANDARD_OPTS) -m64 \
                       -O3 -fno-loop-optimize -fno-aggressive-loop-optimizations
CPP_LDFLAGS          =  -static -m64
CPP_SHAREDLIB_LDFLAGS  = -shared -Wl,--no-undefined \
                         -Wl,--out-implib,$(basename $(PRODUCT)).lib
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              =  -static -m64
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -shared -Wl,--no-undefined \
                       -Wl,--out-implib,$(basename $(PRODUCT)).lib



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = ./Motor_and_Driver.exe
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = 

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=1 -DALLOCATIONFCN=0 -DONESTEPFCN=0 -DTERMFCN=1 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0
DEFINES_CUSTOM = -DEXT_MODE -DIS_RAPID_ACCEL
DEFINES_OPTS = -DTGTCONN -DIS_SIM_TARGET -DNRT -DRSIM_PARAMETER_LOADING -DRSIM_WITH_SL_SOLVER -DENABLE_SLEXEC_SSBRIDGE=1 -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DON_TARGET_WAIT_FOR_START=0 -DTID01EQ=0
DEFINES_STANDARD = -DMODEL=Motor_and_Driver -DNUMST=4 -DNCSTATES=0 -DHAVESTDIO

DEFINES = $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_OPTS) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1_ds.c $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1_ds_obs_all.c $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1_ds_obs_act.c $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1_ds_obs_exp.c $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1_ds_log.c $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1_ds_obs_il.c $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1_ds_a.c $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1_ds_dxf.c $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1_ds_f.c $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1.c $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1_gateway.c $(START_DIR)/slprj/raccel/Motor_and_Driver/pm_printf.c $(MATLAB_ROOT)/rtw/c/src/rt_logging_simtarget.c $(START_DIR)/slprj/raccel/Motor_and_Driver/rt_backsubrr_dbl.c $(START_DIR)/slprj/raccel/Motor_and_Driver/rt_forwardsubrr_dbl.c $(START_DIR)/slprj/raccel/Motor_and_Driver/rt_lu_real.c $(START_DIR)/slprj/raccel/Motor_and_Driver/rt_matrixlib_dbl.c $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver.c $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_capi.c $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_data.c $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_tgtconn.c $(START_DIR)/slprj/raccel/Motor_and_Driver/rtGetInf.c $(START_DIR)/slprj/raccel/Motor_and_Driver/rtGetNaN.c $(START_DIR)/slprj/raccel/Motor_and_Driver/rt_nonfinite.c $(MATLAB_ROOT)/rtw/c/src/rt_logging_mmi_simtarget.c $(MATLAB_ROOT)/rtw/c/src/rtw_modelmap_utils_simtarget.c $(MATLAB_ROOT)/rtw/c/raccel/raccel_main.c $(MATLAB_ROOT)/rtw/c/raccel/raccel_sup.c $(MATLAB_ROOT)/rtw/c/raccel/raccel_mat.c $(MATLAB_ROOT)/simulink/include/simulink_solver_api.c $(MATLAB_ROOT)/rtw/c/src/rapid/raccel_utils.c $(MATLAB_ROOT)/rtw/c/src/rapid/common_utils.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/ext_svr.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/updown.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/ext_work.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/rtiostream_interface.c $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip/rtiostream_tcpip.c $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/rtiostream_utils.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = Motor_and_Driver_678d4e8_1_ds.obj Motor_and_Driver_678d4e8_1_ds_obs_all.obj Motor_and_Driver_678d4e8_1_ds_obs_act.obj Motor_and_Driver_678d4e8_1_ds_obs_exp.obj Motor_and_Driver_678d4e8_1_ds_log.obj Motor_and_Driver_678d4e8_1_ds_obs_il.obj Motor_and_Driver_678d4e8_1_ds_a.obj Motor_and_Driver_678d4e8_1_ds_dxf.obj Motor_and_Driver_678d4e8_1_ds_f.obj Motor_and_Driver_678d4e8_1.obj Motor_and_Driver_678d4e8_1_gateway.obj pm_printf.obj rt_logging_simtarget.obj rt_backsubrr_dbl.obj rt_forwardsubrr_dbl.obj rt_lu_real.obj rt_matrixlib_dbl.obj Motor_and_Driver.obj Motor_and_Driver_capi.obj Motor_and_Driver_data.obj Motor_and_Driver_tgtconn.obj rtGetInf.obj rtGetNaN.obj rt_nonfinite.obj rt_logging_mmi_simtarget.obj rtw_modelmap_utils_simtarget.obj raccel_main.obj raccel_sup.obj raccel_mat.obj simulink_solver_api.obj raccel_utils.obj common_utils.obj ext_svr.obj updown.obj ext_work.obj rtiostream_interface.obj rtiostream_tcpip.obj rtiostream_utils.obj

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/lib/win64/ssc_sli_mingw64.lib $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/lib/win64/ssc_core_mingw64.lib $(MATLAB_ROOT)/toolbox/physmod/network_engine/lib/win64/ne_mingw64.lib $(MATLAB_ROOT)/toolbox/physmod/common/math/core/lib/win64/mc_mingw64.lib $(MATLAB_ROOT)/toolbox/physmod/common/external/library/lib/win64/ex_mingw64.lib $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/lib/win64/pm_mingw64.lib

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS =  -L"$(MATLAB_ROOT)/extern/lib/win64/mingw64" -llibmwipp -llibut -llibmx -llibmex -llibmat -llibmwmathutil -llibmwslsa_sim -llibmwslexec_simbridge -llibmwsl_fileio -llibmwsigstream -llibmwsl_AsyncioQueue -llibmwsl_services -llibmwsdi_raccel -llibmwi18n -llibmwcoder_target_services -llibmwcoder_ParamTuningTgtAppSvc -llibmwslpointerutil -llibmwsl_simtarget_instrumentation -llibfixedpoint -llibmwslexec_simlog -llibmwstringutil

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_TFL = -msse2
CFLAGS_BASIC = $(DEFINES) $(INCLUDES) @$(COMPILER_COMMAND_FILE)

CFLAGS += $(CFLAGS_TFL) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_TFL = -msse2
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES) @$(COMPILER_COMMAND_FILE)

CPPFLAGS += $(CPPFLAGS_TFL) $(CPPFLAGS_BASIC)

#---------------------
# MEX C++ Compiler
#---------------------

MEX_CPP_Compiler_BASIC =  @$(COMPILER_COMMAND_FILE)

MEX_CPPFLAGS += $(MEX_CPP_Compiler_BASIC)

#-----------------
# MEX Compiler
#-----------------

MEX_Compiler_BASIC =  @$(COMPILER_COMMAND_FILE)

MEX_CFLAGS += $(MEX_Compiler_BASIC)

###########################################################################
## INLINED COMMANDS
###########################################################################


MINGW_C_STANDARD_OPTS = $(C_STANDARD_OPTS)


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild download execute


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


download : $(PRODUCT)


execute : download
	@echo "### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@echo "### Done invoking postbuild tool."


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(LD) $(LDFLAGS) -o $(PRODUCT) @$(CMD_FILE) -Wl,--start-group $(LIBS) -Wl,--end-group $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.obj : %.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : %.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


Motor_and_Driver_678d4e8_1_ds.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1_ds.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Motor_and_Driver_678d4e8_1_ds_obs_all.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1_ds_obs_all.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Motor_and_Driver_678d4e8_1_ds_obs_act.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1_ds_obs_act.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Motor_and_Driver_678d4e8_1_ds_obs_exp.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1_ds_obs_exp.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Motor_and_Driver_678d4e8_1_ds_log.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1_ds_log.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Motor_and_Driver_678d4e8_1_ds_obs_il.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1_ds_obs_il.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Motor_and_Driver_678d4e8_1_ds_a.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1_ds_a.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Motor_and_Driver_678d4e8_1_ds_dxf.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1_ds_dxf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Motor_and_Driver_678d4e8_1_ds_f.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1_ds_f.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Motor_and_Driver_678d4e8_1.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Motor_and_Driver_678d4e8_1_gateway.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_678d4e8_1_gateway.c
	$(CC) $(CFLAGS) -o "$@" "$<"


pm_printf.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/pm_printf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_logging_simtarget.obj : $(MATLAB_ROOT)/rtw/c/src/rt_logging_simtarget.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_backsubrr_dbl.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/rt_backsubrr_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_forwardsubrr_dbl.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/rt_forwardsubrr_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_lu_real.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/rt_lu_real.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_matrixlib_dbl.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/rt_matrixlib_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Motor_and_Driver.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Motor_and_Driver_capi.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_capi.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Motor_and_Driver_data.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_data.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Motor_and_Driver_tgtconn.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/Motor_and_Driver_tgtconn.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtGetInf.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/rtGetInf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtGetNaN.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/rtGetNaN.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_nonfinite.obj : $(START_DIR)/slprj/raccel/Motor_and_Driver/rt_nonfinite.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_logging_mmi_simtarget.obj : $(MATLAB_ROOT)/rtw/c/src/rt_logging_mmi_simtarget.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtw_modelmap_utils_simtarget.obj : $(MATLAB_ROOT)/rtw/c/src/rtw_modelmap_utils_simtarget.c
	$(CC) $(CFLAGS) -o "$@" "$<"


raccel_main.obj : $(MATLAB_ROOT)/rtw/c/raccel/raccel_main.c
	$(CC) $(CFLAGS) -o "$@" "$<"


raccel_sup.obj : $(MATLAB_ROOT)/rtw/c/raccel/raccel_sup.c
	$(CC) $(CFLAGS) -o "$@" "$<"


raccel_mat.obj : $(MATLAB_ROOT)/rtw/c/raccel/raccel_mat.c
	$(CC) $(CFLAGS) -o "$@" "$<"


simulink_solver_api.obj : $(MATLAB_ROOT)/simulink/include/simulink_solver_api.c
	$(CC) $(CFLAGS) -o "$@" "$<"


raccel_utils.obj : $(MATLAB_ROOT)/rtw/c/src/rapid/raccel_utils.c
	$(CC) $(CFLAGS) -o "$@" "$<"


common_utils.obj : $(MATLAB_ROOT)/rtw/c/src/rapid/common_utils.c
	$(CC) $(CFLAGS) -o "$@" "$<"


ext_svr.obj : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/ext_svr.c
	$(CC) $(CFLAGS) -o "$@" "$<"


updown.obj : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/updown.c
	$(CC) $(CFLAGS) -o "$@" "$<"


ext_work.obj : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/ext_work.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtiostream_interface.obj : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/rtiostream_interface.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtiostream_tcpip.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip/rtiostream_tcpip.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtiostream_utils.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/rtiostream_utils.c
	$(CC) $(CFLAGS) -o "$@" "$<"


#------------------------
# BUILDABLE LIBRARIES
#------------------------

$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/lib/win64/ssc_sli_mingw64.lib : $(LIBSSC_SLI_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_SLI_MINGW64_OBJS)


$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/lib/win64/ssc_core_mingw64.lib : $(LIBSSC_CORE_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_CORE_MINGW64_OBJS)


$(MATLAB_ROOT)/toolbox/physmod/network_engine/lib/win64/ne_mingw64.lib : $(LIBNE_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBNE_MINGW64_OBJS)


$(MATLAB_ROOT)/toolbox/physmod/common/math/core/lib/win64/mc_mingw64.lib : $(LIBMC_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBMC_MINGW64_OBJS)


$(MATLAB_ROOT)/toolbox/physmod/common/external/library/lib/win64/ex_mingw64.lib : $(LIBEX_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBEX_MINGW64_OBJS)


$(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/lib/win64/pm_mingw64.lib : $(LIBPM_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBPM_MINGW64_OBJS)


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(COMPILER_COMMAND_FILE) $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(ECHO) "### Deleted all derived files."



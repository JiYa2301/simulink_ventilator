###########################################################################
## Makefile generated for component 'MedicalVentilatorWithLungModel'. 
## 
## Makefile     : MedicalVentilatorWithLungModel.mk
## Generated on : Tue Jul 02 14:19:16 2024
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/MedicalVentilatorWithLungModel
## Product type : executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile

PRODUCT_NAME              = MedicalVentilatorWithLungModel
MAKEFILE                  = MedicalVentilatorWithLungModel.mk
MATLAB_ROOT               = /Applications/MATLAB_R2024a.app
MATLAB_BIN                = /Applications/MATLAB_R2024a.app/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/maca64
START_DIR                 = /Users/jsingla/work/projects/cybersecurity/simulink_medical_ventilator/C_min_opt1
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = ISO_C
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ..
C_STANDARD_OPTS           = -fno-common -fexceptions -fwrapv
CPP_STANDARD_OPTS         = -std=c++14 -fno-common -fexceptions -fwrapv
LIBSSC_SLI_ERT_OBJS       = 
LIBSSC_CORE_ERT_OBJS      = 
LIBSSC_ST_ERT_OBJS        = 
LIBMC_ERT_OBJS            = 
LIBEX_ERT_OBJS            = 
LIBPM_ERT_OBJS            = 

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Xcode with Clang | gmake (64-bit Mac)
# Supported Version(s):    
# ToolchainInfo Version:   2024a
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# C_STANDARD_OPTS
# CPP_STANDARD_OPTS

#-----------
# MACROS
#-----------

ARCHS                               = arm64
XCODE_SDK_VER                       = $(shell perl $(MATLAB_ROOT)/rtw/c/tools/macsdkver.pl)
XCODE_SDK                           = MacOSX$(XCODE_SDK_VER).sdk
XCODE_DEVEL_DIR                     = $(shell xcode-select -print-path)
XCODE_SDK_ROOT                      = $(XCODE_DEVEL_DIR)/Platforms/MacOSX.platform/Developer/SDKs/$(XCODE_SDK)
XCODE_LD_VERSION                    = $(shell xcrun ld -v 2>&1 >/dev/null | head -n 1)
XCODE_LD_VERSION_IS_DYLD            = $(findstring dyld,$(XCODE_LD_VERSION))
XCODE_DYLD_NO_WARN_DUPLICATE_LDFLAG = -Wl,-no_warn_duplicate_libraries
NO_WARN_DUPLICATE_LIBRARIES         = $(if $(XCODE_LD_VERSION_IS_DYLD),$(XCODE_DYLD_NO_WARN_DUPLICATE_LDFLAG),)

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: Clang C Compiler
CC = xcrun clang

# Linker: Clang Linker
LD = xcrun clang++

# C++ Compiler: Clang C++ Compiler
CPP = xcrun clang++

# C++ Linker: Clang C++ Linker
CPP_LD = xcrun clang++

# Archiver: Clang Archiver
AR = xcrun ar

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)/mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%/bin/maca64
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
RM                  = @rm -f
ECHO                = @echo
MV                  = @mv
RUN                 =

#--------------------------------
# "Debug" Build Configuration
#--------------------------------

ARFLAGS              = ruvs \
                       $(ARDEBUG)
CFLAGS               = -c -isysroot $(XCODE_SDK_ROOT) -arch $(ARCHS) $(C_STANDARD_OPTS) -mmacosx-version-min=11.0 \
                       -O0 -ffp-contract=off \
                       $(CDEBUG)
CPPFLAGS             = -c -isysroot $(XCODE_SDK_ROOT) -arch $(ARCHS) $(CPP_STANDARD_OPTS) -mmacosx-version-min=11.0 \
                       -O0 -ffp-contract=off \
                       $(CPPDEBUG)
CPP_LDFLAGS          = -arch $(ARCHS) -isysroot $(XCODE_SDK_ROOT) -Wl,-rpath,@executable_path -Wl,-rpath,@executable_path/$(RELATIVE_PATH_TO_ANCHOR) $(NO_WARN_DUPLICATE_LIBRARIES) \
                       $(CPPLDDEBUG)
CPP_SHAREDLIB_LDFLAGS  = -arch $(ARCHS)  \
                         -dynamiclib -install_name @rpath/$(notdir $(PRODUCT)) -isysroot $(XCODE_SDK_ROOT) \
                         -Wl,$(LD_NAMESPACE) $(LD_UNDEFS) \
                         $(NO_WARN_DUPLICATE_LIBRARIES) \
                         $(CPPLDDEBUG)
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = -arch $(ARCHS) -isysroot $(XCODE_SDK_ROOT) -Wl,-rpath,@executable_path -Wl,-rpath,@executable_path/$(RELATIVE_PATH_TO_ANCHOR) $(NO_WARN_DUPLICATE_LIBRARIES) \
                       $(LDDEBUG)
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -arch $(ARCHS)  \
                       -dynamiclib -install_name @rpath/$(notdir $(PRODUCT)) -isysroot $(XCODE_SDK_ROOT) \
                       -Wl,$(LD_NAMESPACE) $(LD_UNDEFS) \
                       $(NO_WARN_DUPLICATE_LIBRARIES) \
                       $(LDDEBUG)



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/MedicalVentilatorWithLungModel
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -I$(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/rtw/c/ert -I$(MATLAB_ROOT)/extern/physmod/maca64/ex/include -I$(MATLAB_ROOT)/extern/physmod/maca64/lang/include -I$(MATLAB_ROOT)/extern/physmod/maca64/mc/include -I$(MATLAB_ROOT)/extern/physmod/maca64/pd/include -I$(MATLAB_ROOT)/extern/physmod/maca64/pm/include -I$(MATLAB_ROOT)/extern/physmod/maca64/pm_log/include -I$(MATLAB_ROOT)/extern/physmod/maca64/ssc_core/include -I$(MATLAB_ROOT)/extern/physmod/maca64/ssc_dae/include -I$(MATLAB_ROOT)/extern/physmod/maca64/ssc_ds/include -I$(MATLAB_ROOT)/extern/physmod/maca64/ssc_sli/include -I$(MATLAB_ROOT)/extern/physmod/maca64/ssc_st/include

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0
DEFINES_CUSTOM = 
DEFINES_OPTS = -DTID01EQ=1
DEFINES_STANDARD = -DMODEL=MedicalVentilatorWithLungModel -DNUMST=2 -DNCSTATES=192 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0

DEFINES = $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_OPTS) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_zc.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_tdxy_p.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxy_p.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_nldv.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_obs_il.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_obs_all.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_obs_act.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_obs_exp.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_mode.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_vmm.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxm_p.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_m_p.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_log.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dnf_v_x.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dnf_p.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_lv.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxm.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_tdxf_p.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_tduf_p.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxy.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_a.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_duf_p.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_vmf.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxf_p.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_slv.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_ic.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_slf0.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dnf.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxf.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_f.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_a_p.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_iassert.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_m.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_duf.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_assert.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_gateway.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/rt_backsubrr_dbl.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/rt_forwardsubrr_dbl.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/rt_lu_real.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/rt_matrixlib_dbl.c $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel.c

MAIN_SRC = $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/ert_main.c

ALL_SRCS = $(SRCS) $(MAIN_SRC)

###########################################################################
## OBJECTS
###########################################################################

OBJS = MedicalVentilatorWithLungModel_1a62e0cc_1_ds.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_zc.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_tdxy_p.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxy_p.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_nldv.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_obs_il.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_obs_all.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_obs_act.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_obs_exp.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_mode.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_vmm.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxm_p.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_m_p.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_log.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dnf_v_x.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dnf_p.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_lv.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxm.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_tdxf_p.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_tduf_p.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxy.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_a.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_duf_p.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_vmf.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxf_p.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_slv.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_ic.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_slf0.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dnf.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxf.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_f.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_a_p.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_iassert.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_m.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_duf.o MedicalVentilatorWithLungModel_1a62e0cc_1_ds_assert.o MedicalVentilatorWithLungModel_1a62e0cc_1.o MedicalVentilatorWithLungModel_1a62e0cc_1_gateway.o rt_backsubrr_dbl.o rt_forwardsubrr_dbl.o rt_lu_real.o rt_matrixlib_dbl.o MedicalVentilatorWithLungModel.o

MAIN_OBJ = ert_main.o

ALL_OBJS = $(OBJS) $(MAIN_OBJ)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = $(MATLAB_ROOT)/extern/physmod/maca64/ssc_sli/lib/ssc_sli_ert.a $(MATLAB_ROOT)/extern/physmod/maca64/ssc_core/lib/ssc_core_ert.a $(MATLAB_ROOT)/extern/physmod/maca64/ssc_st/lib/ssc_st_ert.a $(MATLAB_ROOT)/extern/physmod/maca64/mc/lib/mc_ert.a $(MATLAB_ROOT)/extern/physmod/maca64/ex/lib/ex_ert.a $(MATLAB_ROOT)/extern/physmod/maca64/pm/lib/pm_ert.a

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_TFL = -msse2
CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_TFL) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_TFL = -msse2
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_TFL) $(CPPFLAGS_BASIC)

###########################################################################
## INLINED COMMANDS
###########################################################################

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

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(LIBS) $(MAIN_OBJ)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(LD) $(LDFLAGS) -o $(PRODUCT) $(OBJS) $(MAIN_OBJ) $(LIBS) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : %.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : %.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : %.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : %.CC
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : %.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : %.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : %.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : %.C++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : %.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : %.CXX
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.CC
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.C++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.CXX
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ex/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ex/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ex/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ex/src/%.CC
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ex/src/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ex/src/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ex/src/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ex/src/%.C++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ex/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ex/src/%.CXX
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/mc/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/mc/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/mc/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/mc/src/%.CC
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/mc/src/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/mc/src/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/mc/src/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/mc/src/%.C++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/mc/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/mc/src/%.CXX
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/pm/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/pm/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/pm/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/pm/src/%.CC
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/pm/src/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/pm/src/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/pm/src/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/pm/src/%.C++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/pm/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/pm/src/%.CXX
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_core/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_core/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_core/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_core/src/%.CC
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_core/src/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_core/src/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_core/src/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_core/src/%.C++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_core/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_core/src/%.CXX
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_sli/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_sli/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_sli/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_sli/src/%.CC
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_sli/src/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_sli/src/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_sli/src/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_sli/src/%.C++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_sli/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_sli/src/%.CXX
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_st/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_st/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_st/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_st/src/%.CC
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_st/src/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_st/src/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_st/src/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_st/src/%.C++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_st/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/maca64/ssc_st/src/%.CXX
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.CC
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.C++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.CXX
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/%.CC
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/%.C++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/%.CXX
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.CC
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.C++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.CXX
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.CC
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.C++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.CXX
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.CC
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.C++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.CXX
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_zc.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_zc.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_tdxy_p.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_tdxy_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxy_p.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxy_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_nldv.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_nldv.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_obs_il.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_obs_il.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_obs_all.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_obs_all.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_obs_act.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_obs_act.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_obs_exp.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_obs_exp.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_mode.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_mode.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_vmm.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_vmm.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxm_p.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxm_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_m_p.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_m_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_log.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_log.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dnf_v_x.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dnf_v_x.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dnf_p.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dnf_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_lv.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_lv.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxm.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxm.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_tdxf_p.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_tdxf_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_tduf_p.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_tduf_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxy.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxy.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_a.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_a.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_duf_p.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_duf_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_vmf.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_vmf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxf_p.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxf_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_slv.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_slv.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_ic.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_ic.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_slf0.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_slf0.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dnf.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dnf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxf.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dxf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_f.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_f.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_a_p.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_a_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_iassert.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_iassert.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_m.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_m.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_duf.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_duf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_ds_assert.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_ds_assert.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel_1a62e0cc_1_gateway.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel_1a62e0cc_1_gateway.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_backsubrr_dbl.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/rt_backsubrr_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_forwardsubrr_dbl.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/rt_forwardsubrr_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_lu_real.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/rt_lu_real.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_matrixlib_dbl.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/rt_matrixlib_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MedicalVentilatorWithLungModel.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/MedicalVentilatorWithLungModel.c
	$(CC) $(CFLAGS) -o "$@" "$<"


ert_main.o : $(START_DIR)/MedicalVentilatorWithLungModel_ert_rtw/ert_main.c
	$(CC) $(CFLAGS) -o "$@" "$<"


#------------------------
# BUILDABLE LIBRARIES
#------------------------

$(MATLAB_ROOT)/extern/physmod/maca64/ssc_sli/lib/ssc_sli_ert.a : $(LIBSSC_SLI_ERT_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_SLI_ERT_OBJS)


$(MATLAB_ROOT)/extern/physmod/maca64/ssc_core/lib/ssc_core_ert.a : $(LIBSSC_CORE_ERT_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_CORE_ERT_OBJS)


$(MATLAB_ROOT)/extern/physmod/maca64/ssc_st/lib/ssc_st_ert.a : $(LIBSSC_ST_ERT_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_ST_ERT_OBJS)


$(MATLAB_ROOT)/extern/physmod/maca64/mc/lib/mc_ert.a : $(LIBMC_ERT_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBMC_ERT_OBJS)


$(MATLAB_ROOT)/extern/physmod/maca64/ex/lib/ex_ert.a : $(LIBEX_ERT_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBEX_ERT_OBJS)


$(MATLAB_ROOT)/extern/physmod/maca64/pm/lib/pm_ert.a : $(LIBPM_ERT_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBPM_ERT_OBJS)


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(MAKEFILE)


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
	$(ECHO) "### Deleting all derived files ..."
	$(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(ECHO) "### Deleted all derived files."



###########################################################################
## Makefile for calling other makefiles
###########################################################################

###########################################################################
## MACROS
###########################################################################
###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################
## Toolchain Name:          Arduino AVR


###########################################################################
## TOOLCHAIN MACROS
###########################################################################
# ARDUINO_ROOT = Intrinsically defined
# ARDUINO_PORT = Intrinsically defined
# ARDUINO_MCU = Intrinsically defined
# ARDUINO_BAUD = Intrinsically defined
# ARDUINO_PROTOCOL = Intrinsically defined
# ARDUINO_F_CPU = Intrinsically defined
SHELL = %SystemRoot%/system32/cmd.exe
PRODUCT_HEX = $(RELATIVE_PATH_TO_ANCHOR)/$(PRODUCT_NAME).hex
PRODUCT_BIN = $(RELATIVE_PATH_TO_ANCHOR)/$(PRODUCT_NAME).eep
ARDUINO_TOOLS = $(ARDUINO_ROOT)/hardware/tools/avr/bin
ELF2EEP_OPTIONS = -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0
DOWNLOAD_ARGS =  >tmp.trash 2>&1 -P$(ARDUINO_PORT) -V -q -q -q -q -F -C$(ARDUINO_ROOT)/hardware/tools/avr/etc/avrdude.conf -p$(ARDUINO_MCU) -c$(ARDUINO_PROTOCOL) -b$(ARDUINO_BAUD) -D -Uflash:w:
SLIB_PATH = C:/Users/khoi/DOCUME~1/MATLAB/R2021b/ARDUIN~1/ARDUIN~1/FASTER~1


#-------------------------
# Directives/Utilities
#-------------------------
RM                        = 
ECHO                      = echo
MV                        = 


#------------------------
# BUILD TOOL COMMANDS
#------------------------

# Assembler: Arduino AVR Assembler
AS_PATH := $(ARDUINO_TOOLS)
AS := $(AS_PATH)/avr-gcc

# C Compiler: Arduino AVR C Compiler
CC_PATH := $(ARDUINO_TOOLS)
CC := $(CC_PATH)/avr-gcc

# Linker: Arduino AVR Linker
LD_PATH = $(ARDUINO_TOOLS)
LD := $(LD_PATH)/avr-gcc


# C++ Compiler: Arduino AVR C++ Compiler
CPP_PATH := $(ARDUINO_TOOLS)
CPP := $(CPP_PATH)/avr-g++

# C++ Linker: Arduino AVR C++ Linker
CPP_LD_PATH = $(ARDUINO_TOOLS)
CPP_LD := $(CPP_LD_PATH)/avr-gcc

# Archiver: Arduino AVR Archiver
AR_PATH := $(ARDUINO_TOOLS)
AR := $(AR_PATH)/avr-ar

# Indexing: Arduino AVR Ranlib
RANLIB_PATH := $(ARDUINO_TOOLS)
RANLIB := $(RANLIB_PATH)/avr-ranlib

# Execute: Execute
EXECUTE = $(PRODUCT)


# Builder: GMAKE Utility
MAKE_PATH = C:/Program Files/MATLAB/R2021b/bin/win64
MAKE = $(MAKE_PATH)/gmake


#--------------------------------------
# Faster Runs Build Configuration
#--------------------------------------
ARFLAGS              = rcs
ASFLAGS              = -MMD -MP  \
                       -Wall \
                       -x assembler-with-cpp \
                       $(ASFLAGS_ADDITIONAL) \
                       $(DEFINES) \
                       $(INCLUDES) \
                       -c
OBJCOPYFLAGS_BIN     = $(ELF2EEP_OPTIONS) $(PRODUCT) $(PRODUCT_BIN)
CFLAGS               = -std=gnu11  \
                       -c \
                       -w \
                       -ffunction-sections \
                       -fdata-sections  \
                       -MMD \
                       -DARDUINO=10801  \
                       -MMD -MP  \
                       -Os
CPPFLAGS             = -std=gnu++11 -fpermissive -fno-exceptions -fno-threadsafe-statics  \
                       -c \
                       -w \
                       -ffunction-sections \
                       -fdata-sections  \
                       -MMD \
                       -DARDUINO=10801  \
                       -MMD -MP  \
                       -Os
CPP_LDFLAGS          =  -w -Os -Wl,--gc-sections,--relax
CPP_SHAREDLIB_LDFLAGS =
DOWNLOAD_FLAGS       = $(DOWNLOAD_ARGS)$(PRODUCT_HEX):i
EXECUTE_FLAGS        =
OBJCOPYFLAGS_HEX     = -O ihex -R .eeprom $(PRODUCT) $(PRODUCT_HEX)
LDFLAGS              =  -w -Os -Wl,--gc-sections,--relax
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    =


###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################
#---------------
# C Compiler
#---------------
CFLAGS_SKIPFORSIL = -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR -D_RUNONTARGETHARDWARE_BUILD_ -D_ROTH_MEGA2560_ -DARDUINO_NUM_SERIAL_PORTS=4
CFLAGS_BASIC = $(DEFINES) $(INCLUDES)
CFLAGS += $(CFLAGS_SKIPFORSIL) $(CFLAGS_BASIC)
#-----------------
# C++ Compiler
#-----------------
CPPFLAGS_SKIPFORSIL = -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR -D_RUNONTARGETHARDWARE_BUILD_ -D_ROTH_MEGA2560_ -DARDUINO_NUM_SERIAL_PORTS=4
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)
CPPFLAGS += $(CPPFLAGS_SKIPFORSIL) $(CPPFLAGS_BASIC)
#---------------
# C++ Linker
#---------------
CPP_LDFLAGS_SKIPFORSIL = -mmcu=atmega2560 
CPP_LDFLAGS += $(CPP_LDFLAGS_SKIPFORSIL)
#------------------------------
# C++ Shared Library Linker
#------------------------------
CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL = -mmcu=atmega2560 
CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL)
#-----------
# Linker
#-----------
LDFLAGS_SKIPFORSIL = -mmcu=atmega2560 
LDFLAGS += $(LDFLAGS_SKIPFORSIL)
#--------------------------
# Shared Library Linker
#--------------------------
SHAREDLIB_LDFLAGS_SKIPFORSIL = -mmcu=atmega2560 
SHAREDLIB_LDFLAGS += $(SHAREDLIB_LDFLAGS_SKIPFORSIL)


-include codertarget_assembly_flags.mk


###########################################################################
## Define Macros
###########################################################################
SLMKPATH=C:/PROGRA~3/MATLAB/SUPPOR~1/R2021b/toolbox/target/SUPPOR~1/ARDUIN~2/STATIC~1
MODELMK=Arduino_MPU6050.mk
SLIB_PATH=C:/Users/khoi/DOCUME~1/MATLAB/R2021b/ARDUIN~1/ARDUIN~1/FASTER~1
VARIANT_HEADER_PATH=$(ARDUINO_ROOT)/hardware/arduino/avr/variants/mega
ARDUINO_SKETCHBOOK_ROOT=C:/PROGRA~3/MATLAB/SUPPOR~1/R2021b/aIDE/portable/SKETCH~1/LIBRAR~1
ARDUINO_BASESUPPORTPKG_ROOT=C:/PROGRA~3/MATLAB/SUPPOR~1/R2021b/toolbox/target/SUPPOR~1/ARDUIN~2


###########################################################################
## Export Variables
###########################################################################
export AR
export RANLIB
export AS
export CC
export CPP
export ASFLAGS
export CFLAGS
export CPPFLAGS
export ARFLAGS
export SLIB_PATH
export VARIANT_HEADER_PATH
export ARDUINO_SKETCHBOOK_ROOT
export ARDUINO_BASESUPPORTPKG_ROOT


###########################################################################
## PHONY TARGETS
###########################################################################
.PHONY : all
all : 
	@echo "### Generating static library."
	"$(MAKE)" -j7 -C "$(SLMKPATH)" SHELL="$(SHELL)" -f avrcomm.mk all
	"$(MAKE)" -j7 -C "$(SLMKPATH)" SHELL="$(SHELL)" -f avrcore.mk all
	"$(MAKE)" -j7 SHELL="$(SHELL)" -f "$(MODELMK)" all


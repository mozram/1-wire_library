################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../src/ \
../src/ASF/ \
../src/ASF/common/ \
../src/ASF/common/boards/ \
../src/ASF/common/services/ \
../src/ASF/common/services/gpio/ \
../src/ASF/common/services/gpio/mega_gpio/ \
../src/ASF/common/services/ioport/ \
../src/ASF/common/services/ioport/mega/ \
../src/ASF/common/utils/ \
../src/ASF/common/utils/interrupt/ \
../src/ASF/common/utils/make/ \
../src/ASF/mega/ \
../src/ASF/mega/boards/ \
../src/ASF/mega/boards/atmega256rfr2_xplained_pro/ \
../src/ASF/mega/utils/ \
../src/ASF/mega/utils/assembler/ \
../src/ASF/mega/utils/preprocessor/ \
../src/config/


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../src/ASF/mega/boards/atmega256rfr2_xplained_pro/init.c \
../src/main.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
src/ASF/mega/boards/atmega256rfr2_xplained_pro/init.o \
src/main.o

OBJS_AS_ARGS +=  \
src/ASF/mega/boards/atmega256rfr2_xplained_pro/init.o \
src/main.o

C_DEPS +=  \
src/ASF/mega/boards/atmega256rfr2_xplained_pro/init.d \
src/main.d

C_DEPS_AS_ARGS +=  \
src/ASF/mega/boards/atmega256rfr2_xplained_pro/init.d \
src/main.d

OUTPUT_FILE_PATH +=OneWire.elf

OUTPUT_FILE_PATH_AS_ARGS +=OneWire.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler





src/ASF/mega/boards/atmega256rfr2_xplained_pro/%.o: ../src/ASF/mega/boards/atmega256rfr2_xplained_pro/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.9.2
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -DDEBUG -DBOARD=ATMEGA256RFR2_XPLAINED_PRO  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.0.106\include" -I"../src/ASF/mega/boards/atmega256rfr2_xplained_pro" -I"../src/config" -I"../src/ASF/common/boards" -I"../src/ASF/mega/utils" -I"../src/ASF/common/utils" -I"../src/ASF/mega/utils/preprocessor" -I"../src/ASF/common/services/ioport" -I"../src/ASF/mega/boards" -I"../src" -I"../src/ASF/common/services/gpio"  -O1 -fdata-sections -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax -g3 -Wall -mmcu=atmega256rfr2 -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.0.106\gcc\dev\atmega256rfr2" -c -std=gnu99 -fno-strict-aliasing -Wstrict-prototypes -Wmissing-prototypes -Werror-implicit-function-declaration -Wpointer-arith -mrelax -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

src/%.o: ../src/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.9.2
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -DDEBUG -DBOARD=ATMEGA256RFR2_XPLAINED_PRO  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.0.106\include" -I"../src/ASF/mega/boards/atmega256rfr2_xplained_pro" -I"../src/config" -I"../src/ASF/common/boards" -I"../src/ASF/mega/utils" -I"../src/ASF/common/utils" -I"../src/ASF/mega/utils/preprocessor" -I"../src/ASF/common/services/ioport" -I"../src/ASF/mega/boards" -I"../src" -I"../src/ASF/common/services/gpio"  -O1 -fdata-sections -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax -g3 -Wall -mmcu=atmega256rfr2 -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.0.106\gcc\dev\atmega256rfr2" -c -std=gnu99 -fno-strict-aliasing -Wstrict-prototypes -Wmissing-prototypes -Werror-implicit-function-declaration -Wpointer-arith -mrelax -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : 4.9.2
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="OneWire.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -mrelax -mmcu=atmega256rfr2 -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.0.106\gcc\dev\atmega256rfr2" -Wl,--relax  
	@echo Finished building target: $@
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "OneWire.elf" "OneWire.hex"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "OneWire.elf" "OneWire.eep" || exit 0
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "OneWire.elf" > "OneWire.lss"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "OneWire.elf" "OneWire.srec"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-size.exe" "OneWire.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "OneWire.elf" "OneWire.a" "OneWire.hex" "OneWire.lss" "OneWire.eep" "OneWire.map" "OneWire.srec" "OneWire.usersignatures"
	
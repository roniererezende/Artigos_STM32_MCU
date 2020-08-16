################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Multiplex_7_Seg_Biblioteca.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Multiplex_7_Seg_Biblioteca.list \

OBJCOPY_BIN += \
Multiplex_7_Seg_Biblioteca.bin \


# All Target
all: Multiplex_7_Seg_Biblioteca.elf secondary-outputs

# Tool invocations
Multiplex_7_Seg_Biblioteca.elf: $(OBJS) $(USER_OBJS) E:\Users\Roniere\ Resende\Documents\Meus\ Documentos\Estudo\ de\ Tecnologias\STM32\ Microcontrollers\Embarcados\ -\ Articles\7_Segment_Display\Project_1-Library\Multiplex_7_Seg_Biblioteca\STM32F411RETX_FLASH.ld
	arm-none-eabi-gcc -o "Multiplex_7_Seg_Biblioteca.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"E:\Users\Roniere Resende\Documents\Meus Documentos\Estudo de Tecnologias\STM32 Microcontrollers\Embarcados - Articles\7_Segment_Display\Project_1-Library\Multiplex_7_Seg_Biblioteca\STM32F411RETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Multiplex_7_Seg_Biblioteca.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Multiplex_7_Seg_Biblioteca.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Multiplex_7_Seg_Biblioteca.list"
	@echo 'Finished building: $@'
	@echo ' '

Multiplex_7_Seg_Biblioteca.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Multiplex_7_Seg_Biblioteca.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

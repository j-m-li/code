TARGET = mono
TARGET_DEFS=
DEBUG = 1
OPT = 
BINPATH = ../tmp/RISC-V\ Embedded\ GCC12/bin
OCDPATH = ../tmp/OpenOCD/OpenOCD/bin/

BUILD_DIR = ../build
C_SOURCES = \
	ch32x035_adc.c \
	ch32x035_awu.c \
	ch32x035_dbgmcu.c \
	ch32x035_dma.c \
	ch32x035_exti.c \
	ch32x035_flash.c \
	ch32x035_gpio.c \
	ch32x035_i2c.c \
	ch32x035_it.c \
	ch32x035_iwdg.c \
	ch32x035_misc.c \
	ch32x035_opa.c \
	ch32x035_pwr.c \
	ch32x035_rcc.c \
	ch32x035_spi.c \
	ch32x035_tim.c \
	ch32x035_usart.c \
	ch32x035_wwdg.c \
	core_riscv.c \
	system_ch32x035.c \
	debug.c \
	main.c

ASM_SOURCES =  \
	startup_ch32x035.S

PREFIX = riscv-wch-elf-

CC = $(BINPATH)/$(PREFIX)gcc
AS = $(BINPATH)/$(PREFIX)gcc -x assembler-with-cpp
CP = $(BINPATH)/$(PREFIX)objcopy
SZ = $(BINPATH)/$(PREFIX)size

HEX = $(CP) -O ihex
BIN = $(CP) -O binary -S

CPU = -march=rv32imac_zicsr -mabi=ilp32 -msmall-data-limit=8 
MCU = $(CPU) $(FPU) $(FLOAT-ABI)
AS_INCLUDES =
C_INCLUDES =  -I.
ASFLAGS = $(MCU) $(AS_INCLUDES) $(OPT) -Wall -fdata-sections -ffunction-sections
CFLAGS = $(MCU) $(C_INCLUDES) $(OPT) -Wall -fdata-sections -ffunction-sections
ifeq ($(DEBUG), 1)
CFLAGS += -g -gdwarf-2
endif
CFLAGS += -MMD -MP -MF"$(@:%.o=%.d)"
CFLAGS += $(TARGET_DEFS)
LDSCRIPT = Link.ld
LIBS = -lc -lm -lnosys
LIBDIR =
LDFLAGS = $(MCU) -mno-save-restore -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized -T $(LDSCRIPT) -nostartfiles -Xlinker --gc-sections -Wl,-Map=$(BUILD_DIR)/$(TARGET).map --specs=nano.specs $(LIBS)

OBJECTS = $(addprefix $(BUILD_DIR)/,$(notdir $(C_SOURCES:.c=.o)))
vpath %.c $(sort $(dir $(C_SOURCES)))

OBJECTS += $(addprefix $(BUILD_DIR)/,$(notdir $(ASM_SOURCES:.S=.o)))
vpath %.S $(sort $(dir $(ASM_SOURCES)))


all: $(BUILD_DIR)/$(TARGET).elf $(BUILD_DIR)/$(TARGET).hex $(BUILD_DIR)/$(TARGET).bin

$(BUILD_DIR)/%.o: %.c Makefile | $(BUILD_DIR)
	$(CC) -c $(CFLAGS) -Wa,-a,-ad,-alms=$(BUILD_DIR)/$(notdir $(<:.c=.lst)) $< -o $@

$(BUILD_DIR)/%.o: %.S Makefile | $(BUILD_DIR)
	$(AS) -c $(CFLAGS) $< -o $@

$(BUILD_DIR)/$(TARGET).elf: $(OBJECTS) Makefile
	$(CC) $(OBJECTS) $(LDFLAGS) -o $@
	$(SZ) $@

$(BUILD_DIR)/%.hex: $(BUILD_DIR)/%.elf | $(BUILD_DIR)
	$(HEX) $< $@

$(BUILD_DIR)/%.bin: $(BUILD_DIR)/%.elf | $(BUILD_DIR)
	$(BIN) $< $@

$(BUILD_DIR):
	mkdir $@

program: $(BUILD_DIR)/$(TARGET).elf
	sudo $(OCDPATH)/openocd -f wch-riscv.cfg -c 'init; halt; program $(BUILD_DIR)/$(TARGET).elf verify ; reset; wlink_reset_resume; exit;'

isp: $(BUILD_DIR)/$(TARGET).bin
	wchisp flash $(BUILD_DIR)/$(TARGET).bin

clean:
	-rm -fR $(BUILD_DIR)

fmt:
	clang-format --style="{BasedOnStyle: llvm,UseTab: Always,IndentWidth: 8,TabWidth: 8,SortIncludes: false}" -i *.h *.c


# dependencies
-include $(wildcard $(BUILD_DIR)/*.d)




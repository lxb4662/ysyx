TOPNAME = top
INC_PATH += /usr/include/readline/ 

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert  -Wno-fatal --trace --timescale 1ps/1ps

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

ALL = dummy

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# constraint file

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp" -or -name "*.so")
CSRCS += $(SRC_AUTO_BIND)
IMG ?=
# rules for NVBoard
#include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\"" 
LDFLAGS += -lSDL2 -lSDL2_image -lreadline -lhistory 

#$^ yi lai wen jian 
#$@ mu biao wen jian 
#$< di yi ge yi lai wen jian 

$(BIN): $(VSRCS) $(CSRCS)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

all: default
run: $(BIN)
	@echo IMG PATH :$(IMG)
	@echo $(INC_PATH)
	@echo timedatectl status
	@$^ $(IMG)
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -Wno-fatal csrc/main.cpp -top-module top --exe --build --trace --cc  -I vsrc/*.v 
	./obj_dir/Vtop
	gtkwave wave.vcd

include ../Makefile

# [SECTION] Locations
Makefile_name := $(word $(words $(MAKEFILE_LIST)),$(MAKEFILE_LIST))
Project_root := $(dir $(Makefile_name))
MAKE_FILES += $(Makefile_name)

# [SECTION] Include
C_INC += -I"$(Project_root)Source"
C_INC += -I"$(Project_root)Other"
C_INC += -I"$(Project_root)Include"  # Include the Include directory

# [SECTION] Sources
VPATH += "$(Project_root)Source"
C_SRC := $(wildcard $(Project_root)Source/*.c)

# [Section] Objects
OBJ_DIR := $(Project_root)build
SysCtrl_Objs := $(notdir $(C_SRC:%.c=$(OBJ_DIR)/%.o))
OBJ_FILES += $(addprefix $(OBJ_DIR)/, $(SysCtrl_Objs))

# [Section] Pattern Rules
$(OBJ_DIR)/%.o: $(Project_root)Source/%.c | $(OBJ_DIR)
	$(CC) -o $@ -c $< $(C_INC) -MMD -MP -MF $@.d
	@echo "Compilation successful for $<"

# Include auto-generated dependency files
-include $(OBJ_FILES:.o=.d)

# [Section] Configurations
CFLAGS += -Wall      # Enable all warnings
LDFLAGS += -lm       # Link with math library

# [Section] Default Target
all: $(OBJ_FILES)
.PHONY: all

# Create the build directory if it doesn't exist
$(OBJ_DIR):
	mkdir -p $@

# [Section] Clean Target
clean:
	rm -rf $(OBJ_DIR)
	rm -f $(MAKE_FILES)

.PHONY: clean

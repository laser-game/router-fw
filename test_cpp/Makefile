TARGET = rf-packet


######################################
# building variables
######################################
# debug build?
DEBUG = 1
# optimization
OPT = -Os


#######################################
# paths
#######################################
# build dir
BUILD_DIR = build
# source path
SOURCES_DIR = src

######################################
# source
######################################
# C++ sources
CPP_SOURCES = $(wildcard $(SOURCES_DIR)/*.cpp)

#######################################
# binaries
#######################################
CC = $(BINPATH)$(PREFIX)g++
CP = $(BINPATH)$(PREFIX)objcopy
AR = $(BINPATH)$(PREFIX)ar
SZ = $(BINPATH)$(PREFIX)size

#######################################
# CPP_FLAGS
#######################################
# macros for gcc
# C defines
CPP_DEFS =

# C includes
CPP_INCLUDES = -Iinc

# compile gcc flags
CPP_FLAGS = $(CPP_DEFS) $(CPP_INCLUDES) $(OPT) -std=c++11

ifeq ($(DEBUG), 1)
CPP_FLAGS += -g -gdwarf-2
endif

# Generate dependency information
CPP_FLAGS += -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)"

# libraries
LIBS =
LIBDIR =
LDFLAGS =

# default action: build all
all: $(BUILD_DIR)/$(TARGET).elf

#######################################
# build the application
#######################################
# list of objects
OBJECTS = $(addprefix $(BUILD_DIR)/,$(notdir $(CPP_SOURCES:.cpp=.o)))
vpath %.cpp $(sort $(dir $(CPP_SOURCES)))

$(BUILD_DIR)/%.o: %.cpp Makefile | $(BUILD_DIR)
	@$(CC) -c $(CPP_FLAGS) -Wa,-a,-ad,-alms=$(BUILD_DIR)/$(notdir $(<:.cpp=.lst)) $< -o $@

$(BUILD_DIR)/$(TARGET).elf: $(OBJECTS) Makefile
	@$(CC) $(OBJECTS) $(LDFLAGS) -o $@
	@$(SZ) $@

$(BUILD_DIR):
	mkdir $@

make_and_run: all
	./$(BUILD_DIR)/$(TARGET).elf


#######################################
# clean up
#######################################
clean:
	-rm -fR .dep $(BUILD_DIR)

#######################################
# dependencies
#######################################
-include $(shell mkdir .dep 2>/dev/null) $(wildcard .dep/*)

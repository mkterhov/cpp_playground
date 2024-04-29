# Makefile for C++ project

# Compiler to use
CXX := g++

# Compiler flags
CXXFLAGS := -std=c++17 -Wall -Wextra

# Source directory
SRC_DIR := cpp_playground

# Include directory
INCLUDE_DIR := include

# Build directory for object files
BUILD_DIR := build

# Bin directory for executable
BIN_DIR := bin

# Source files
SOURCES := $(wildcard $(SRC_DIR)/*.cpp)

# Object files
OBJECTS := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SOURCES))

# Executable name
TARGET := $(BIN_DIR)/program

# Default rule
all: $(TARGET)

# Create the build and bin directories if they don't exist
$(BUILD_DIR) $(BIN_DIR):
	mkdir -p $@

# Rule for linking the final executable
$(TARGET): $(OBJECTS) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) $^ -o $@

# Rule for compiling source files to object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Clean rule
clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

# PHONY targets
.PHONY: all clean

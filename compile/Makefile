# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -I../src
LDFLAGS = -lm

# Directories
SRC_DIR = ../src
BUILD_DIR = ../build

# Files
OBJS = $(BUILD_DIR)/mymathlib.o $(BUILD_DIR)/test_math.o
TARGET = test_math

# Default target
all: $(TARGET)

# Link the final executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LDFLAGS)

# Compile source files into build dir
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Run the tests
run: all
	./$(TARGET)

# Remove build files
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

.PHONY: all clean run

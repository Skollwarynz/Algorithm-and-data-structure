# Compiler name
CC = gcc

# Directories for source files and header files
SRC_DIR = Linked_list/src
INC_DIR = Linked_list/include

# Compilation flags: Enable all warnings and best practices
CFLAGS = -Wall -Wextra -Wpedantic -Werror -I$(INC_DIR)

# Find all .c files in the src directory and generate corresponding object files
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:.c=.o)

# Name of the final executable
TARGET = program

# Main rule to build the executable
all: $(TARGET)

# Compile the executable from object files
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to compile each .c file into an .o file
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to clean up object files and the executable
clean:
	rm -f $(OBJS) $(TARGET)

# Rule to rebuild the project from scratch
rebuild: clean all

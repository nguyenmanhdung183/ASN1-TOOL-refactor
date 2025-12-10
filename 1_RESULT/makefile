# Compiler & flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Output binary
TARGET = stub.exe

# Source files
SRCS = main.c output_main.c

# Headers (phụ, không compile)
HDRS = MAIN_COMPOSE.h MAIN_STRUCT.h output_main.h stub.h

# Object files
OBJS = $(SRCS:.c=.o)

# Default rule
all: $(TARGET)

# Link
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compile .c → .o
%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean

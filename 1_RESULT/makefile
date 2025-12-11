# Compiler & flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Output binary
TARGET = main

# Source files
SRCS = main.c output_main.c

# Headers
HDRS = MAIN_COMPOSE.h MAIN_STRUCT.h output_main.h stub.h

# Object files
OBJS = $(SRCS:.c=.o)

# Default: build + run
all: $(TARGET)
	./$(TARGET)

# Link
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Build each .c
%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $< -o $@

# Manual run
run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean run

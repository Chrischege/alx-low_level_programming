# Makefile

CC = gcc
CFLAGS = -Wall

# List your source files
SRCS = 1-memcpy.c 1-strncat.c 100-atoi.c 2-strchr.c 2-strlen.c 3-islower.c 3-puts.c 3-stcmp.c 3-strspn.c 4-isalpha.c 4-strbrk.c 5-srstr.c 6-abs.c 9-strcpy.c _putchar.c

# Generate corresponding object file names
OBJS = $(SRCS:.c=.o)

# The default target is to build all object files
all: $(OBJS)

# Rule to build individual object files from source files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule to remove generated files
clean:
	rm -f $(OBJS)


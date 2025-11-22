CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRC = main.cpp
OBJ = $(SRC:.c=.o)
TARGET = main.exe
all: $(TARGET)
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ) $(TARGET)
.PHONY: all clean
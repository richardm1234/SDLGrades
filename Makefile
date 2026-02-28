.PHONY: all clean
CC=gcc
TARGET=main

all:
	$(CC) main.c -o $(TARGET) -lSDL2

clean: 
	rm $(TARGET)
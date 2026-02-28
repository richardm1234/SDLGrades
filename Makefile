.PHONY: all clean
CC=gcc
TARGET=main

all:
	$(CC) main.c -o $(TARGET) -lSDL2 -lSDL2_ttf

clean: 
	rm $(TARGET)
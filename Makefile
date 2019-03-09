CC=g++
CFLAGS+=-Wall -Wextra
BIN_DIR=bin

main:
	mkdir -p bin
	$(CC) $(CFLAGS) Racional.cpp Inteiro.cpp Natural.cpp main.cpp -o bin/main

.PHONY: clean

clean:
	rm $(BIN_DIR)/*

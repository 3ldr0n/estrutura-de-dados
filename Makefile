CC=clang
CFLAGS+=-Wall -Wextra -Werror
BIN_DIR=bin

main:
	mkdir -p bin
	$(CC) $(CFLAGS) -lstdc++ Racional.cpp Inteiro.cpp Natural.cpp main.cpp -o bin/main

.PHONY: clean

clean:
	rm $(BIN_DIR)/*

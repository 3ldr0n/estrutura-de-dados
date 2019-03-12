CC=clang
CFLAGS+=-Wall -Wextra -Werror -lstdc++
BIN_DIR=bin

main:
	mkdir -p bin
	$(CC) $(CFLAGS) Complexo.cpp Real.cpp Racional.cpp Inteiro.cpp Natural.cpp main.cpp -o bin/main

.PHONY: clean

clean:
	rm $(BIN_DIR)/*

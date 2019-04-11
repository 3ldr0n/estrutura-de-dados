CC=clang
CFLAGS+=-Wall -Wextra -Werror -lstdc++ -I./include
BIN_DIR=bin
SRC_DIR=src
SRC:=$(wildcard $(SRC_DIR)/*.cpp)

main:
	mkdir -p bin
	$(CC) $(CFLAGS) $(SRC) -o bin/main

triangulo:
	$(CC) $(CFLAGS) src/Triangulo.cpp src/triangulo_main.cpp -o bin/triangulo_main

vetor:
	$(CC) $(CFLAGS) src/Vetor.cpp src/main_vetor.cpp -o bin/vetor

.PHONY: clean

clean:
	rm $(BIN_DIR)/*

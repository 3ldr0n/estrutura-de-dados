CC=clang++-7
CFLAGS+=-Wall -Wextra -Werror -I./include
NUMEROS_SRC:=$(wildcard *.cpp)

all:
	mkdir -p bin
	$(CC) $(CFLAGS) $(NUMEROS_SRC) -o bin/numeros_test

.PHONY: clean

clean:
	rm $(BIN_DIR)/*

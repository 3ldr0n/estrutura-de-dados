CC=clang++-7
CFLAGS+=-Wall -Wextra -Werror

all:
	mkdir -p bin
	$(CC) $(CFLAGS) No.cpp ArvoreBinaria.cpp ArvoreBinaria_test.cpp -o bin/ArvoreBinaria_test

lab:
	mkdir -p bin
	$(CC) $(CFLAGS) No.cpp ArvoreBinaria.cpp main.cpp -o bin/main

.PHONY: clean

clean:
	rm $(BIN_DIR)/*

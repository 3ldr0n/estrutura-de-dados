CC=clang++-7
CFLAGS+=-Wall -Wextra -Werror -I./include

all:
	mkdir -p bin
	$(CC) $(CFLAGS) Fila_test.cpp -o bin/Fila_test

.PHONY: clean

clean:
	rm $(BIN_DIR)/*

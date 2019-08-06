CC=clang++-7
CFLAGS+=-Wall -Wextra -Werror

all:
	mkdir -p bin
	$(CC) $(CFLAGS) No.cpp ArvoreBinaria.cpp ArvoreBinaria_test.cpp -o bin/ArvoreBinaria_test

.PHONY: clean

clean:
	rm $(BIN_DIR)/*

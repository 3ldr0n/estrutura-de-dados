CC=clang++-7
CFLAGS+=-Wall -Wextra -Werror -I./include

all:
	mkdir -p bin
	$(CC) $(CFLAGS) Monomio.cpp Polinomio.cpp Polinomio_test.cpp -o bin/Polinomio_test

.PHONY: clean

clean:
	rm $(BIN_DIR)/*

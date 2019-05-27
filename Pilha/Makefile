CC=clang++-7
CFLAGS+=-Wall -Wextra -Werror -I./include

all:
	mkdir -p bin
	$(CC) $(CFLAGS) Pilha_test.cpp -o bin/Pilha_test

simples:
	mkdir -p bin
	$(CC) $(CFLAGS) PilhaSimples_test.cpp -o bin/PilhaSimples_test

vetor:
	mkdir -p bin
	$(CC) $(CFLAGS) PilhaVetor_test.cpp -o bin/PilhaVetor_test

.PHONY: clean

clean:
	rm $(BIN_DIR)/*

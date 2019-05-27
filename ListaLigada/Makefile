CC=clang++-7
CFLAGS+=-Wall -Wextra -Werror -I./include

lista_ligada:
	mkdir -p bin
	$(CC) $(CFLAGS) ListaLigada_test.cpp -o bin/ListaLigada_test

.PHONY: clean

clean:
	rm $(BIN_DIR)/*

CC=clang++-7
CFLAGS+=-Wall -Wextra -Werror -I./include

lista_duplamente_ligada:
	mkdir -p bin
	$(CC) $(CFLAGS) ListaDuplamenteLigada_test.cpp -o bin/ListaDuplamenteLigada_test

.PHONY: clean

clean:
	rm $(BIN_DIR)/*

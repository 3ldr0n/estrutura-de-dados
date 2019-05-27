CC=clang++-7
CFLAGS+=-Wall -Wextra -Werror -I./include

vetor:
	mkdir -p bin
	$(CC) $(CFLAGS) Vetor_test.cpp -o bin/vetor

.PHONY: clean

clean:
	rm $(BIN_DIR)/*

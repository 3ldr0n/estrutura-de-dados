CC=clang++-7
CFLAGS+=-Wall -Wextra -Werror -I./include

all:
	mkdir -p bin
	$(CC) $(CFLAGS) Solver_test.cpp -o bin/Solver_test

.PHONY: clean

clean:
	rm $(BIN_DIR)/*

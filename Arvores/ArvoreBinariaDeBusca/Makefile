CC=clang++-7
CCFLAGS+=-Wall -Wextra -Werror
SRC=$(wildcard *.cpp)

all:
	mkdir -p bin
	$(CC) $(CCFLAGS) $(SRC) -o bin/arvore

clean:
	rm $(BIN_DIR)/*

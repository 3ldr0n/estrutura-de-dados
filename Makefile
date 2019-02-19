CC=g++
CFLAGS+=-Wall -Wextra
BIN_DIR=bin

%:
	$(CC) $(CFLAGS) $@.cpp -o $(BIN_DIR)/$@

.PHONY: clean

clean:
	rm $(BIN_DIR)/*

CC=clang++-7
CFLAGS+=-Wall -Wextra -Werror
COMMON=Node.cpp BPlusTree.cpp

public_test:
	mkdir -p bin
	$(CC) $(CFLAGS) $(COMMON) BPlusTreeTest.cpp -o bin/test

test: public_test
	@echo "Running test"
	@./bin/test
	@rm -rf bin/*

.PHONY: clean

clean:
	rm bin/*

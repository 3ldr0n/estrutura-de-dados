CC=clang++
FLGS=-Wall -Werror -Wextra
COMMON=AVLNode.cpp AVLTree.cpp

public_test:
	mkdir -p bin
	$(CC) $(FLGS) $(COMMON) AVLTreeTest.cpp -o bin/public_test

private_test:
	mkdir -p bin
	$(CC) $(FLGS) $(COMMON) AVLTreePrivateTest.cpp -o bin/private_test

test: public_test private_test
	@echo "Interface test"
	@./bin/public_test
	@echo "Private test"
	@./bin/private_test
	@rm -rf bin/*

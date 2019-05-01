CC=clang
CFLAGS+=-Wall -Wextra -Werror -lstdc++ -I./include
BIN_DIR=bin
SRC_DIR=src
NUM_DIR=$(SRC_DIR)/numeros
EST_DIR=$(SRC_DIR)/estruturas
NUMEROS_SRC:=$(wildcard $(NUM_DIR)/*.cpp)

numeros:
	mkdir -p bin
	$(CC) $(CFLAGS) $(NUMEROS_SRC) -o bin/num_main

estruturas: vetor

vetor:
	mkdir -p bin
	$(CC) $(CFLAGS) $(EST_DIR)/Vetor.cpp $(EST_DIR)/main_vetor.cpp \
					-o bin/vetor
lista_ligada:
	mkdir -p bin
	$(CC) $(CFLAGS) $(EST_DIR)/main_lista_ligada.cpp -o bin/listaLigada

lista_duplamente_ligada:
	mkdir -p bin
	$(CC) $(CFLAGS) $(EST_DIR)/main_lista_duplamente_ligada.cpp -o bin/listaDuplamenteLigada

polinomio:
	mkdir -p bin
	$(CC) $(CFLAGS) $(EST_DIR)/Polinomio.cpp $(EST_DIR)/main_polinomio.cpp -o bin/polinomio

.PHONY: clean

clean:
	rm $(BIN_DIR)/*

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
vetor_numeros:
	mkdir -p bin
	$(CC) $(CFLAGS) $(NUM_DIR)/Natural.cpp $(NUM_DIR)/Inteiro.cpp \
 					$(NUM_DIR)/Racional.cpp $(NUM_DIR)/Real.cpp \
 					$(NUM_DIR)/Complexo.cpp \
					$(EST_DIR)/Vetor.cpp $(EST_DIR)/main_vetor.cpp \
					-o bin/vetor

lista_ligada:
	mkdir -p bin
	$(CC) $(CFLAGS) $(EST_DIR)/ListaLigada.cpp $(EST_DIR)/main_lista_ligada.cpp \
					-o bin/listaLigada

.PHONY: clean

clean:
	rm $(BIN_DIR)/*

#ifndef TADVETOR_H
#define TADVETOR_H

#include <iostream>
#include <string>

#define TAMANHO 5

class TadVetor {
private:
	int numeros[TAMANHO];
public:
	TadVetor();
	~TadVetor();
	void imprimir();
	int incluir(int indice, int valor);
	int excluir(int indice);
	int busca(int el);
	void troca(int idx1, int idx2);
	int maior();
	int menor();
	void sort();
	void sort_decrescente();
	void sort_segundo_vetor();
};

#endif

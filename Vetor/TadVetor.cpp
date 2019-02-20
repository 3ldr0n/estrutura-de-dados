#include "TadVetor.hpp"

TadVetor::TadVetor() {
	for (int i = 0; i < TAMANHO; i++) {
		numeros[i] = 0;
	}
}
TadVetor::~TadVetor() {}

void TadVetor::imprimir()
{
	std::cout << "\n[ ";
	for (int i = 0; i < TAMANHO; i++) {
		std::cout << numeros[i] << " ";
	}
	std::cout << "]";
}

int TadVetor::incluir(int indice, int valor)
{
	// verifica se o valor e´ maior que zero
	if (valor < 0) {
		std::cout << "ERRO: o valor tem que ser maior que zero." << std::endl;
		return 1;
	}
	// verifica se o indice e´ valido
	if (indice < 0 || indice > TAMANHO - 1) {
		std::cout << "ERRO: o indice esta´ fora dos limites do vetor." << std::endl;
		return 1;
	}
	// verifica se a posicao ja´ esta´ ocupada.
	if (numeros[indice] > 0) {
		std::cout <<  "ERRO: posicao ocupada." << std::endl;
		return 1;
	}
	// passou por todas as verificacoes: inserir
	numeros[indice] = valor;
	std::cout << "Inclusao bem sucedida." << std::endl;
	return 0;
}

int TadVetor::excluir(int indice)
{
	// verifica se o indice e´ valido
	if (indice < 0 || indice > TAMANHO - 1) {
		return -1;
	}
	int numero = numeros[indice];
	numeros[indice] = 0;
	return numero;
}

int TadVetor::busca(int el)
{
	for (int i = 0;i < TAMANHO; i++) {
		if (el == numeros[i])
			return i;
	}
	
	return -1;
}

void TadVetor::troca(int idx1, int idx2)
{
	int temp = numeros[idx1];
	numeros[idx1] = numeros[idx2];
	numeros[idx2] = temp;
}

int TadVetor::maior()
{
	int maior_numero = numeros[0];
	for (int i = 1;i < TAMANHO;i++) {
		if (maior_numero < numeros[i]) {
			maior_numero = numeros[i];
		}
	}
	return maior_numero;
}

int TadVetor::menor()
{
	int menor_numero = numeros[0];
	for (int i = 1;i < TAMANHO;i++) {
		if (menor_numero > numeros[i]) {
			menor_numero = numeros[i];
		}
	}
	return menor_numero;
}

void TadVetor::sort()
{
	for (int i = 0;i < TAMANHO;i++) {
		for (int j = 0;j < TAMANHO-1;j++) {
			if (numeros[j] > numeros[j+1]) {
				int temp = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = temp;
			}
		}
	}
}

void TadVetor::sort_decrescente()
{
	for (int i = 0;i < TAMANHO;i++) {
		for (int j = 0;j < TAMANHO-1;j++) {
			if (numeros[j] < numeros[j+1]) {
				int temp = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = temp;
			}
		}
	}
}

void TadVetor::sort_segundo_vetor()
{
	int copia[TAMANHO];
	for (int i = 0;i < TAMANHO;i++) {
		for (int j = 0;j < TAMANHO-1;j++) {
			if (numeros[j] > numeros[j+1]) {
				int temp = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = temp;
			}
		}
		copia[i] = numeros[i];
		std::cout << copia[i] << " ";
	}
}

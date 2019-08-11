#include <sstream>

#include "ArvoreBinariaBusca.h"
#include "Pilha.h"

ArvoreBinariaBusca::ArvoreBinariaBusca()
{
	raiz = NULL;
}

bool ArvoreBinariaBusca::vazia()
{
	return raiz == NULL;
}

void ArvoreBinariaBusca::incluirNo(int valor)
{
	No *no = new No(valor);

	if (vazia()) {
		raiz = no;
		return;
	}

	No *cursor = raiz;

	int valorAux;
	while (cursor != NULL) {
        valorAux = cursor->getValor();

		if (valor == valorAux)
			break;

		if (valor < valorAux) {
			if (cursor->getEsquerda() == NULL) {
				cursor->setEsquerda(no);
				break;
			} else {
				cursor = cursor->getEsquerda();
			}
		} else if (valor > valorAux) {
			if (cursor->getDireita() == NULL) {
				cursor->setDireita(no);
				break;
			} else {
				cursor = cursor->getDireita();
			}
		}
	}
}

No *ArvoreBinariaBusca::localizarNo(int valor)
{
	if (vazia()) {
        std::cout << "A arvore está vazia." << std::endl;
        return NULL;
	}

	No *cursor = raiz;
	int valorAux;
	while (cursor != NULL) {
		valorAux = cursor->getValor();
		if (valor == valorAux) {
			break;
		} else if (valor < valorAux) {
			if (cursor->getEsquerda() == NULL) {
                return NULL;
			} else {
				cursor = cursor->getEsquerda();
			}
		} else if (valor > valorAux) {
			if (cursor->getDireita() == NULL) {
				return NULL;
			} else {
				cursor = cursor->getDireita();
			}
		}
	}

    return cursor;
}


No *ArvoreBinariaBusca::excluirNo(int valor)
{
    std::cout << valor << std::endl;
    return new No(valor);
}

void ArvoreBinariaBusca::imprimirEmOrdem()
{
	if (vazia()) {
        std::cout << "*** Arvore vazia ***" << std::endl;
        return;
	}

	Pilha pilha;
	pilha.push(raiz);
	while (!pilha.vazia()){
		NoPilha *no2 = pilha.pop();
		No *noAbb = no2->getNo();
        std::cout << noAbb->getValor() << " - ";
		if (noAbb->getDireita() != NULL) {
			pilha.push(noAbb->getDireita());
		}
		if (noAbb->getEsquerda() != NULL) {
			pilha.push(noAbb->getEsquerda());
		}
	}
    std::cout << "FIM" << std::endl;
}

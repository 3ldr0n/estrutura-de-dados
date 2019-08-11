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

void ArvoreBinariaBusca::incluirNo(int vl)
{
	No *no = new No(vl);
	No *cursor = this->raiz;

	//= se raiz for nulo -> insere no raiz.
	if (cursor == NULL) {
		raiz = no;
		return;
	}

	int vlAux;
	while (true) {
        vlAux = cursor->getValor();

		//= nao pode haver valor repetido.
		if (vlAux == vl)
			return;
		//= o valor é menor que o do nó corrente -> verificar à esquerda
		if (vl < vlAux) {
			//= se o filho esquerdo for nulo -> insere o novo nó como filho esquerdo.
			//= caso contrario -> move cursor para filho esquerdo
			if (cursor->getEsquerda() == NULL) {
				cursor->setEsquerda(no);
				break;
			} else {
				cursor = cursor->getEsquerda();
			}
		}
		//= o valor é maior que o do nó corrente -> verificar à direita
		else if (vl > vlAux) {
			//= se o filho direito for nulo -> insere o novo nó como filho direito.
			//= caso contrario -> move cursor para filho esquerdo
			if (cursor->getDireita() == NULL) {
				cursor->setDireita(no);
				break;
			} else {
				cursor = cursor->getDireita();
			}
		}
	}
}

No *ArvoreBinariaBusca::localizarNo(int vl)
{
	if (this->vazia()) {
        std::cout << "A arvore está vazia." << std::endl;
        return NULL;
	}
	No *cursor = this->raiz;

	int vlAux;

	while (true) {
		vlAux = cursor->getValor();
		if (vl == vlAux) {
			break;
		} else if (vl < vlAux) {
			if (cursor->getEsquerda() == NULL) {
                return NULL;
			} else {
				cursor = cursor->getEsquerda();
			}
		} else if (vl > vlAux) {
			if (cursor->getDireita() == NULL) {
				return NULL;
			} else {
				cursor = cursor->getDireita();
			}
		}
	}

    return cursor;
}


No *ArvoreBinariaBusca::excluirNo(int vl)
{
    std::cout << vl << std::endl;
    return new No(vl);
}

void ArvoreBinariaBusca::imprimirEmOrdem()
{
	if (vazia()) {
        std::cout << "*** Arvore vazia ***" << std::endl;
        return;
	}

	Pilha pilha;
	pilha.push(this->raiz);
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

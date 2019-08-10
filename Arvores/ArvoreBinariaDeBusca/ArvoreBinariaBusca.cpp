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
		//= o valor e' menor que o do no' corrente -> verificar 'a esquerda
		if (vl < vlAux) {
			//= se o filho esquerdo for nulo -> insere o novo no' como filho esquerdo.
			//= caso contrario -> move cursor para filho esquerdo
			if (cursor->getEsquerda() == NULL) {
				cursor->setEsquerda(no);
				break;
			} else {
				cursor = cursor->getEsquerda();
			}
		}
		//= o valor e' maior que o do no' corrente -> verificar 'a direita
		else if (vl > vlAux) {
			//= se o filho direito for nulo -> insere o novo no' como filho direito.
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

std::string ArvoreBinariaBusca::localizarNo(int vl)
{

    std::stringstream ret;
	ret << "inicio";

	if (this->vazia()) {
		ret << "A arvore esta' vazia.";
	} else {
		No *cursor = this->raiz;

		int vlAux;

		while (true) {
			vlAux = cursor->getValor();
			if (vl == vlAux) {
				break;
			} else if (vl < vlAux) {
				if (cursor->getEsquerda() == NULL) {
					ret << "\n*** NAO LOCALIZADO ***";
					break;
				} else {
					ret << "\n--- " << vlAux << " esq";
					cursor = cursor->getEsquerda();
				}
			} else if (vl > vlAux) {
				if (cursor->getDireita() == NULL) {
					ret << "\n*** NAO LOCALIZADO ***";
					break;
				} else {
					ret << "\n--- " << vlAux << " dir";
					cursor = cursor->getDireita();
				}
			}
		}
	}

	return ret.str();
}


No *ArvoreBinariaBusca::excluirNo(int vl)
{

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

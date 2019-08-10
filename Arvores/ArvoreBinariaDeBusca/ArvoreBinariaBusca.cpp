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


std::string ArvoreBinariaBusca::incluirNo(int vl)
{
	No *no = new No(vl);

	//==========================================================================
	// PERCORRER A ARVORE PARA LOCALIZAR A POSICAO DO NOVO NO'
	//==========================================================================

	No *cursor = this->raiz;

	//= se raiz for nulo -> insere no raiz.
	if (cursor == NULL) {
		raiz = no;
		return "Arvore vazia. Inserido na raiz.";
	} else {
		int vlAux;
		while (true) {
            vlAux = cursor->getValor();

			//= nao pode haver valor repetido.
			if (vlAux == vl) {
				return "Valor ja' incluso na arvore.";
			}
			//= o valor e' menor que o do no' corrente -> verificar 'a esquerda
			else if (vl < vlAux) {
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

		return "Inserido com sucesso.";
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
			// if (cursor == this->raiz) {
			// 	ret << "\n--- raiz " << vlAux;
			// }

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

std::string ArvoreBinariaBusca::imprimirEmOrdem()
{
    std::stringstream ret;

	if (vazia()) {
		ret << "*** Arvore vazia ***";
	} else {
		Pilha pilha;
		pilha.push(this->raiz);
		while (!pilha.vazia()){
			NoPilha *no2 = pilha.pop();
			No *noAbb = no2->getNo();
			ret << noAbb->getValor() << " - ";
			if (noAbb->getDireita() != NULL) {
				pilha.push(noAbb->getDireita());
			}
			if (noAbb->getEsquerda() != NULL) {
				pilha.push(noAbb->getEsquerda());
			}
		}
		ret << "FIM";
	}

	return ret.str();
}

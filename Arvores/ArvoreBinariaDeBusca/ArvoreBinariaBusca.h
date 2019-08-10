#ifndef ARVORE_BINARIA_BUSCA_H
#define ARVORE_BINARIA_BUSCA_H

#include "No.h"

class ArvoreBinariaBusca {
private:
	No *raiz;
public:
	ArvoreBinariaBusca();
	bool vazia();
    std::string incluirNo(int vl);
    std::string localizarNo(int vl);
	No *excluirNo(int vl);
    std::string imprimirEmOrdem();
};

#endif

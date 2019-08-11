#include "ArvoreBinaria.h"

int main()
{
    ArvoreBinaria arvore;
    arvore.insere(7);
    arvore.insere(5);
    arvore.insere(10);
    arvore.insere(3);
    arvore.insere(4);
    arvore.insere(8);
    arvore.insere(19);

    arvore.printEmOrdem(arvore.getRaiz());
    arvore.printPreOrdem(arvore.getRaiz());

    return 0;
}

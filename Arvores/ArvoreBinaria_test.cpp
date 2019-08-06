#include "ArvoreBinaria.h"

int main()
{
    ArvoreBinaria arvore;
    arvore.insere(10);
    arvore.insere(11);
    arvore.insere(5);
    arvore.insere(6);
    arvore.insere(15);
    arvore.insere(14);

    arvore.printEmOrdem(arvore.getRaiz());

    return 0;
}

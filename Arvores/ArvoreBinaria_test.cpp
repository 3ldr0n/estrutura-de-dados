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
    std::cout << std::endl;
    arvore.printPreOrdem(arvore.getRaiz());
    std::cout << std::endl;
    arvore.printPosOrdem(arvore.getRaiz());
    std::cout << std::endl;

    std::cout << arvore.contaNos(arvore.getRaiz()) << std::endl;

    std::cout << arvore.media(arvore.getRaiz()) << std::endl;

    std::list<No *> nosMaiores = arvore.nosMaioresQueMedia(arvore.getRaiz());
    for (auto no : nosMaiores)
        std::cout << no->getChave() << " ";
    std::cout << std::endl;

    std::cout << arvore.encontrar(4)->getChave() << std::endl;

    arvore.remove(4);

    arvore.printEmOrdem(arvore.getRaiz());
    std::cout << std::endl;

    return 0;
}

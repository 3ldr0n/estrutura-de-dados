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

    std::cout << "Árvore em ordem:" << std::endl;
    arvore.printEmOrdem(arvore.getRaiz());
    std::cout << std::endl;
    std::cout << "Árvore em pre ordem:" << std::endl;
    arvore.printPreOrdem(arvore.getRaiz());
    std::cout << std::endl;
    std::cout << "Árvore em pos ordem:" << std::endl;
    arvore.printPosOrdem(arvore.getRaiz());
    std::cout << std::endl;

    std::cout << "Número de nós:" << std::endl;
    std::cout << arvore.contaNos(arvore.getRaiz()) << std::endl;

    std::cout << "Média da árvore:" << std::endl;
    std::cout << arvore.media(arvore.getRaiz()) << std::endl;

    std::cout << "Nós maiores que a média da árvore:" << std::endl;
    std::list<No *> nosMaiores = arvore.nosMaioresQueMedia(arvore.getRaiz());
    for (auto no : nosMaiores)
        std::cout << no->getChave() << " ";
    std::cout << std::endl;

    std::cout << "Encontrando o elemento 4:" << std::endl;
    std::cout << arvore.encontrar(4)->getChave() << std::endl;

    ArvoreBinaria arvore_remocao;
    arvore_remocao.insere(10);
    arvore_remocao.insere(5);
    std::cout << "Antes de remover: " << std::endl;
    arvore_remocao.printEmOrdem(arvore_remocao.getRaiz());
    std::cout << std::endl;

    arvore_remocao.remove(5);

    std::cout << "Depois de remover: " << std::endl;
    arvore_remocao.printEmOrdem(arvore_remocao.getRaiz());
    std::cout << std::endl;

    No *menor = arvore.menor();
    std::cout << "Menor: " << menor->getChave() << std::endl;

    int altura = arvore.altura();
    std::cout << "Altura da arvore: " << altura << std::endl;

    return 0;
}

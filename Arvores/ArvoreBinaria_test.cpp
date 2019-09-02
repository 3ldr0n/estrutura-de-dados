#include "ArvoreBinaria.cpp"

#include <cassert>

void test_vazia()
{
    ArvoreBinaria<int> arvore;
    assert(arvore.vazia() == true);
}

void test_insere()
{
    ArvoreBinaria<int> arvore;
    arvore.insere(7);
    arvore.insere(5);
    arvore.insere(10);
    arvore.insere(3);
    arvore.insere(4);
    arvore.insere(8);
    arvore.insere(19);

    assert(arvore.vazia() == false);
    assert(arvore.menor()->getChave() == 3);
}

void test_contaNos()
{
    ArvoreBinaria<int> arvore;
    arvore.insere(7);
    arvore.insere(5);
    arvore.insere(10);
    arvore.insere(3);
    arvore.insere(4);

    assert(arvore.contaNos(arvore.getRaiz()) == 5);
}

int main()
{
    ArvoreBinaria<int> *arvore;
    test_insere();
    test_contaNos();

    std::cout << "Árvore em ordem:" << std::endl;
    arvore->printEmOrdem(arvore->getRaiz());
    std::cout << std::endl;
    std::cout << "Árvore em pre ordem:" << std::endl;
    arvore->printPreOrdem(arvore->getRaiz());
    std::cout << std::endl;
    std::cout << "Árvore em pos ordem:" << std::endl;
    arvore->printPosOrdem(arvore->getRaiz());
    std::cout << std::endl;

    std::cout << "Média da árvore:" << std::endl;
    std::cout << arvore->media(arvore->getRaiz()) << std::endl;

    std::cout << "Nós maiores que a média da árvore:" << std::endl;
    std::list<No<int> *> nosMaiores = arvore->nosMaioresQueMedia(arvore->getRaiz());
    for (auto no : nosMaiores)
        std::cout << no->getChave() << " ";
    std::cout << std::endl;

    std::cout << "Encontrando o elemento 4:" << std::endl;
    std::cout << arvore->encontrar(4)->getChave() << std::endl;

    ArvoreBinaria<int> arvore_remocao;
    arvore_remocao.insere(10);
    arvore_remocao.insere(5);
    std::cout << "Antes de remover: " << std::endl;
    arvore_remocao.printEmOrdem(arvore_remocao.getRaiz());
    std::cout << std::endl;

    arvore_remocao.remove(5);

    std::cout << "Depois de remover: " << std::endl;
    arvore_remocao.printEmOrdem(arvore_remocao.getRaiz());
    std::cout << std::endl;

    No<int> *menor = arvore->menor();
    std::cout << "Menor: " << menor->getChave() << std::endl;

    int altura = arvore->altura();
    std::cout << "Altura da arvore: " << altura << std::endl;

    return 0;
}

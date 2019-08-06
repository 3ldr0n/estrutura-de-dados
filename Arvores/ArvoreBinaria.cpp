#include "ArvoreBinaria.h"

ArvoreBinaria::ArvoreBinaria()
{
    raiz = NULL;
}

ArvoreBinaria::~ArvoreBinaria()
{
    delete raiz;
}

No *ArvoreBinaria::getRaiz() const
{
    return raiz;
}

void ArvoreBinaria::insereNo(No *no, int chave)
{
    if (chave > no->getChave())
        insereDireita(no, chave);
    else if (chave < no->getChave())
        insereEsquerda(no, chave);
}

void ArvoreBinaria::insereDireita(No *no, int chave)
{
    if (no->getDireita() == NULL) {
        No *novoNo = new No(chave);
        no->setDireita(novoNo);
    } else {
        insereNo(no->getDireita(), chave);
    }
}

void ArvoreBinaria::insereEsquerda(No *no, int chave)
{
    if (no->getEsquerda() == NULL) {
        No *novoNo = new No(chave);
        no->setEsquerda(novoNo);
    } else {
        insereNo(no->getEsquerda(), chave);
    }
}

void ArvoreBinaria::insere(int chave)
{
    if (raiz == NULL)
        raiz = new No(chave);
    else
        insereNo(raiz, chave);
}

void ArvoreBinaria::print() const
{
    No *aux;
    for (aux = raiz;aux != NULL;aux = aux->getEsquerda())
        std::cout << aux->getChave() << std::endl;

    for (aux = raiz->getDireita();aux != NULL;aux = aux->getDireita())
        std::cout << aux->getChave() << std::endl;
}

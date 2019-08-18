#include "No.h"

No::No(int chave)
{
    this->chave = chave;
    esquerda = NULL;
    direita = NULL;
}

No::~No()
{
    delete esquerda;
    delete direita;
}

int No::getChave() const
{
    return chave;
}

No* No::getEsquerda() const
{
    return esquerda;
}

No* No::getDireita() const
{
    return direita;
}

void No::setEsquerda(No *no)
{
    esquerda = no;
}

void No::setDireita(No *no)
{
    direita = no;
}

bool No::eFolha() const
{
    return direita == NULL &&
        esquerda == NULL;
}

No *No::pegaPai(No *raiz) const
{
    if (raiz == NULL)
        return NULL;

    if (raiz->getEsquerda()->getChave() == chave ||
        raiz->getDireita()->getChave() == chave)
        return raiz;

    if (raiz->getDireita() == NULL)
        return pegaPai(raiz->getEsquerda());

    return pegaPai(raiz->getDireita());
}

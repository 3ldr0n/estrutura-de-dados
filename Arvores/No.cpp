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

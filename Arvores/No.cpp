#include "No.h"

template <class E>
No<E>::No(E chave)
{
    this->chave = chave;
    esquerda = NULL;
    direita = NULL;
}

template <class E>
No<E>::~No()
{
    delete esquerda;
    delete direita;
}

template <class E>
E No<E>::getChave() const
{
    return chave;
}

template <class E>
No<E>* No<E>::getEsquerda() const
{
    return esquerda;
}

template <class E>
No<E>* No<E>::getDireita() const
{
    return direita;
}

template <class E>
void No<E>::setEsquerda(No<E> *no)
{
    esquerda = no;
}

template <class E>
void No<E>::setDireita(No<E> *no)
{
    direita = no;
}

template <class E>
int No<E>::getId() const
{
    return id;
}

template <class E>
bool No<E>::eFolha() const
{
    return direita == NULL &&
        esquerda == NULL;
}

template <class E>
No<E> *No<E>::pegaPai(No<E> *raiz) const
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

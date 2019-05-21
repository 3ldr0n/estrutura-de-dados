#include "PilhaSimples.h"

template <class E>
Pilha<E>::Pilha()
{
    p = new ListaLigada<E>();
}

template <class E>
Pilha<E>::~Pilha()
{
    delete p;
}

template <class E>
bool Pilha<E>::vazia()
{
    return p->vazia();
}

template <class E>
void Pilha<E>::empilha(const E &e)
{
    p->insereInicio(e);
}

template <class E>
const E& Pilha<E>::topo() const
{
    return p->inicio();
}

template <class E>
void Pilha<E>::desempilha()
{
    p->removeInicio();
}

template <class E>
void Pilha<E>::print() const
{
    p->print();
}

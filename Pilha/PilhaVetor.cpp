#include "PilhaVetor.h"

template <class E>
Pilha<E>::Pilha(int t)
{
    p = new Vetor<E>(t);
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
    p->insereFinal(e);
}

template <class E>
const E& Pilha<E>::topo() const
{
    return p->final();
}

template <class E>
void Pilha<E>::desempilha()
{
    p->removeFinal();
}

template <class E>
void Pilha<E>::print() const
{
    p->print();
}

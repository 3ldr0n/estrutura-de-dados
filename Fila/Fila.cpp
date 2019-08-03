#include "Fila.h"

template <class E>
Fila<E>::Fila()
{
    fila = new ListaDuplamenteLigada<E>();
}

template <class E>
Fila<E>::~Fila()
{
    delete fila;
}

template <class E>
bool Fila<E>::vazia() const
{
    return fila->vazia();
}

template <class E>
void Fila<E>::enfileira(const E &e)
{
    fila->insereInicio(e);
}

template <class E>
void Fila<E>::desenfileira()
{
    fila->removeFinal();
}

template <class E>
void Fila<E>::print() const
{
    fila->print();
}

#include "estruturas/ListaDuplamenteLigada.h"

#include <iostream>

template <class E>
ListaDuplamenteLigada<E>::ListaDuplamenteLigada()
{
    cabeca = fim = NULL;
}

template <class E>
ListaDuplamenteLigada<E>::~ListaDuplamenteLigada()
{
    if (!vazia())
        delete cabeca;
}

template <class E>
DNo<E> *ListaDuplamenteLigada<E>::getCabeca() const
{
    return cabeca;
}

template <class E>
bool ListaDuplamenteLigada<E>::vazia() const
{
    return cabeca == NULL;
}

template <class E>
const E& ListaDuplamenteLigada<E>::inicio() const
{
    return cabeca->elem;
}

template <class E>
const E& ListaDuplamenteLigada<E>::final() const
{
    return fim->elem;
}

template <class E>
void ListaDuplamenteLigada<E>::insereInicio(const E& e)
{
    DNo<E> *novo = new DNo<E>();
    novo->elem = e;
    novo->prev = NULL;

    if (vazia()) {
        novo->prox = NULL;
        cabeca = fim = novo;
    } else {
        novo->prox = cabeca;
        cabeca->prev = novo;
        cabeca = novo;
    }
}

template <class E>
void ListaDuplamenteLigada<E>::removeInicio()
{
    if (vazia())
        return;

    if (cabeca == fim) {
        delete cabeca;
        cabeca = fim = NULL;
    } else {
        DNo<E> *aux = cabeca;
        cabeca = cabeca->prox;
        cabeca->prev = NULL;
        delete aux;
    }
}

template <class E>
void ListaDuplamenteLigada<E>::insereFinal(const E &e)
{
    DNo<E> *novo = new DNo<E>();
    novo->elem = e;
    novo->prox = NULL;

    if (vazia()) {
        novo->prev = NULL;
        cabeca = fim = novo;
    } else {
        novo->prev = fim;
        fim->prev = novo;
        fim = novo;
    }
}

template <class E>
void ListaDuplamenteLigada<E>::removeFinal()
{
    if (cabeca == fim) {
        delete cabeca;
        cabeca = fim = NULL;
    } else {
        DNo<E> *aux = fim;
        fim = fim->prev;
        fim->prox = NULL;
        delete aux;
    }
}

template <class E>
void ListaDuplamenteLigada<E>::print() const
{
    if (vazia())
        return;

    DNo<E> *aux = cabeca;
    while (aux != NULL) {
        std::cout << aux->elem << " ";
        aux = aux->prox;
    }

    std::cout << std::endl;
}

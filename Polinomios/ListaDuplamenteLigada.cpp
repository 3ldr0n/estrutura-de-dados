#include "ListaDuplamenteLigada.h"

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
DNo<E> *ListaDuplamenteLigada<E>::getFim() const
{
    return fim;
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
void ListaDuplamenteLigada<E>::insereInicio(const E &e)
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
        fim->prox = novo;
        fim = novo;
    }
}

template <class E>
void ListaDuplamenteLigada<E>::insereNoDepois(DNo<E> *n)
{
    if (vazia())
        return;

    if (cabeca == fim && cabeca != n)
        return;

    if (fim == n) {
        insereFinal(n->elem);
        return;
    }

    DNo<E> *aux = cabeca;
    while (aux != NULL) {
        if (aux == n) {
            n->prox = aux->prox;
            n->prev = aux;
            aux->prox = n;
            break;
        }
        aux = aux->prox;
    }
}

template <class E>
void ListaDuplamenteLigada<E>::insereNoAntes(DNo<E> *n)
{
    if (vazia())
        return;

    if (cabeca == fim && cabeca != n)
        return;

    if (cabeca == n) {
        insereInicio(n->elem);
        return;
    }

    DNo<E> *aux = cabeca;
    while (aux != NULL) {
        if (aux == n) {
            n->prev = aux->prev;
            n->prox = aux;
            aux->prev = n;
            break;
        }
        aux = aux->prox;
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
void ListaDuplamenteLigada<E>::removeFinal()
{
    if (vazia())
        return;

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
void ListaDuplamenteLigada<E>::removeNo(const DNo<E> *n)
{
    if (vazia()) return;

    DNo<E>* aux;

    if (cabeca == n) {
        removeInicio();
        return;
    }

    if (fim == n) {
        removeFinal();
        return;
    }

    aux = cabeca;
    while (aux != NULL) {
        if (aux == n) {
            aux->prev->prox = aux->prox;
            aux->prox->prev = aux->prev;
            delete aux;
        }
        aux = aux->prox;
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

template <class E>
void ListaDuplamenteLigada<E>::troca()
{
    if (vazia() || cabeca == fim)
        return;

    E aux = cabeca->elem;
    cabeca->elem = fim->elem;
    fim->elem = aux;
}

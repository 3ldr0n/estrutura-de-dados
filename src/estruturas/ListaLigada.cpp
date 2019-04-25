#include "estruturas/ListaLigada.h"

#include <iostream>

template <class E>
ListaLigada<E>::ListaLigada()
{
    cabeca = NULL;
}

template <class E>
ListaLigada<E>::~ListaLigada()
{
    if (!vazia())
        delete cabeca;
}

template <class E>
bool ListaLigada<E>::vazia() const
{
    return cabeca == NULL;
}

template <class E>
const E& ListaLigada<E>::inicio() const
{
    return cabeca->elem;
}

template <class E>
const E& ListaLigada<E>::fim() const
{
    No<E> *aux = cabeca;
    while (aux->prox != NULL)
        aux = aux->prox;

    return aux->elem;
}

template <class E>
void ListaLigada<E>::insereInicio(const E& e)
{
    No<E> *novo = new No<E>();
    novo->elem = e;
    novo->prox = cabeca;
    cabeca = novo;
}

template <class E>
void ListaLigada<E>::removeInicio()
{
    if (vazia())
        return;

    No<E> *aux = cabeca;
    if (cabeca->prox == NULL)
        cabeca = NULL;
    else
        cabeca = cabeca->prox;

    delete aux;
}

template <class E>
void ListaLigada<E>::insereFinal(const E &e)
{
    No<E> *novo = new No<E>();
    No<E> *aux = cabeca;
    novo->elem = e;
    novo->prox = NULL;

    while (aux->prox != NULL)
        aux = aux->prox;

    aux->prox = novo;
}

template <class E>
void ListaLigada<E>::removeFinal()
{
    No<E> *aux = cabeca;
    while (aux->prox->prox != NULL)
        aux = aux->prox;

    delete aux->prox;
    aux->prox = NULL;
}

template <class E>
void ListaLigada<E>::inverte()
{
    No<E> *aux = cabeca;
    ListaLigada<E> invertida;
    while (aux != NULL) {
        invertida.insereInicio(aux->elem);
        aux = aux->prox;
        removeInicio();
    }

    cabeca = invertida.cabeca;
}

template <class E>
void ListaLigada<E>::print() const
{
    if (vazia())
        return;

    No<E> *aux = cabeca;
    while (aux != NULL) {
        std::cout << aux->elem << " ";
        aux = aux->prox;
    }

    std::cout << std::endl;
}

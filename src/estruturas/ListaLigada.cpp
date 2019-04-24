#include "estruturas/ListaLigada.h"

#include <iostream>

template <typename E>
ListaLigada<E>::ListaLigada()
{
    cabeca = new No<E>();
}

template <typename E>
ListaLigada<E>::~ListaLigada()
{
    delete cabeca;
}

template <typename E>
bool ListaLigada<E>::vazia() const
{
    return cabeca == NULL;
}

template <typename E>
const E& ListaLigada<E>::inicio() const
{
    return cabeca->elem;
}

template <typename E>
void ListaLigada<E>::insereInicio(const E& e)
{
    No<E> *novo = new No<E>();
    novo->elem = e;
    novo->prox = cabeca;
    cabeca = novo;
}

template <typename E>
void ListaLigada<E>::removeInicio()
{
    if (!vazia())
        cabeca = cabeca->prox;
}

template <typename E>
void ListaLigada<E>::insereFinal(const E &e)
{

}

template <typename E>
void ListaLigada<E>::print() const
{
    No<E> *aux = new No<E>();
    aux = cabeca;
    while (aux->prox != NULL) {
        std::cout << aux->elem << " ";
        aux = aux->prox;
    }
    std::cout << std::endl;
}

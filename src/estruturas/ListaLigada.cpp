#include "estruturas/ListaLigada.h"

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
void insereInicio(const E& e)
{
    
}

template <typename E>
void removeInicio()
{
    
}

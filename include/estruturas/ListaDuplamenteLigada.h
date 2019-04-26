#ifndef LISTA_LIGADA_H
#define LISTA_LIGADA_H

#include "estruturas/DNo.h"

template <class E>
class ListaDuplamenteLigada {
private:
    DNo<E> *cabeca;
    DNo<E> *fim;
public:
    ListaDuplamenteLigada();
    ~ListaDuplamenteLigada();
    DNo<E> *getCabeca() const;
    bool vazia() const;
    const E& inicio() const;
    const E& final() const;
    void insereInicio(const E& e);
    void removeInicio();
    void insereFinal(const E& e);
    void removeFinal();
    void print() const;
};

#endif

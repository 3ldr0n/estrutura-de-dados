#ifndef LISTA_LIGADA_H
#define LISTA_LIGADA_H

#include "DNo.h"

template <class E>
class ListaDuplamenteLigada {
private:
    DNo<E> *cabeca;
    DNo<E> *fim;
public:
    ListaDuplamenteLigada();
    ~ListaDuplamenteLigada();
    DNo<E> *getCabeca() const;
    DNo<E> *getFim() const;
    bool vazia() const;
    const E &inicio() const;
    const E &final() const;
    void insereInicio(const E &e);
    void insereFinal(const E &e);
    void insereNoDepois(DNo<E> *n);
    void insereNoAntes(DNo<E> *n);
    void removeInicio();
    void removeFinal();
    void removeNo(const DNo<E> *n);
    void print() const;
    void troca();
};

#endif

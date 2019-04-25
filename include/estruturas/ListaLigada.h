#ifndef LISTA_LIGADA_H
#define LISTA_LIGADA_H

#include "estruturas/No.h"

template <class E>
class ListaLigada {
private:
    No<E> *cabeca;
public:
    ListaLigada();
    ~ListaLigada();
    bool vazia() const;
    const E& inicio() const;
    const E& fim() const;
    void insereInicio(const E& e);
    void removeInicio();
    void insereFinal(const E& e);
    void removeFinal();
    void inverte();
    void print() const;
};

#endif

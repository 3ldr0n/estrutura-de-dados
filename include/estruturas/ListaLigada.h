#ifndef LISTA_LIGADA_H
#define LISTA_LIGADA_H

#include "estruturas/No.h"

template <typename E>
class ListaLigada {
private:
    No<E> *cabeca;
public:
    ListaLigada();
    ~ListaLigada();
    bool vazia() const;
    const E& inicio() const;
    void insereInicio(const E& e);
    void removeInicio();
};

#endif

#ifndef PILHA_H
#define PILHA_H

#include "../Vetor/Vetor.cpp"

template <class E>
class Pilha {
private:
    Vetor<E> *p;
public:
    Pilha();
    ~Pilha();
    bool vazia();
    void empilha(const E &e);
    const E& topo() const;
    void desempilha();
    void print() const;
};

#endif

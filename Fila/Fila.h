#ifndef FILA_H
#define FILA_H

#include "../ListaDuplamenteLigada/ListaDuplamenteLigada.cpp"

template <class E>
class Fila {
private:
    ListaDuplamenteLigada<E> *fila;
public:
    Fila();
    ~Fila();
    bool vazia() const;
    void enfileira(const E &e);
    void desenfileira();
    void print() const;
};

#endif

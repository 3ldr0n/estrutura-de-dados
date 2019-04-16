#ifndef VETOR_H
#define VETOR_H

#include <iostream>

template <typename T>
class Vetor {
private:
    T *v;
    int tam;
public:
    Vetor(int t);
    ~Vetor();
    int tamanho();
    T operator[](int i);
    bool procura(T elem);
    void insere(T elem, int i);
    void remove(int i);
    void agrupamento(Vetor<T> ve);
    void print();
};

#endif

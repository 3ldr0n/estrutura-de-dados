#ifndef VETOR_H
#define VETOR_H

template <typename T>
class Vetor {
private:
    T *v;
    int tam;
public:
    Vetor(int t);
    ~Vetor();
    int tamanho();
    T elemento(int i);
    bool procura(T elem);
    void insere(T elem, int i);
    void remove(int i);
    Vetor<T> operator+(Vetor ve);
};

#endif

#ifndef NO_H
#define NO_H

#include <iostream>
#include <cstdlib>

template <class E>
class No {
private:
    No<E> *esquerda;
    No<E> *direita;
    E chave;
    const int id = rand();
public:
    No(E chave);
    ~No();
    E getChave() const;
    No *getEsquerda() const;
    No<E> *getDireita() const;
    void setEsquerda(No<E> *no);
    void setDireita(No<E> *no);
    int getId() const;
    bool eFolha() const;
    No<E> *pegaPai(No<E> *raiz) const;
};

#endif

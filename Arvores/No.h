#ifndef NO_H
#define NO_H

#include <iostream>

template <class E>
class No {
private:
    No<E> *esquerda;
    No<E> *direita;
    E chave;
public:
    No(E chave);
    ~No();
    E getChave() const;
    No *getEsquerda() const;
    No<E> *getDireita() const;
    void setEsquerda(No<E> *no);
    void setDireita(No<E> *no);
    bool eFolha() const;
    No<E> *pegaPai(No<E> *raiz) const;
};

#endif

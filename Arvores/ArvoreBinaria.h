#ifndef ARVORE_BINARIA_H
#define ARVORE_BINARIA_H

#include "No.cpp"

#include <list>

template <class E>
class ArvoreBinaria {
private:
    No<E> *raiz;
    void insereNo(No<E> *no, E chave);
    void insereEsquerda(No<E> *no, E chave);
    void insereDireita(No<E> *no, E chave);
    int valorTotal(No<E> *no) const;
    No<E> *encontrar(No<E> *no, E chave) const;
    void remove(No<E> *no, E chave);
    void remove(No<E> *no);
public:
    ArvoreBinaria();
    ~ArvoreBinaria();
    No<E> *getRaiz() const;
    bool vazia() const;
    void insere(E chave);
    void remove(E chave);
    No<E> *encontrar(E chave) const;
    No<E> *menor() const;
    int altura() const;
    void printEmOrdem(No<E> *no) const;
    void printPreOrdem(No<E> *no) const;
    void printPosOrdem(No<E> *no) const;
    int contaNos(No<E> *no) const;
    int media(No<E> *no) const;
    std::list<No<E>*> nosMaioresQueMedia(No<E> *no) const;
};

#endif

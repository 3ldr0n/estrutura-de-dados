#ifndef ARVORE_BINARIA_H
#define ARVORE_BINARIA_H

#include "No.h"

class ArvoreBinaria {
private:
    No *raiz;
    void insereNo(No *no, int chave);
    void insereEsquerda(No *no, int chave);
    void insereDireita(No *no, int chave);
public:
    ArvoreBinaria();
    ~ArvoreBinaria();
    No *getRaiz() const;
    void insere(int chave);
    void remove(int chave);
    void printEmOrdem(No *no) const;
    void printPreOrdem(No *no) const;
    void printPosOrdem(No *no) const;
    int contaNos(No *no) const;
    int media() const;
};

#endif

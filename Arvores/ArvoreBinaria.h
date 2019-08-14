#ifndef ARVORE_BINARIA_H
#define ARVORE_BINARIA_H

#include "No.h"

#include <list>

class ArvoreBinaria {
private:
    No *raiz;
    void insereNo(No *no, int chave);
    void insereEsquerda(No *no, int chave);
    void insereDireita(No *no, int chave);
    int valorTotal(No *no) const;
    No *encontrar(No *no, int chave) const;
public:
    ArvoreBinaria();
    ~ArvoreBinaria();
    No *getRaiz() const;
    bool vazia() const;
    void insere(int chave);
    void remove(int chave);
    No *encontrar(int chave) const;
    void printEmOrdem(No *no) const;
    void printPreOrdem(No *no) const;
    void printPosOrdem(No *no) const;
    int contaNos(No *no) const;
    int media(No *no) const;
    std::list<No*> nosMaioresQueMedia(No *no) const;
};

#endif

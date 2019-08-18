#include "ArvoreBinaria.h"

ArvoreBinaria::ArvoreBinaria()
{
    raiz = NULL;
}

ArvoreBinaria::~ArvoreBinaria()
{
    delete raiz;
}

No *ArvoreBinaria::getRaiz() const
{
    return raiz;
}

bool ArvoreBinaria::vazia() const
{
    return raiz == NULL;
}

void ArvoreBinaria::insereNo(No *no, int chave)
{
    if (chave > no->getChave())
        insereDireita(no, chave);
    else if (chave < no->getChave())
        insereEsquerda(no, chave);
}

void ArvoreBinaria::insereDireita(No *no, int chave)
{
    if (no->getDireita() == NULL) {
        No *novoNo = new No(chave);
        no->setDireita(novoNo);
    } else {
        insereNo(no->getDireita(), chave);
    }
}

void ArvoreBinaria::insereEsquerda(No *no, int chave)
{
    if (no->getEsquerda() == NULL) {
        No *novoNo = new No(chave);
        no->setEsquerda(novoNo);
    } else {
        insereNo(no->getEsquerda(), chave);
    }
}

void ArvoreBinaria::insere(int chave)
{
    if (vazia())
        raiz = new No(chave);
    else
        insereNo(raiz, chave);
}

/**
 * Remoção de um nó da árvore.
 * Casos:
 * 1 - Árvore vazia (tratada no outro método).
 * 2 - Árvore com um nó.
 * 3 - Nó a ser deletado é uma folha.
 * 4 - Nó só tem um filho.
 * 5 - Nó com dois filhos.
 */
void ArvoreBinaria::remove(No *no, int chave)
{
    No *pai = no->pegaPai(raiz);
    delete no;
    if (pai->getDireita() != NULL) {
        if (pai->getDireita()->getChave() == chave)
            pai->setDireita(NULL);
    }

    if (pai->getEsquerda() != NULL) {
        if (pai->getEsquerda()->getChave() == chave)
            pai->setEsquerda(NULL);
    }
}

void ArvoreBinaria::remove(int chave)
{
    if (vazia())
        return;

    if (contaNos(raiz) == 1) {
        delete raiz;
        raiz = NULL;
    } else {
        remove(encontrar(chave), chave);
    }
}

No *ArvoreBinaria::encontrar(No *no, int chave) const
{
    if (no == NULL)
        return NULL;

    if (no->getChave() == chave)
        return no;
    else if (no->getChave() > chave)
        return encontrar(no->getEsquerda(), chave);
    else
        return encontrar(no->getDireita(), chave);
}

No *ArvoreBinaria::encontrar(int chave) const
{
    if (vazia())
        return NULL;

    return encontrar(raiz, chave);
}

No *ArvoreBinaria::menor() const
{
    No *aux;
    for (aux = raiz;aux->getEsquerda() != NULL;aux = aux->getEsquerda());
    return aux;
}

int alturaArvore(No *no, int alturaAtual)
{
    if (no->eFolha())
        return 1;

    if (no->getEsquerda() != NULL)
        alturaAtual = alturaArvore(no->getEsquerda(), alturaAtual++);
    else
        alturaAtual = alturaArvore(no->getDireita(), alturaAtual++);

    return alturaAtual;
}

int ArvoreBinaria::altura() const
{
    if (vazia())
        return 0;

    if (contaNos(raiz) == 1)
        return 1;

    return alturaArvore(raiz, 0);
}

void ArvoreBinaria::printEmOrdem(No* no) const
{
    if (no != NULL) {
        printEmOrdem(no->getEsquerda());
        std::cout << no->getChave() << " ";
        printEmOrdem(no->getDireita());
    }
}

void ArvoreBinaria::printPreOrdem(No *no) const
{
    if (no != NULL) {
        std::cout << no->getChave() << " ";
        printPreOrdem(no->getEsquerda());
        printPreOrdem(no->getDireita());
    }
}

void ArvoreBinaria::printPosOrdem(No *no) const
{
    if (no != NULL) {
        printPosOrdem(no->getEsquerda());
        printPosOrdem(no->getDireita());
        std::cout << no->getChave() << " ";
    }
}

int ArvoreBinaria::contaNos(No *no) const
{
    int numeroDeNos = 0;
    if (no != NULL) {
        numeroDeNos += 1;
        numeroDeNos += contaNos(no->getEsquerda());
        numeroDeNos += contaNos(no->getDireita());
    }
    return numeroDeNos;
}

int ArvoreBinaria::valorTotal(No *no) const
{
    int valorTotalArvore = 0;
    if (no != NULL) {
        valorTotalArvore += no->getChave();
        valorTotalArvore += valorTotal(no->getEsquerda());
        valorTotalArvore += valorTotal(no->getDireita());
    }

    return valorTotalArvore;
}

int ArvoreBinaria::media(No *no) const
{
    int valorTotalDosNos = valorTotal(no);
    return valorTotalDosNos / contaNos(no);
}

std::list<No *> ArvoreBinaria::nosMaioresQueMedia(No *no) const
{
    std::list<No *> nos;
    std::list<No *> nosDireita;
    std::list<No *> nosEsquerda;
    int media = this->media(raiz);
    if (no != NULL) {
        if (no->getChave() > media) {
            nos.push_back(no);
        }
        nosEsquerda = nosMaioresQueMedia(no->getEsquerda());
        nosDireita = nosMaioresQueMedia(no->getDireita());
    }
    nos.merge(nosEsquerda);
    nos.merge(nosDireita);
    return nos;
}

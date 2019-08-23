#include "ArvoreBinaria.h"

template <class E>
ArvoreBinaria<E>::ArvoreBinaria()
{
    raiz = NULL;
}

template <class E>
ArvoreBinaria<E>::~ArvoreBinaria()
{
    delete raiz;
}

template <class E>
No<E> *ArvoreBinaria<E>::getRaiz() const
{
    return raiz;
}

template <class E>
bool ArvoreBinaria<E>::vazia() const
{
    return raiz == NULL;
}

template <class E>
void ArvoreBinaria<E>::insereNo(No<E> *no, E chave)
{
    if (chave > no->getChave())
        insereDireita(no, chave);
    else if (chave < no->getChave())
        insereEsquerda(no, chave);
}

template <class E>
void ArvoreBinaria<E>::insereDireita(No<E> *no, E chave)
{
    if (no->getDireita() == NULL) {
        No<E> *novoNo = new No<E>(chave);
        no->setDireita(novoNo);
    } else {
        insereNo(no->getDireita(), chave);
    }
}

template <class E>
void ArvoreBinaria<E>::insereEsquerda(No<E> *no, E chave)
{
    if (no->getEsquerda() == NULL) {
        No<E> *novoNo = new No<E>(chave);
        no->setEsquerda(novoNo);
    } else {
        insereNo(no->getEsquerda(), chave);
    }
}

template <class E>
void ArvoreBinaria<E>::insere(E chave)
{
    if (vazia())
        raiz = new No<E>(chave);
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
template <class E>
void ArvoreBinaria<E>::remove(No<E> *no, E chave)
{
    No<E> *pai = no->pegaPai(raiz);
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

template <class E>
void ArvoreBinaria<E>::remove(E chave)
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

template <class E>
No<E> *ArvoreBinaria<E>::encontrar(No<E> *no, E chave) const
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

template <class E>
No<E> *ArvoreBinaria<E>::encontrar(E chave) const
{
    if (vazia())
        return NULL;

    return encontrar(raiz, chave);
}

template <class E>
No<E> *ArvoreBinaria<E>::menor() const
{
    if (vazia()) return NULL;
    No<E> *aux;
    for (aux = raiz;aux->getEsquerda() != NULL;aux = aux->getEsquerda());
    return aux;
}

template <class E>
int alturaArvore(No<E> *no, int alturaAtual)
{
    if (no->eFolha())
        return 1;

    if (no->getEsquerda() != NULL)
        alturaAtual = alturaArvore(no->getEsquerda(), alturaAtual++);
    else
        alturaAtual = alturaArvore(no->getDireita(), alturaAtual++);

    return alturaAtual;
}

template <class E>
int ArvoreBinaria<E>::altura() const
{
    if (vazia())
        return 0;

    if (contaNos(raiz) == 1)
        return 1;

    return alturaArvore(raiz, 0);
}

template <class E>
void ArvoreBinaria<E>::printEmOrdem(No<E> *no) const
{
    if (no != NULL) {
        printEmOrdem(no->getEsquerda());
        std::cout << no->getChave() << " ";
        printEmOrdem(no->getDireita());
    }
}

template <class E>
void ArvoreBinaria<E>::printPreOrdem(No<E> *no) const
{
    if (no != NULL) {
        std::cout << no->getChave() << " ";
        printPreOrdem(no->getEsquerda());
        printPreOrdem(no->getDireita());
    }
}

template <class E>
void ArvoreBinaria<E>::printPosOrdem(No<E> *no) const
{
    if (no != NULL) {
        printPosOrdem(no->getEsquerda());
        printPosOrdem(no->getDireita());
        std::cout << no->getChave() << " ";
    }
}

template <class E>
int ArvoreBinaria<E>::contaNos(No<E> *no) const
{
    int numeroDeNos = 0;
    if (no != NULL) {
        numeroDeNos += 1;
        numeroDeNos += contaNos(no->getEsquerda());
        numeroDeNos += contaNos(no->getDireita());
    }
    return numeroDeNos;
}

template <class E>
int ArvoreBinaria<E>::valorTotal(No<E> *no) const
{
    int valorTotalArvore = 0;
    if (no != NULL) {
        valorTotalArvore += no->getChave();
        valorTotalArvore += valorTotal(no->getEsquerda());
        valorTotalArvore += valorTotal(no->getDireita());
    }

    return valorTotalArvore;
}

template <class E>
int ArvoreBinaria<E>::media(No<E> *no) const
{
    int valorTotalDosNos = valorTotal(no);
    return valorTotalDosNos / contaNos(no);
}

template <class E>
std::list<No<E> *> ArvoreBinaria<E>::nosMaioresQueMedia(No<E> *no) const
{
    std::list<No<E> *> nos;
    std::list<No<E> *> nosDireita;
    std::list<No<E> *> nosEsquerda;
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

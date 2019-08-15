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

void ArvoreBinaria::remove(No *no)
{
    No *p, *q;
    if (no->getEsquerda() == NULL) {
        q = no->getDireita();
        delete no;
        return;
    }

    p = no;
    q = no->getEsquerda();
    while (q->getDireita() != NULL) {
        p = q;
        q = q->getDireita();
    }

    if (p != no) {
        p->setDireita(q->getEsquerda());
        q->setEsquerda(no->getEsquerda());
    }

    q->setDireita(no->getDireita());
    delete no;
}

void ArvoreBinaria::remove(int chave)
{
    if (vazia())
        return;

    remove(encontrar(raiz, chave));
}

No *ArvoreBinaria::encontrar(No *no, int chave) const
{
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
    else
        return encontrar(raiz, chave);
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

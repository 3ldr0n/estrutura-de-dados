#ifndef NO_H
#define NO_H

#include <iostream>

class No {
private:
    No *esquerda;
    No *direita;
    int chave;
public:
    No(int chave);
    ~No();
    int getChave() const;
    No *getEsquerda() const;
    No *getDireita() const;
    void setEsquerda(No* no);
    void setDireita(No* no);
};

#endif

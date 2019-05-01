#ifndef NO_H
#define NO_H

class Polinomio;

template <class E>
class ListaLigada;

template <class E>
class No {
private:
    E elem;
    No<E> *prox;
    friend class ListaLigada<E>;
    friend class Polinomio;
};

#endif

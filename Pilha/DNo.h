#ifndef NO_H
#define NO_H

class Polinomio;

template <class E>
class ListaDuplamenteLigada;

template <class E>
class DNo {
private:
    E elem;
    DNo<E> *prox;
    DNo<E> *prev;
    friend class ListaDuplamenteLigada<E>;
    friend class Polinomio;
};

#endif

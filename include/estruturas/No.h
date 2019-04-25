#ifndef NO_H
#define NO_H

template <class E>
class ListaLigada;

template <class E>
class No {
private:
    E elem;
    No<E> *prox;
    friend class ListaLigada<E>;
};

#endif

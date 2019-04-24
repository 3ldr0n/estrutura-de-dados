#ifndef NO_H
#define NO_H

template <typename E>
class ListaLigada;

template <typename E>
class No {
private:
    E elem;
    No<E> *prox;
    friend class ListaLigada<E>;
};

#endif

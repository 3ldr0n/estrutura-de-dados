#ifndef POLINOMIO_H
#define POLINOMIO_H

#include "../ListaDuplamenteLigada/ListaDuplamenteLigada.cpp"
#include "Monomio.h"

class Polinomio : public ListaDuplamenteLigada<Monomio> {
public:
    Polinomio();
    ~Polinomio();
    void mostra();
    double calcula(double x);
    void removeMonomio(Monomio e);
};

#endif

#ifndef POLINOMIO_H
#define POLINOMIO_H

#include "Monomio.h"
#include "../../src/estruturas/ListaLigada.cpp"

class Polinomio : public ListaLigada<Monomio> {
public:
    Polinomio();
    ~Polinomio();
    void mostra();
    double calcula(double x);
};

#endif

#ifndef SOLVER_H
#define SOLVER_H

#include "Pilha.cpp"

template <class E>
class Solver {
private:
    Pilha<E> p;
public:
    Solver();
    ~Solver();
    double solve(std::string expr);
};

#endif

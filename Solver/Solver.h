#ifndef SOLVER_H
#define SOLVER_H

#include "../Pilha/Pilha.cpp"

#include <sstream>

class Solver {
private:
    Pilha<std::string> p;
public:
    Solver();
    ~Solver();
    void parse_expression(std::string expr);
    void valida_pilha();
    double solve(std::string expr);
};

#endif

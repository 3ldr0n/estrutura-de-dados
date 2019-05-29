#include "Solver.h"

Solver::Solver()
{
    p = Pilha<std::string>();
}

Solver::~Solver(){}

void Solver::parse_expression(std::string expr)
{
    std::istringstream ss(expr);
    std::string buffer;

    while (ss >> buffer)
        p.empilha(buffer);
}

void Solver::valida_pilha()
{
    while (!p.vazia()) {
        std::string topo = p.topo();
        p.desempilha();

        if (topo == "+") {
            valida_pilha();
        } else if (topo == "-") {
            valida_pilha();
        } else if (topo == "*") {
            valida_pilha();
        } else if (topo == "/") {
            valida_pilha();
        } else {
            
        }
    }
}

double Solver::solve(std::string expr)
{
    parse_expression(expr);

    valida_pilha();

    return 0.0;
}

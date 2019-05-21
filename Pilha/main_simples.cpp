#include "PilhaSimples.cpp"

int main()
{
    Pilha<int> pilha;
    pilha.empilha(1);
    pilha.empilha(2);
    pilha.empilha(3);
    pilha.empilha(4);
    pilha.empilha(5);

    pilha.desempilha();

    pilha.print();

    return 0;
}

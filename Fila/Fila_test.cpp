#include "Fila.cpp"

int main()
{
    Fila<int> fila;
    fila.enfileira(1);
    fila.enfileira(2);
    fila.enfileira(3);
    fila.enfileira(4);
    fila.enfileira(5);

    fila.desenfileira();

    fila.print();
}

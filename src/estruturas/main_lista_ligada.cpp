#include "ListaLigada.cpp"

int main()
{
    ListaLigada<int> lista;
    lista.insereInicio(4);
    lista.insereInicio(5);
    lista.insereInicio(6);
    lista.insereInicio(7);
    lista.insereFinal(10);
    lista.removeFinal();
    lista.removeFinal();

    lista.print();

    std::cout << lista.fim() << std::endl;

    return 0;
}

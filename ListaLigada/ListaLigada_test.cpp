#include "ListaLigada.cpp"

int main()
{
    ListaLigada<int> lista;
    lista.insereInicio(4);
    lista.insereFinal(10);
    lista.removeFinal();
    lista.removeInicio();

    lista.insereInicio(10);
    lista.insereInicio(9);
    lista.insereInicio(8);

    lista.print();

    std::cout << lista.fim() << std::endl;

    lista.inverte();
    lista.print();

    return 0;
}

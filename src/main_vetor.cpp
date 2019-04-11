#include "Vetor.h"
#include <iostream>

int main()
{
    Vetor<int> v(5);
    v.insere(1, 0);
    v.insere(2, 1);
    v.insere(3, 2);
    v.insere(4, 3);
    v.insere(5, 4);

    std::cout << v.elemento(0) << std::endl;
    return 0;
}

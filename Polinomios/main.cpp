#include <iostream>

#include "Monomio.h"
#include "Polinomio.h"
/*
1 - inserir um monômio (usuário fornece expo e coef; não pode haver repetição de monônio com o mesmo expoente e o novo tem que entrar na posição correta)
*/

void print_menu()
{
    std::cout << "0 - sair" << std::endl;
    std::cout << "1 - inserir um monômio" << std::endl;
    std::cout << "2 - remover um monômio" << std::endl;
    std::cout << "3 - Calcular polinômio" << std::endl;
    std::cout << "4 - imprimir o polinômio" << std::endl;
}

int main()
{
    Polinomio a;
    double coef;
    int exp;
    int opt = -1;

    while (opt != 0) {
        print_menu();
        std::cin >> opt;
        switch (opt) {
        case 1:
            std::cout << "Coeficiente:" << std::endl;
            std::cin >> coef;
            std::cout << "Expoente:" << std::endl;
            std::cin >> exp;
            a.insereInicio(Monomio(coef, exp));
            break;
        case 2:
            std::cout << "Coeficiente:" << std::endl;
            std::cin >> coef;
            std::cout << "Expoente:" << std::endl;
            std::cin >> exp;
            a.removeMonomio(Monomio(coef, exp));
            break;
        case 3:
            double x;
            std::cout << "x: " << std::endl;
            std::cin >> x;
            std::cout << "Resultado: " << a.calcula(x) << std::endl;
            break;
        case 4:
            a.mostra();
            break;
        default: break;
        }
    }

    return 0;
}

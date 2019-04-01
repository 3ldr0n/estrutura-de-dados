#include <vector>

#include "Triangulo.h"

#define BEGIN_RED "\033[1;31m"
#define END_RED "\033[0m"

void menu()
{
    std::cout << "Escolha uma opção:" << std::endl;
    std::cout << "0 - sair" << std::endl;
    std::cout << "1 - Informar dados do próximo triângulo em metros" << std::endl;
    std::cout << "2 - Calcular área total" << std::endl;
}

int main()
{
    Triangulo t0 = Triangulo(0, 0, 0);
    std::vector<Triangulo> triangulos {t0, t0, t0, t0, t0,
                                       t0, t0, t0, t0, t0};
    int option = -1;
    menu();
    std::cout << ">> ";
    std::cin >> option;

    while (option != 0) {
        menu();
        std::cout << ">> ";
        std::cin >> option;

        switch(option) {
        case 1:
        {
            if (triangulos.size() > 10) {
                std::cout << "Número maximo atingido." << std::endl;
                break;
            }

            float base, altura, c, indice;
            std::cout << "Indice: " << std::endl;
            std::cin >> indice;
            std::cout << "Base: " << std::endl;
            std::cin >> base;
            std::cout << "Altura: " << std::endl;
            std::cin >> altura;
            std::cout << "Lado C: " << std::endl;
            std::cin >> c;

            if (base <= 0 || altura <= 0 || c <= 0) {
                std::cout << BEGIN_RED << "\nValores inválidos" << END_RED << std::endl;
                break;
            }

            Triangulo t(base, altura, c);
            triangulos[indice] = t;
            std::cout << triangulos.at(indice) << std::endl;
            break;
        }
        case 2:
        {
            float area_total = 0;
            for (unsigned int i = 0;i < triangulos.size();i++) {
                area_total += triangulos.at(i).getArea();
            }
            std::cout << "Área total: " << area_total << std::endl;
            break;
        }
        default:
            menu();
            std::cout << ">> ";
            std::cin >> option;
            break;
        }
    }

    return 0;
}

#include <iostream>
#include <stdlib.h>

#include "TadAbb.h"

int main()
{
	TadAbb abb;

	while (true) {
        std::cout << "\n-------------------------------------------------------------";
        std::cout << "\n                ARVORE BINARIA DE BUSCA";
        std::cout << "\n-------------------------------------------------------------";
        std::cout << "\n0 - sair";
        std::cout << "\n1 - incluir um no'";
        std::cout << "\n2 - localizar un no'";
        std::cout << "\n3 - excluir um no'";
        std::cout << "\n4 - imprimir a arvore em Pre' Ordem";
        std::cout << "\n5 - imprimir a arvore Em Ordem";
        std::cout << "\n6 - imprimir a arvore em Pos Ordem";
        std::cout << "\n\nSua opcao -> ";
		int opc;
        std::cin >> opc;

		if (opc == 0) {
			break;
		} else if (opc == 1) {
			int opc1;
            std::cout << "\n Informe o valor do no' a ser incluido: ";
            std::cin >> opc1;
            std::cout << "\n\n" << abb.incluirNo(opc1) << "\n\n";
		} else if (opc == 2) {
			int opc2;
            std::cout << "\n Informe o valor do no' a ser localizado: ";
            std::cin >> opc2;
            std::cout << "\n\n" << abb.localizarNo(opc2) << "\n\n";
		} else if (opc == 3) {
			//*** SUA IMPLEMENTACAO
		} else if (opc == 4) {
            std::cout << "\n\n" << abb.imprimirEmOrdem() << "\n\n";
		} else if (opc == 4) {
			//*** SUA IMPLEMENTACAO
		} else if (opc == 5) {
			//*** SUA IMPLEMENTACAO
		} else if (opc == 6) {
			//*** SUA IMPLEMENTACAO
		}

	}

    std::cout << "\n\nObrigado e ate' breve.\n\n";

	return 0;
}


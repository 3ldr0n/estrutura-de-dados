#include <iostream>
#include <stdlib.h>

#include "ArvoreBinariaBusca.h"

int main()
{
	ArvoreBinariaBusca arvore;

	while (true) {
        std::cout << "\nARVORE BINARIA DE BUSCA" << std::endl;
        std::cout << "0 - sair" << std::endl;
        std::cout << "1 - incluir um no'" << std::endl;
        std::cout << "2 - localizar un no'" << std::endl;
        std::cout << "3 - excluir um no'" << std::endl;
        std::cout << "4 - imprimir a arvore em Pre' Ordem" << std::endl;
        std::cout << "5 - imprimir a arvore Em Ordem" << std::endl;
        std::cout << "6 - imprimir a arvore em Pos Ordem" << std::endl;
        std::cout << "\nSua opcao -> ";
		int opc;
        std::cin >> opc;

		if (opc == 0) {
			break;
		} else if (opc == 1) {
			int opc1;
            std::cout << "\n Informe o valor do no' a ser incluido: ";
            std::cin >> opc1;
            arvore.incluirNo(opc1);
		} else if (opc == 2) {
			int opc2;
            std::cout << "\n Informe o valor do no' a ser localizado: ";
            std::cin >> opc2;
            std::cout << "\n\n" << arvore.localizarNo(opc2) << "\n\n";
		} else if (opc == 3) {
			//*** SUA IMPLEMENTACAO
		} else if (opc == 4) {
            arvore.imprimirEmOrdem();
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


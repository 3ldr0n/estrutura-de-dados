#include "ArvoreBinariaBusca.h"

void menu()
{
    std::cout << "\nARVORE BINARIA DE BUSCA" << std::endl;
    std::cout << "0 - sair" << std::endl;
    std::cout << "1 - incluir um nó" << std::endl;
    std::cout << "2 - localizar un nó" << std::endl;
    std::cout << "3 - excluir um nó" << std::endl;
    std::cout << "4 - imprimir a arvore em Pré Ordem" << std::endl;
    std::cout << "5 - imprimir a arvore Em Ordem" << std::endl;
    std::cout << "6 - imprimir a arvore em Pos Ordem" << std::endl;
    std::cout << "\nSua opcao -> ";
}

int main()
{
	ArvoreBinariaBusca arvore;

	while (true) {
        menu();

		int opc;
        std::cin >> opc;
        switch(opc) {
        case 0:
            return 0;
        case 1:
        {
            int valor_a_ser_incluido;
            std::cout << "\n Informe o valor do nó a ser incluido: ";
            std::cin >> valor_a_ser_incluido;
            arvore.incluirNo(valor_a_ser_incluido);
            break;
        }
        case 2:
        {
			int valor_a_ser_localizado;
            std::cout << "\n Informe o valor do nó a ser localizado: ";
            std::cin >> valor_a_ser_localizado;
            No *no = arvore.localizarNo(valor_a_ser_localizado);
            std::cout << "\n\n" << no->getValor() << "\n\n";
            break;
        }
        case 3:
            break;
        case 4:
            arvore.imprimirEmOrdem();
            break;
        default:
            std::cout << "Opção inválida" << std::endl;
            break;
        }
	}

    std::cout << "\n\nObrigado e até breve.\n\n";

	return 0;
}

#include "ArvoreBinaria.cpp"

void menu()
{
    std::cout << "\nÁRVORE BINÁRIA DE BUSCA" << std::endl;
    std::cout << "0 - sair" << std::endl;
    std::cout << "1 - incluir um nó" << std::endl;
    std::cout << "2 - localizar um nó" << std::endl;
    std::cout << "3 - excluir um nó" << std::endl;
    std::cout << "4 - imprimir a árvore em Pré Ordem" << std::endl;
    std::cout << "5 - imprimir a árvore Em Ordem" << std::endl;
    std::cout << "6 - imprimir a árvore em Pos Ordem" << std::endl;
    std::cout << "\nSua opção -> ";
}

int main()
{
	ArvoreBinaria<int> arvore;

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
            arvore.insere(valor_a_ser_incluido);
            break;
        }
        case 2:
        {
			int valor_a_ser_localizado;
            std::cout << "\n Informe o valor do nó a ser localizado: ";
            std::cin >> valor_a_ser_localizado;
            No<int> *no = arvore.encontrar(valor_a_ser_localizado);
            if (no == NULL)
                std::cout << "não existe na árvore" << std::endl;
            else
                std::cout << "\n\n" << no->getChave() << "\n" << std::endl;
            break;
        }
        case 3:
        {
            int valor_a_ser_excluido;
            std::cout << "Valor do nó a ser removido: ";
            std::cin >> valor_a_ser_excluido;
            arvore.remove(valor_a_ser_excluido);
            std::cout << valor_a_ser_excluido << " excluido." << std::endl;
            break;
        }
        case 4:
            arvore.printPreOrdem(arvore.getRaiz());
            break;
        case 5:
            arvore.printEmOrdem(arvore.getRaiz());
            break;
        case 6:
            arvore.printPosOrdem(arvore.getRaiz());
            break;
        default:
            std::cout << "Opção inválida" << std::endl;
            break;
        }
	}

    std::cout << "\n\nObrigado e até breve." << std::endl;

	return 0;
}

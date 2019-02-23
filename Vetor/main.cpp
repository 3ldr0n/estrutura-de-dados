#include "TadVetor.h"

void imprime_menu()
{
	std::system("CLS");
	std::cout << "\n----------------------------------------------";
	std::cout << "\n RELEMBRANDO VETORES";
	std::cout << "\n----------------------------------------------";
	std::cout << "\n0 - sair.";
	std::cout << "\n1 - imprimir o vetor.";
	std::cout << "\n2 - inserir um elemento ( >0 e a posicao no vetor tem que estar livre (=0)";
	std::cout << "\n3 - excluir um elemento.";
	std::cout << "\n4 - trocar dois elementos de lugar entre si.";
	std::cout << "\n5 - localizar o maior e o menor elementos do vetor";
	std::cout << "\n6 - ordenar os elementos do vetor em ordem crescente";
	std::cout << "\n7 - ordenar os elementos do vetor em ordem decrescente";
	std::cout << "\n8 - ordenar os elementos do vetor em um segundo vetor (o metodo cria o novo vetor, copia os dados e retorna o vetor ordenado";
	std::cout << "\n---------------------";
	std::cout << "\nQual a sua opcao -> ";	
}

int main()
{
	TadVetor tv;

	while (true) {
		imprime_menu();

		int opc;
		std::cin >> opc;
		if (opc == 0) {
			break;
		} else if (opc == 1) {
			tv.imprimir();
			std::cout << "\n\n";
			std::system("PAUSE");
		} else if (opc == 2) {
			std::cout << "Indice do novo elemento: ";
			int idx;
			std::cin >> idx;
			std::cout << "Valor do novo elemento: ";
			int val;
			std::cin >> val;
			std::cout << tv.incluir(idx, val) << std::endl;
			std::system("PAUSE");
		} else if (opc == 3) {
			std::cout << "Indice do elemento a ser removido: ";
			int idx;
			std::cin >> idx;
			int val = tv.excluir(idx);
			if (val == 0) {
				std::cout << "Nao ha´ elemento na posicao " << idx;
			} else if (val == -1) {
				std::cout << "ERRO: o indice esta' fora dos limites do vetor.";
			} else {
				std::cout << "Valor excluido da posicao " << idx << ": " << val;
			}
			std::cout << "\n\n";
			std::system("PAUSE");
		} else if (opc == 4) {
			int idx1, idx2;
			std::cout << "Primeiro indice: " << std::endl;
			std::cin >> idx1;
			std::cout << "Segundo indice: " << std::endl;
			std::cin >> idx2;
			tv.troca(idx1, idx2);

			std::cout << "Valor trocado" << std::endl;
			std::system("PAUSE");
		} else if (opc == 5) {
			std::cout << "Maior: " << tv.maior() << std::endl;
			std::cout << "Menor: " << tv.menor() << std::endl;
			std::system("PAUSE");
		} else if (opc == 6) {
			tv.sort();
			std::cout << "Vetor ordenado.\n\n";
			std::system("PAUSE");
		} else if (opc == 7) {
			tv.sort_decrescente();
			std::cout << "Vetor ordenado.\n\n";
			std::system("PAUSE");
		} else if (opc == 8) {
			tv.sort_segundo_vetor();
			std::cout << "Vetor ordenado." << std::endl;
			std::system("PAUSE");
		}
	}
	std::cout << "\n-------------------------------------------------";
	std::cout << "\n\nObrigado e ate' a proxima vez.\n\n\n";
	return 0;
}

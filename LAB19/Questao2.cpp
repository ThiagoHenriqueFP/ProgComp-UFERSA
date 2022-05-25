#include <iostream>

int main()
{
	const char* meses[] = {"Janeiro", "Fevereiro", "Marco","Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
	int livros[3][12];
	int vendas[3] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Digite o numero de livrso vendidos no " << i+1 << " ano: \n";
		for (int j = 0; j < 12; j++)
		{
			std::cout << meses[j] << ": ";
			std::cin >> livros[i][j];
			vendas[i] += livros[i][j];
		}
	}

	int total = 0;
	std::cout << "Total de vendas\n";
	for (int i = 0; i < 3; i++)
	{
		std::cout << i + 1 << " ano: " << vendas[i] << std::endl;
		total += vendas[i];
	}

	std::cout << "\nNos tres anos foram vendidos " << total << " livros";
}
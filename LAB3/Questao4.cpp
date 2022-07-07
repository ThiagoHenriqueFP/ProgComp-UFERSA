#include <iostream>

int main()
{
	float custoFab, totalCons;

	std::cout << "Digite o valor do carro para a fabrica: ";
	std::cin >> custoFab;

	totalCons = (custoFab + (custoFab * 0.28) + (custoFab * 0.45));

	std::cout << "Total para o consumidor final: " << totalCons;
}
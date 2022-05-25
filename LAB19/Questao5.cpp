#include <iostream>

int main()
{
	char mat[16][16] = { 0 };
	char a = 0;

	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			mat[i][j] = a++;
		}
	}

	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			std::cout << mat[i][j] << " ";
		}
		std::cout << std::endl;
	}
	int colA, linA, colN, linN;
	std::cout << "Entre com as coordenadas da regiao de interesse\nDe: ";
	std::cin >> colA >> linA;
	std::cout << "Ate: ";
	std::cin >> colN >> linN;

	char** newMatC = new char* [colN];
	char* newMatL = new char[linN];

	for (int i = colA; i <= colN; i++)
	{
		for (int j = linA; j <= linN; j++)
		{
			std::cout << mat[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
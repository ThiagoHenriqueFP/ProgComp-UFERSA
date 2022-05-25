#include <iostream>

int main()
{

	int soma = 0;
	for (int i = 1; i < 1000 ; i++)
	{
		if (i % 5 == 0 || i % 3 == 0) {
			std::cout << i << " ";
			soma += i;
		}
	}

	std::cout << "\nSoma: " << soma;
}
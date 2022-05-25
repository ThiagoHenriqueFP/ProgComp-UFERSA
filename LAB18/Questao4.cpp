#include <iostream>

int main()
{
	char vet[60];
	std::cin >> vet;
	int count = 0;
	for (int i = 0; vet[i]; i++)
		count++;

	char vetInv[60];
	for (int i = count, int j = 0; i>= 0; i--, j++)
	{
		vetInv[j] = vet[i];
	}


	int comp = 0;
	for (int i = 0; i<=count; i++)
	{
		if (vet[i] != vetInv[i])
		{
			comp++;
			break;
		}
	}

	if (comp == 0)
		std::cout << "E um palindromo";
	else
		std::cout << "Nao e um palindromo";
}
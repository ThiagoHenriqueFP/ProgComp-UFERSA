#include<iostream>

int main()
{
	int i, maiores = 0, maior = 0, menor = 100, aux;
	do 
	{
		std::cin >> i;

		if (i >= 18)
			maiores++;

		if (i > maior)
			maior = i;

		if (i < menor && i !=0)
			menor = i;
	}
	while (i != 0);

	std::cout << "Neste grupo " << maiores << " sao maiores de idade.\nO mais velho tem " << maior << " anos e o menor tem " << menor << " anos";
}
#include <iostream>

int main()
{
	int a, b, soma = 0;
	std::cin >> a >> b;

	if (a > b)
		for (int i = b + 1; i < a; i++)
			soma += i;
	else if (a < b)
		for (int i = a + 1; i < b; i++)
			soma += i;
	else
		soma = 0;



	if (a > b)
		std::cout << "A soma dos valores entre " << b << " e " << a << " e: " << soma;
	else if (a < b)
		std::cout << "A soma dos valores entre " << a << " e " << b << " e: " << soma;
	else
		std::cout << "A soma dos valores entre " << a << " e " << b << " e: " << soma;


}
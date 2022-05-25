#include <iostream>

int main()
{
	unsigned long long a = 0, b = 1, c, soma = 0;
	for (int i = 0; i < 100; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
		{
		std::cout << c << " ";
		soma += c;
		}
	}

	std::cout << "\nA soma e: " << soma;
}
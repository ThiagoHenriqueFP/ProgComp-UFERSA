#include <iostream>

int main()
{
	int somaFor = 0;
	for (int i = 1; i <= 100; i = i + 2)
	{
		somaFor += i;
	}
	std::cout << somaFor << std::endl;

	int somaWhile = 0;
	int i = 1;
	while (i <= 100)
	{
		somaWhile += i;
		i = i + 2;
	}
	i = 1;
	std::cout << somaWhile << std::endl;

	int somaDoWhile = 0;
	do
	{
		somaDoWhile += i;
		i = i + 2;
	}
	while (i <= 100);
	std::cout << somaDoWhile << std::endl;
}
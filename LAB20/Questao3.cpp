#include <iostream>

int main()
{
	std::cin;
	int alteracoes = 0;
	char letter = std::cin.get();
	while (letter != '#' || letter != '\0' || letter != '\n')
	{
		if (letter == '.')
		{
			std::cout << '!';
			alteracoes++;
		}
		else if (letter == '!')
		{
			std::cout << "! !";
			alteracoes++;
		}
		else {
			std::cout << letter;
		}
		letter = std::cin.get();

	}

	std::cout << "Foram feitas " << alteracoes << alteracoes;
}
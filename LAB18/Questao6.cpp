#include <iostream>

struct Pessoa
{
	char nome[20];
	unsigned idade;
	char sexo;
};

int main()
{
	Pessoa newPessoa;
	Pessoa* ptr = &newPessoa;
	int somaIdade = 0, count = 0;

	std::cout << "Digite o nome idade e sexo das pessoas\n";
	do 
	{
		std::cout << "Nome: ";
		std::cin >> ptr->nome;

		if (!strcmp(ptr->nome, "fim"))
		{
			break;
		}

		std::cout << "Idade: ";
		std::cin >> ptr->idade;
		somaIdade += ptr->idade;
		std::cout << "Sexo: ";
		std::cin >> ptr->sexo;
		count++;
	} while (true);

	if (count == 0)
		count = 1;

	std::cout << "A media de idade nesse grupo e: " << somaIdade / count;
}
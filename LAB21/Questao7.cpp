#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct Nadador {
	char nome[20];
	int idade;
	char categoria[15];
};

int main()
{
	Nadador nadador;
	std::cin >> nadador.nome;
	std::cin >> nadador.idade;

	if (nadador.idade >= 5 && nadador.idade <= 7)
		std::strcpy(nadador.categoria, "Infantil");
	else if (nadador.idade >= 8 && nadador.idade <= 10)
		std::strcpy(nadador.categoria, "Juvenil");
	else if (nadador.idade >= 11 && nadador.idade <= 15)
		std::strcpy(nadador.categoria, "Adolescente");
	else if (nadador.idade > 15 && nadador.idade <= 30)
		std::strcpy(nadador.categoria, "Adulto");
	else if (nadador.idade >= 30)
		std::strcpy(nadador.categoria, "Senior");
	else if (nadador.idade < 5) {
		std::cout << "Idade inadequada";
	}

	std::cout << nadador.nome << std::endl << nadador.idade << std::endl << nadador.categoria;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Digite seu nome e sobrenome: ";
	string nome;
	string sobreNome;
	int aux;
	getline(cin, nome);

	for (size_t i = 0; i < nome.length(); i++)
	{
		if (nome[i] == ' ')
		{
			aux = i;
			sobreNome = nome.substr(aux + 1);
			nome = nome.substr(0, aux);
			break;
		}
	}

	cout << "Bom dia senhor, " << sobreNome << ". Ous devo chama-o de " << nome;
}
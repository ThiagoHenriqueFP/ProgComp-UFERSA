#include <iostream>
#include "codecode.h"

using namespace std;

int main()
{
	cout << "Insira um caracter: ";
	char caracter;
	cin >> caracter;

	cout << endl << "Deseja codificar o caracter informado? [1 = sim | 0 = n�on]";
	bool confirm;
	cin >> confirm;

	if (confirm == 1) {
		cout << "Caracter codificado => " << codificar(caracter);
	}
	else{
		cout << "Caracter sem codifica��o => " << caracter;
	}
}
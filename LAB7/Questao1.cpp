#include <iostream>
#include "codecode.h"

using namespace std;

int main()
{
	cout << "Insira um caracter: ";
	char caracter;
	cin >> caracter;

	cout << endl << "O caracter codificado é: " << codificar(caracter);
	cout << endl << "O caracter decodificado é: " << decodificar(codificar(caracter));
}
#include <iostream>
#include "bits.h"

using namespace std;

int main()
{
	cout << "Digite um valor inteiro: ";
	unsigned int value;
	cin >> value;
	cout << "Os 16 bits mais baixos desse valor correspondem ao n�mero: " << bitsBaixos(value);
	cout << endl;
	cout << "Os 16 bits mais baixos desse valor correspondem ao n�mero: " << bitsAltos(value);
}
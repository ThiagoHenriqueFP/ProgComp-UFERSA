#include <iostream>
#define PAO 0.3
#define PASTEL 0.25

using namespace std;

double carrinho(int, int);
int main()
{
	cout << "	Paes&Cia	" << endl;

	int paes, pasteis;

	cout << "Quantos p�es? ";
	cin >> paes;

	cout << endl << "Quastos past�is? ";
	cin >> pasteis;

	cout << "O total da compra �: " << carrinho(paes, pasteis);
}

double carrinho(int paes, int pasteis)
{
	return ((paes * PAO) + (pasteis * PASTEL));
}
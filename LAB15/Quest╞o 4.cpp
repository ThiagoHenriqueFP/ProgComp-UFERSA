#include <iostream>
using namespace std;

struct local {
	char nome[20];
	char pa�s[20];
	char continente[20];
};

int main() {
	cout << "Quantos locais quer visitar nas f�rias? ";
	int tam;
	cin >> tam;

	local* ferias = new local[tam];
	int i = 0;

	for (i; i < tam; i++) {
		cout << "Informe seu nome: ";
		cin >> ferias[i].nome;
		cout << "Nome do " << i + 1 << "� pa�s que deseja viajar: ";
		cin >> ferias->pa�s;
		cout << "Continente: ";
		cin >> ferias->continente;
		cout << endl;
	}

		for (i; i < tam; i++) {
			cout << "Sr(a) " << ferias->nome << ", deseja conhecer os seguintes pa�ses: " << endl;
			cout << i + 1 << "� Pa�s " << ferias[i].pa�s;
			cout << "localizado no(a) " << ferias[i].continente;
	}

	delete []ferias;
}
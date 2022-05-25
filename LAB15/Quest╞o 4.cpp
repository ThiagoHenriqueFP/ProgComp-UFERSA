#include <iostream>
using namespace std;

struct local {
	char nome[20];
	char país[20];
	char continente[20];
};

int main() {
	cout << "Quantos locais quer visitar nas férias? ";
	int tam;
	cin >> tam;

	local* ferias = new local[tam];
	int i = 0;

	for (i; i < tam; i++) {
		cout << "Informe seu nome: ";
		cin >> ferias[i].nome;
		cout << "Nome do " << i + 1 << "º país que deseja viajar: ";
		cin >> ferias->país;
		cout << "Continente: ";
		cin >> ferias->continente;
		cout << endl;
	}

		for (i; i < tam; i++) {
			cout << "Sr(a) " << ferias->nome << ", deseja conhecer os seguintes países: " << endl;
			cout << i + 1 << "º País " << ferias[i].país;
			cout << "localizado no(a) " << ferias[i].continente;
	}

	delete []ferias;
}
#include <iostream>
using namespace std;

int main() {
	cout << "Quantos valores deseja guardar? ";
	unsigned tam;
	cin >> tam;

	int* vet = new int[tam];

	cout << "Quais os valores? ";
	for (int i = 0; i < tam; i++) {
	cin >> vet[i] ;
	}
	cout << "Os valores " ;
	for (int i = 0; i < tam; i++) {
		 cout << vet[i] << " ";
	}
	cout << "foram armazenados.";

	delete []vet;
}
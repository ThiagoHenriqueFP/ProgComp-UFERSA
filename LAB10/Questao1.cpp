#include <iostream>

using namespace std;

int main()
{
	int vet[5] = { 10, 80, 30, 54, 15 };
	cout << "Vetor: ";
	for (size_t i = 0; i < 5; i++)
	{
		cout << vet[i] << " ";
	}

	cout << endl << "------------------" << endl;
	int pos;
	cout << "Alterar posição (0 ~ 4): ";
	cin >> pos;

	cout << endl << "Novo valor: ";
	int value;
	cin >> value;

	vet[pos] = value;
	cout << endl << "------------------" << endl;

	cout << "Vetor: ";
	for (size_t i = 0; i < 5; i++)
	{
		cout << vet[i] << " ";
	}

}
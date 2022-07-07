#include <iostream>

using namespace std;

int main()
{
	double vet[3];

	cout << "Insira os valores: " << endl;
	for (size_t i = 0; i < 3; i++)
	{
		cin >> vet[i];
	}

	cout << (vet[0] * vet[2] - vet[1]);
}
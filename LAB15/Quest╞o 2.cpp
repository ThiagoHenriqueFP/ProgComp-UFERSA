#include <iostream>
using namespace std;

int main() {
	int* pont = new int{ 100 };
	cout << "Conteúdo armazenado na memória " << pont << " é " << * pont << endl;

	cout << "Digite novo valor para esse bloco de memória: ";
	cin >> *pont;

	cout << *pont << " é o novo valor armazenado na memória " << pont;

	delete pont;
}
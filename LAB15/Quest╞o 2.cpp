#include <iostream>
using namespace std;

int main() {
	int* pont = new int{ 100 };
	cout << "Conte�do armazenado na mem�ria " << pont << " � " << * pont << endl;

	cout << "Digite novo valor para esse bloco de mem�ria: ";
	cin >> *pont;

	cout << *pont << " � o novo valor armazenado na mem�ria " << pont;

	delete pont;
}
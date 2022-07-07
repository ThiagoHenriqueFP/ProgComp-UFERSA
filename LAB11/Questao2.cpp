#include <iostream>
#include <string>

using namespace std;

int main()
{
	string n1;
	int n2;

	cout << "Entre com dois numeros: ";
	cin >> n1 >> n2;

	cout << "A multiplicaçao desses dois numeros e: " << stoi(n1) * n2;
}
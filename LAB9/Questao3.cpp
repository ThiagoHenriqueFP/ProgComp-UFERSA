#include <iostream>

using namespace std;

int main()
{
	cout << "Digite um número real: " << endl;
	double num;
	cin >> num;

	cout << "A parte real: " << int(num) << endl << "A parte fracionária: " << num - int(num);
}
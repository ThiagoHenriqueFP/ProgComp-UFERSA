#include <iostream>

using namespace std;

int main()
{
	cout << "Digite um n�mero real: " << endl;
	double num;
	cin >> num;

	cout << "A parte real: " << int(num) << endl << "A parte fracion�ria: " << num - int(num);
}
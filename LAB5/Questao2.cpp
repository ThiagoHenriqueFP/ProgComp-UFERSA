#include <iostream>

using namespace std;

float reajuste(float);

int main()
{
	cout << "Informe o seu sal�rio: R$";
	float salario;
	cin >> salario;
	cout << endl << "Sal�rio com reajuste: R$" << reajuste(salario);
}

float reajuste(float sal)
{
	return ((sal * 0.15) + sal);
}

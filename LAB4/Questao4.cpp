#include <iostream>
#include <cmath>
#define PI 3.14159

using namespace std;

double VolumeCilindro();

int main()
{
	cout << "Informe as dimensões do cilindro" << endl;

	cout << VolumeCilindro();
}

double VolumeCilindro()
{
	double raio, altura;
	cout << "Informe o raio do cilindro: ";
	cin >> raio;
	cout << "Informe a altura do cilindro: ";
	cin >> altura;

	double result = (PI * pow(raio, 2) * altura);

	return result;
}
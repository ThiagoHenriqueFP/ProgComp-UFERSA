#include <iostream>
#include <cmath>

using namespace std;

float imcCalc(float, float);

int main()
{
	float altura, peso;
	cout << "Informe sua altura (em metros): ";
	cin >> altura;
	cout << endl << "Informe o seu peso (em kg): ";
	cin >> peso;
	cout << endl << "Seu IMC é: " << imcCalc(altura, peso);
}

float imcCalc(float altura, float peso)
{
	return (peso / (pow(2, altura)));
}
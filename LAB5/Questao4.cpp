#include <iostream>
#include <cmath>
using namespace std;

float modVetor(float, float);

int main()
{
	float x, y;
	cout << "Informe o ponto x: ";
	cin >> x;
	cout << endl << "Informe o ponto y: ";
	cin >> y;
	cout << endl << "O módulo do vetor tem valor: "<<modVetor(x, y);
}

float modVetor(float x, float y)
{
	return sqrt(pow(x,2) + pow(y,2));
}
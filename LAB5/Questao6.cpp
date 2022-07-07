#include <iostream>
#include <cmath>
#include "vector.h"

using namespace std;

int main()
{
	float x, y;
	cout << "Informe o ponto x: ";
	cin >> x;
	cout << endl << "Informe o ponto Y: ";
	cin >> y;

	cout << "Coordenadas polares do vetor (módulo e ângulo): (" << modVetor(x, y) << "," << angulo(x, y) << ")";
}
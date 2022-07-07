#include <iostream>
#include <cmath>
#define PI 3.14

using namespace std;

float angulo(float, float);

int main()
{
	float x, y;
	cout << "Informe o ponto X: ";
	cin >> x;

	cout << endl << "Informe o ponto Y: ";
	cin >> y;

	cout << "O ângulo desse vetor é: " << angulo(x, y);
}

float angulo(float x, float y) {
	return atan2(x, y)*(180/PI);
}

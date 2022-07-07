#include <iostream>
#include <cmath>

using namespace std;

float quadrado(float);
float cubo(float);

int main()
{
	cout << "Informe um valor para receber o quadrado e o cubo: ";
	float num;
	cin >> num;
	float quad = quadrado(num);
	float cub = cubo(num);

	cout << endl << num << " ao quadrado: " << quad << endl << num << " ao cubo: " << cub << endl << "Cubo ao quadrado: " << quadrado(cub);
}

float quadrado(float num)
{
	return pow(num, 2);
}

float cubo(float num)
{
	return pow(num, 3);
}
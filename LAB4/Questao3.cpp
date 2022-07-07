#include <iostream>
#include <cmath>

using namespace std;


double media(double x, double y);
int main()
{
	cout << "Informe os valores para aferirmos a média" << endl;
	double med1, med2;
	cout << "Primeiro valor: ";
	cin >> med1;
	cout << endl << "Segundo valor: " << endl;
	cin >> med2;

	cout << media(med1, med2);
}

double media(double x, double y)
{
	double result = (x + y) / 2;
	return result;
}
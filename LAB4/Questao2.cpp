#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

double seno();

int main()
{
	cout << "Descrevar um ângulo para encotrar seu seno" << endl;
	cout << seno();

}

double seno()
{
	cout << "Ângulo (em graus): " << endl;
	double angulo;
	cin >> angulo;

	double result = sin(angulo*PI/180);
	return result;
}
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	cout << "Calculo de volume de prisma retangular" << endl;


	int ladoA;
	cout << "Informe o lado a: ";
	cin >> ladoA;
	cout << "Dimensao do lado a:" << ladoA << endl;

	int ladoB;
	cout << "Informe o lado b: ";
	cin >> ladoB;
	cout << "Deminsao do lado b: " << ladoB << endl;

	cout << "Area de base: " << ladoA * ladoB << endl;

	int h;
	cout << "Informe a altura do prisma: ";
	cin >> h;

	cout << "Altura do prisma: " << h << endl;

	cout << "Volume do prisma: " << ladoA * ladoB * h;

}

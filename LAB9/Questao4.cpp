#include <iostream>

using namespace std;

int main()
{
	cout << "Entre com a distancia em metros: ";
	double distancia;
	cin >> distancia;

	cout << distancia << " mestros equivalem à " << int(distancia) / 1000 << " quilometros e " << fmod(distancia, 1000) << " metros";
}
#include <iostream>
#include <cmath>
using namespace std;

double distanciaEntrePontos(); // Interface da fun��o

int main()
{
	cout << "Calcular a dist�ncia entre dois pontos" << endl;

	double showResult = distanciaEntrePontos(); //Chamada da fun��o

	cout << "O resultado da equa��o �: " << showResult;
}

double distanciaEntrePontos() // Corpo da fun��o
{
	int pontoPX, pontoPY;
	cout << "Informe a coodenada do primeiro ponto ->" << endl << "X :";
	cin >> pontoPX;
	cout << "Y: ";
	cin >> pontoPY;

	int pontoQX, pontoQY;
	cout << "Informe a coodenada do segundo ponto ->" << endl << "X :";
	cin >> pontoQX;
	cout << "Y: ";
	cin >> pontoQY;
	
	double powX = pow((pontoPX - pontoQX), 2);
	double powY = pow((pontoPY - pontoQY), 2);

	double result = sqrt((powX+ powY));
	return result;
}
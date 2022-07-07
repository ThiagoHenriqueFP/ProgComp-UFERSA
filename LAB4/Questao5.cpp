#include <iostream>
#include <cmath>


double ValorAbsoluto();
using namespace std;

int main()
{
	cout << "Digite um valor para ver o absoluto" << endl;
	
	cout << ValorAbsoluto();
}

double ValorAbsoluto()
{
	double valor;
	cin >> valor;
	return abs(valor);
}
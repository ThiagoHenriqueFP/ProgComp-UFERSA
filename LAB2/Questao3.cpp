#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	cout << left; cout.width(15); cout << "Produto";
	cout << left; cout.width(15); cout << "Preco/Kg";
	cout << left; cout.width(15); cout << "Pedido (Kg)";
	cout << left; cout.width(15); cout << "total Parcial" <<endl;

	cout << left; cout.width(15); cout << "-------";
	cout << left; cout.width(15); cout << "-------";
	cout << left; cout.width(15); cout << "-----------";
	cout << left; cout.width(15); cout << "-------------";
	cout << endl;

	cout << left; cout.width(15); cout << "Alface";
	cout << left; cout.width(15); cout << "R$ 1,25/Kg";
	cout << left; cout.width(15); cout << "3,2Kg";
	cout << left; cout.width(15); cout << "R$ 4,00";
	cout << endl;
	cout << left; cout.width(15); cout << "Beterraba";
	cout << left; cout.width(15); cout << "R$ 0,65/Kg";
	cout << left; cout.width(15); cout << "6,0Kg";
	cout << left; cout.width(15); cout << "R$ 3,90";
	cout << endl;
	cout << left; cout.width(15); cout << "cenoura";
	cout << left; cout.width(15); cout << "R$ 0,90/Kg";
	cout << left; cout.width(15); cout << "6,0Kg";
	cout << left; cout.width(15); cout << "R$ 9,00";
	
}

#include <iostream>

using std::cout;
using std::cin;

int main() {
	float price;
	int id;

	cout << "Digite o valor e o codigo do produto:\n";
	cin >> price >> id;

	switch (id)
	{
	case 1:
	case 2:
		cout << "Este produto vem do sul\n";
		break;
	case 3:
		cout << "Este produto vem do norte\n";
		break;
	case 4:
		cout << "Este produto vem do centro oeste\n";
		break;
	case 5:
	case 6:
		cout << "Este produto vem do nordeste\n";
		break;
	case 7:
	case 8:
	case 9:
		cout << "Este produto vem do suldeste\n";
	default:
		cout << "Codigo invalido";
		break;
	}
}
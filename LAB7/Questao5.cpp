#include <iostream>

using namespace std;

string bin(int);

int main()
{
	cout << "Digite um valor de 0 à 255: ";
	int value;
	cin >> value;
	cout << "O numero " << value << " em binario é: " << bin(value);
}

string bin(int value)
{
	string result;

	while (value != 0)
	{
		if (value % 2 == 0) {
			result += "0";
			value /= 2;
		}
		else {
			result += "1";
			value /= 2;
		}
	}

	return result;
}
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string nome;
	string data;
	string result;

	cin >> nome;
	cin >> data;

	result = nome + " esteve aqui em " + data + ".";

	cout << result;
}
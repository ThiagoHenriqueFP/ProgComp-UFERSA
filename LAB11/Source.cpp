#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int tam = 10;
	int aux = 0;

	const char senha[tam] = { 't','h','i','a','g','o' };

	char passwdInput[tam];

	cin >> passwdInput;


	for (size_t i = 0; i < tam; i++)
	{
		if (senha[i] != passwdInput[i]) {
			cout << "Senha incorreta";
			break;
		}
	}
}
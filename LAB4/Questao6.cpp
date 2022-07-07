#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

string incializar();
string ligar();
string verificar();
string ativar();

int main()
{
	incializar();
}

string inicializar()
{
	cout << "- Inicializando o sistema" <<endl;
	ligar();
	verificar();
	ativar();

	int randon = rand();

	if (randon > 16384) {
		cout << "Sistema em funcionamento" << endl;
	}
	else {
		cout << "Falha na inicalização" << endl;
	}
}

string ligar()
{
	cout << "Ligando o sistema" << endl;
}

string verificar()
{
	cout << "Verificando o sistema" << endl;
}

string ativar()
{
	cout << "Ativando o sistema" << endl;
}
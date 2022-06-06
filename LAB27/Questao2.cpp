#include <iostream>
using namespace std;
struct Controller
{
	char name[40];
	int buttons;
	int axis;
};
// --------------------------------
// crie aqui as funções para listar
// --------------------------------

void ListarNomes(Controller c) {
	cout << c.name << endl;
}

void ListarEixos(Controller c) {
	cout << c.name << " -> " << c.axis << endl;
}

void Enumerate(void(*f)(Controller))
{
	Controller vet[] =
	{
	{"Joy", 8, 4},
	{"Xbox", 10, 3},
	{"Play", 8, 6}
	};
	for (auto i : vet)
		f(i);
}
int main(){
Enumerate(ListarNomes);
Enumerate(ListarEixos);
}
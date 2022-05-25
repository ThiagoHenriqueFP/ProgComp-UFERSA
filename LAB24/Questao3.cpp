#include <fstream>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ios_base;

union Senha {
	char alfanum[20];
	int numerica;
};
std::ifstream fin;
std::ofstream fout;

int main() {

	Senha *s;
	int choose;

	fin.open("Senha.bin", ios_base::in | ios_base::binary);
	if (!fin.is_open()) {
		char select;
		do {
		menu();
			switch (select)
			{
			case 'a':
			case 'A':
				choose = criar(s);
				break;
			case 'b':
			case 'B':
				cout << "Não há como mostrar a senha, não há arquivo para ler";
				break;
			default:
				break;
			}
		} while (select != 's' && select != 'S');
	}

	char select;
	do {
		menu();
		cin >> select;
		switch (select)
		{
		case 'a':
		case 'A':
			choose = criar(s);
			break;
		case 'e':
		case 'E':
			exibir(s, choose);
			break;
		default:
			break;
		} 
	} while (select != 's' && select != 'S');
}

int criar(Senha *s) {
	char type;
	int choose;
	cin >> type;
	do
	{
		cout << "Vamos criar a senha\nQuer criar a senha numerica(N) ou alfanumerica(A)? ";
		switch (type)
		{
		case 'a':
		case 'A':
			cout << "Digite a senha: ";
			cin >> s->alfanum;
			choose = 1;
			break;
		case 'n':
		case 'N':
			cout << "Digite a senha: ";
			cin >> s->numerica;
			choose = 0;
			break;
		default:
			break;
		}
	} while (type != 'a' && type != 'A' && type != 'n' && type != 'N');
	fout.open("Senha.bin", ios_base::out | ios_base::binary);
	fout.write((char*)&s, sizeof(Senha));
	fout.close();
	return choose;
}

void menu() {
	cout << "a) Deseja alterar a senha?\nb) Deseja exibir a senha?\n";
}

void exibir(Senha* s, int choose) {
	switch (choose)
	{
	case 0:
		cout << "A senha e: " << s->numerica;
		break;
	case 1:
		cout << "A senha e: " << s->alfanum;
		break;
	}
}
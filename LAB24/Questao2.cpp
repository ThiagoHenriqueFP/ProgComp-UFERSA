#include <fstream>
#include <iostream>

using namespace std;

struct Soldado {
	char nome[20];
	int eliminacoes = 0, mortes = 0, partidas = 0;
	float kda;
};

int main()
{
	ofstream fout;
	ifstream fin;
	Soldado s;


	fin.open("soldado.bin", ios_base::in | ios_base::binary);
	if (!fin.is_open()) {
		cout << "Criacao do novo soldado\n"
			"Nome: ";
		cin >> s.nome;
		cout << "Soldado criado com nome: " << s.nome << " \nEliminaoes: " << s.eliminacoes << "\nMortes: " << s.mortes - 1 << " \nPartidas: " << s.partidas;

		fout.open("soldado.bin", ios_base::out | ios_base::binary);
		fout.write((char*)&s, sizeof(Soldado));
		fout.close();
	}
	else {
		fin.read((char*)&s, sizeof(Soldado));
		fin.close();
	}

	char select;
	do {
		cout << "[N]ovo soldado (Sobrescreve o anterior)\n"
			"[A]tualiza o soldado (com os dados da ultima partida)\n"
			"[E]xibe soldado (atual)\n"
			"[S]air\n";
		cin >> select;
		switch (select) {
		case 'n':
		case 'N':
			fin.open("soldado.bin", ios_base::in | ios_base::binary);
			if (!fin.is_open()) {
				cout << "Ocorreu um erro ao abrir";
				break;
			}
			fin.read((char*)&s, sizeof(Soldado));
			fin.close();

			cout << "Criacao do novo soldado\n"
				"Nome: ";
			cin >> s.nome;
			cout << "\nSoldado criado com nome: " << s.nome << " \nEliminaoes: " << s.eliminacoes << "\nMortes: " << s.mortes << " \nPartidas: " << s.partidas << endl;
			fout.open("soldado.bin", ios_base::out | ios_base::binary);
			fout.write((char*)&s, sizeof(Soldado));
			fout.close();
			break;
		case 'a':
		case 'A':
			fin.open("soldado.bin", ios_base::in | ios_base::binary);
			if (!fin.is_open()) {
				cout << "Ocorreu um erro ao abrir";
				break;
			}
			fin.read((char*)&s, sizeof(Soldado));
			fin.close();

			int aux;
			cout << "Atualizar o soldado " << s.nome << endl;
			cout << "\nInforme as eliminacoes: ";
			cin >> aux;
			s.eliminacoes += aux;
			cout << "\nInforme as mortes: ";
			cin >> aux;
			s.mortes += aux;
			s.kda = s.eliminacoes / s.mortes;
			cout << "\nKDA: " << s.kda;
			s.partidas++;

			fout.open("soldado.bin", ios_base::out | ios_base::binary);
			fout.write((char*)&s, sizeof(Soldado));
			fout.close();
			break;
		case 'e':
		case 'E':
			fin.open("soldado.bin", ios_base::in | ios_base::binary);
			if (!fin.is_open()) {
				cout << "Ocorreu um erro ao abrir";
				break;
			}
			fin.read((char*)&s, sizeof(Soldado));

			cout << "nome: " << s.nome << " \nEliminaoes: " << s.eliminacoes << "\nMortes: " << s.mortes << " \nPartidas: " << s.partidas << "\nKDA: " << s.kda << endl;
			fin.close();
			break;
		default:
			break;
		}
	} while (select != 's' && select != 'S');
}
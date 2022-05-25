#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::ifstream;
using std::ofstream;
using std::endl;

struct Alunos {
	char nome[15], sobrenome[20], turno[15];
	int serie;
};

int main() {
	ifstream fin;
	fin.open("Alunos.txt");

	int res = 0;

	while (!fin.eof() || fin.good())
	{
		char carac = fin.get();
		if (carac == '\n' || fin.eof())
			res++;
	}

	Alunos * alunos = new Alunos[res];

	for (int i = 0; i<res; i++)
	{
		char tmp[20];
		fin >> tmp;
		strcpy(alunos[i].nome, tmp);
		fin >> tmp;
		strcpy(alunos[i].sobrenome, tmp);
		fin.get();
		char carac = fin.get();
		switch (carac)
		{
		case 'm':
		case 'M':
			strcpy(alunos[i].turno, "Matutino");
			break;
		case 'v':
		case 'V':
			strcpy(alunos[i].turno, "Vespertino");
			break;
		default:
			break;
		}

		int serie = fin.get();

		switch (carac)
		{
		case 6:
			alunos[i].serie = 6;
			break;
		case 7:
			alunos[i].serie = 7;
			break;
		case 8:
			alunos[i].serie = 8;
		default:
			break;
		}
	}



}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;

int main()
{
	ifstream fin;
	ofstream fout;
	char archive[30];


	cout << "Digite o nome do arquivo .cpp: ";
	cin >> archive;

	fin.open(archive);
	if (!fin.is_open()) {
		cout << "A abertura do arquivo: " << archive << " falhou\nEncerrando o programa";
		exit(EXIT_FAILURE);
	}

	fout.open("Copy_.cpp");
	if (!fout.is_open()) {
		cout << "A abertura do arquivo: Copy_.cpp falhou\nEncerrando o programa";
		exit(EXIT_FAILURE);
	}

	fout << "//" << archive << std::endl
		<< "#define print cout\n\n";

	while (!fin.eof()) {
		if (fin.fail()) {
			exit(EXIT_FAILURE);
		}
		char tmp[20];
		fin >> tmp;
		if(strcmp(tmp, "cout"))
			fout << tmp << " ";
		else {
			strcpy(tmp, "print");
			fout << tmp << " ";
		}
	}

	fin.close();
	fout.close();
}
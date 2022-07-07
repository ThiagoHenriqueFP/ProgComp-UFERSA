#include <iostream>
#include <fstream>

//void readLabs(std::ifstream&, int, int);
void readLabs(std::ifstream& fin, int unity, int line = 10) {
	int i;
	//Escolhendo a unidade para ler
	unity == 2 ? i = 10 : unity == 3 ? i = 20 : i = 0;

	unsigned count = 0, rev = 0, fix = 0, apre = 0;
	int aux;
	line = line + i;
	for (i; i < line; i++) {
		fin >> aux;
		//Descarta o primeiro
		fin >> aux;
		rev += aux;
		count += aux;

		fin >> aux;
		fix += aux;
		count += aux;

		fin >> aux;
		apre += aux;
		count += aux;
	}

	std::cout << "-------------\n" << unity << " Unidade\n-------------\n" << "Revisão: " << rev << "\nFixação: " << fix << "\nApredi: " << apre << std::endl << "Total: " << count << std::endl << std::endl;
}

int main() {
	std::ifstream fin;
	fin.open("labs.txt");
	readLabs(fin, 1);
	readLabs(fin, 2);
	readLabs(fin, 3);
	fin.close();
}


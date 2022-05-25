#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;

int palindromo(char*);

int main()
{
	ifstream fin;
	char tmp[20];
	int palin = 0;

	fin.open("palindromo.txt");

	if (!fin.is_open()) {
		cout << "Erro na abertura do arquivo\nEncerrando o programa";
		exit(EXIT_FAILURE);
	}
	
	while (!fin.eof() || fin.good()) {
		fin >> tmp;

		if (palindromo(tmp)) {
			palin++;
			cout << tmp << endl;
		}
	}

	cout << "Foram encontrado(s) " << palin << " palindromos neste arquivo";

}

int palindromo(char *ptr) {
	int i = 0;
	char newChar[20] = {};

	while (ptr[i] != '\0') {
		i++;
	}

	for (int k = i-1, j = 0; k >= 0; k--, j++)
		newChar[k] = ptr[j];
	
	if (strcmp(ptr, newChar))
		return 0;
	else
		return 1;
}
#include <iostream>
#include <fstream>

using namespace std;

struct Pares {
	int a;
	int b;
};

ostream& operator << (ostream& strm, const Pares& p);

int main() { 
	ifstream fin;
	fin.open("pares.txt");
	if (!fin.is_open())
		exit(EXIT_FAILURE);

	do{
		Pares p;
		int num;
		fin >> num;
		p.a = num;
		fin.get();
		fin >> num;
		p.b = num;

		cout << p;
	} while (!fin.eof());
	fin.close();
}

ostream& operator << (ostream& strm, const Pares& p) {
	strm << "[" << p.a << "," << p.b << "]\n";
	return strm;
}

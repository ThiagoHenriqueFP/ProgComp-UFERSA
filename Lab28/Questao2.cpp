#include <iostream>

using namespace std;

struct Tupla {
	int a;
	int b;
	int c;
};

void trocar(Tupla &a, Tupla &b) {
	Tupla aux = a;
	a = b;
	b = aux;
}

int main() {
	Tupla A = { 15, 20, 25 };
	Tupla B = { 30, 50, 60 };

	cout << "Tupla A:" << A.a << " " << A.b << " " << A.c <<"\n";
	cout << "Tupla B:" << B.a << " " << B.b << " " << B.c <<"\n\n";

	cout << "Invertendo..........\n\n";
	trocar(A, B);

	cout << "Tupla A:" << A.a << " " << A.b << " " << A.c << "\n";
	cout << "Tupla B:" << B.a << " " << B.b << " " << B.c << "\n";
}
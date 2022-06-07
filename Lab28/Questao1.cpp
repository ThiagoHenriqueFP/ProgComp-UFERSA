#include <iostream>

using namespace std;

float TempoDaVolta(float volta) {
	static float tempo = 0;
	tempo += volta;
	return tempo;
}

int main() {
	do {
		float volta;
		cout << "volta: ";
		cin >> volta;
		float tempo = TempoDaVolta(volta);
		cout << "Tempo total: " << tempo << endl;
	} while (!cin.fail());
}
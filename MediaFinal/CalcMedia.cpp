// CalcMedia.cpp � calcula a m�dia das avalia��es
#include <iostream>
using namespace std;
int main()
{
	float n1, n2, n3, n4, media;
	cout << "Calculando a m�dia" << endl;
	cout << "------------------" << endl;
	cout << endl;
	cout << "Nota 1: ";
	cin >> n1;
	cout << "Nota 2: ";
	cin >> n2;
	cout << "Nota 3: ";
	cin >> n3;
	cout << endl;
	media = (n1 + n2 + n3) / 3;
	cout << "A m�dia das notas: " << media;
	cout << endl;
	if (media < 7) {
		cout << "M�dia insuficiente para aprova��o, insira a nota da quarta prova: " << endl;
		cout << endl;
		cin >> n4;
		media = (n1 + n2 + n3 + n4) / 4;
		cout << "M�dia final: " << media << endl;
		if (media < 7) {
			cout << "Reprovado, estude mais!";
		}
		else {
			cout << "Aprovado, estude mais para n�o precisar da quarta prova" <<endl;
		}
	}
	else {
		cout << "parab�ns, aprovado!";
	}
	return 0;
}
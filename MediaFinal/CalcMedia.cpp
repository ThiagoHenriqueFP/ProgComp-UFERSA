// CalcMedia.cpp – calcula a média das avaliações
#include <iostream>
using namespace std;
int main()
{
	float n1, n2, n3, n4, media;
	cout << "Calculando a média" << endl;
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
	cout << "A média das notas: " << media;
	cout << endl;
	if (media < 7) {
		cout << "Média insuficiente para aprovação, insira a nota da quarta prova: " << endl;
		cout << endl;
		cin >> n4;
		media = (n1 + n2 + n3 + n4) / 4;
		cout << "Média final: " << media << endl;
		if (media < 7) {
			cout << "Reprovado, estude mais!";
		}
		else {
			cout << "Aprovado, estude mais para não precisar da quarta prova" <<endl;
		}
	}
	else {
		cout << "parabéns, aprovado!";
	}
	return 0;
}
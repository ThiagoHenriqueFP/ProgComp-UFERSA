#include <iostream>
using namespace std;

int main() {
	int anos;
	cout << "H� quanto tempo voc� fuma? ";
	cin >> anos;
	
	int carteirasPorDia;
	cout << "Quantas carteiras de cigarro voc� fuma por dia? ";
	cin >> carteirasPorDia;

	float precoCarteira;
	cout << "Qual valor m�dio de uma carteira de cigarros? ";
	cin >> precoCarteira;

	float valorGasto = (carteirasPorDia * anos * 365) * precoCarteira;

	cout << "Voc� gastou, at� agora R$" << valorGasto << " com cigarros.";
}
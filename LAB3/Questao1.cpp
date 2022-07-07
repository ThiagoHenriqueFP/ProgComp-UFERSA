#include <iostream>
using namespace std;

int main() {
	int anos;
	cout << "Há quanto tempo você fuma? ";
	cin >> anos;
	
	int carteirasPorDia;
	cout << "Quantas carteiras de cigarro você fuma por dia? ";
	cin >> carteirasPorDia;

	float precoCarteira;
	cout << "Qual valor médio de uma carteira de cigarros? ";
	cin >> precoCarteira;

	float valorGasto = (carteirasPorDia * anos * 365) * precoCarteira;

	cout << "Você gastou, até agora R$" << valorGasto << " com cigarros.";
}
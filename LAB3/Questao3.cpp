#include <iostream>
using namespace std;

int main()
{
	cout << "- Quanto seu corpo gasta em energia por semana -";
	float peso;
	cout << "Digite seu peso em quilos: " << endl;
	cin >> peso;

	float horasCorrida;
	cout << "Digite quantas horas por semana voce corre: ";
	cin >> horasCorrida;

	float horasCiclismo;
	cout << "Digite quantas horas por semana voce pedala: ";
	cin >> horasCiclismo;

	float horasNatacao;
	cout << "Digite quantas horas por semana voce nada: ";
	cin >> horasNatacao;

	float totalCorrida = peso * 7 * (horasCorrida / 60);
	float totalCiclismo = peso * 7 * (horasCiclismo / 60);
	float totalNatacao = peso * 8 * (horasNatacao / 60);

	float totalCal = totalCiclismo + totalCorrida + totalNatacao;

	cout << "Você gasta, por semana, " << totalCal << " calorias";

}

#include <iostream>
#include <iomanip>
#include "biblioteca.h"
using namespace std;

int main()
{
	const float multa = 0.8f;
	cout << "Qual o numero de devolucoes para hoje? ";
	int returnAmount;
	cin >> returnAmount;

	cout << "Qual a data de devolucao? ";
	Date devolutionDay;
	cin >> devolutionDay;

	Devolution* devolutions = new Devolution[returnAmount];
	drawLine('-', 25);
	for (int i = 0; i < returnAmount; i++) {
		drawLoans(devolutions[i], devolutionDay);
		while (i < returnAmount - 1) {
			std::cout << std::endl;
			drawLine('-', 35);
			break;
		}
	}
	std::cout << std::endl;
	drawLine('-', 45);
	
	
	cout << setfill('0') << setw(2) << "Resumo do dia " << devolutionDay << endl;
	for (int i = 0; i < returnAmount; i++)
	{
		dayResume(devolutions[i]);
		cout << endl;
	}
	cout << "\nTotal em multas: R$ " << apuraMultas(returnAmount, *devolutions, devolutionDay);

	delete[] devolutions;
}
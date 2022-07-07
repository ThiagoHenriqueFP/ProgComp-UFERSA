#include <iostream>

using namespace std;

float sistemaNovo(float[]);
float sistemaAntigo(float[], float[]);

int main()
{
	float notas[3];
	float pesos[3];
	float notasSistAntigo;
	float notasSistNovo;

	cout << "Informe as notas: " << endl;

	for (size_t i = 0; i < 3; i++)
	{
		cin >> notas[i];
	}

	cout << "Informe os pesos: " << endl;

	for (size_t i = 0; i < 3; i++)
	{
		cin >> pesos[i];
	}

	notasSistNovo = sistemaNovo(notas);
	cout << endl << "Media das notas no sistema novo: " << notasSistNovo;

	notasSistAntigo = sistemaAntigo(notas, pesos);
	cout << endl << "Media das notas no sistema antigo: " << notasSistNovo;
}

float sistemaNovo(float notas[])
{
	return (notas[0] + notas[1] + notas[2]) / 3;
}

float sistemaAntigo(float notas[], float pesos[])
{
	return ((notas[0] * pesos[0]) + (notas[1] * pesos[1]) + (notas[2] * pesos[2])) / 9;
}
#include <iostream>

using std::cout;
using std::cin;

void soma(float num1, float num2);
void subtracao(float num1, float num2);
void mult(float num1, float num2);
void divisao(float num1, float num2);

int main() {
	char select;
	cout << "----- Calculadora -----\n";
	do {
			float num1, num2;
			cout << "Digite dois operandos: ";
			cin >> num1 >> num2;
			cout << "\nDigite:\na) para soma\nb) para subtrair\nc) para multiplicar\nd) para dividir\ne) para sair\n\n";
			cin >> select;
			switch (select)
			{
			case 'a':
			case 'A':
				soma(num1, num2);
				break;
			case 'b':
			case 'B':
				subtracao(num1, num2);
				break;
			case 'c':
			case 'C':
				mult(num1, num2);
				break;
			case'd':
			case 'D':
				divisao(num1, num2);
				break;
			case 'f':
			case 'F':
				break;
			default:
				cout << "Insira uma das letras acima";
				break;
			}

	} while (select != 'f');
}

void soma(float num1, float num2)
{
	cout << "\n A soma e = " << num1 + num2 << std::endl;
}

void subtracao(float num1, float num2)
{
	cout << "\n A subtracao e = " << num1 - num2 << std::endl;
}

void mult(float num1, float num2)
{
	cout << "\n A multiplicacao e = " << num1 * num2 << std::endl;
}

void divisao(float num1, float num2)
{
	cout << "\n A divisao e = " << num1 / num2 << std::endl;
}
#include <iostream>
#include <iomanip>
#include "simd.h"
#include "crypto.h"

;
using namespace std;

int main()
{
	int num1, num2, num3, num4;

	cin >> num1 >> num2 >> num3 >> num4;
	unsigned int firstRow32 = armazena(num1, num2, num3, num4);
	
	cin >> num1 >> num2 >> num3 >> num4;
	unsigned int secondRow32 = armazena(num1, num2, num3, num4);

	cout << "[" << setfill('0') << setw(3) << primeiro(firstRow32);
	cout << "," << setfill('0') << setw(3) << segundo(firstRow32);
	cout << "," << setfill('0') << setw(3) << terceiro(firstRow32);
	cout << "," << setfill('0') << setw(3) << quarto(firstRow32) << "] = xxma" << endl;

	cout << "[" << setfill('0') << setw(3) << primeiro(secondRow32);
	cout << "," << setfill('0') << setw(3) << segundo(secondRow32);
	cout << "," << setfill('0') << setw(3) << terceiro(secondRow32);
	cout << "," << setfill('0') << setw(3) << quarto(secondRow32) << "] = xxmb" << endl << endl;

	cout << "Operandos em 32bits = " << firstRow32 << endl;
	cout << "Operandos em 32bits = " << secondRow32 << endl;

	unsigned somaOpe = soma(firstRow32, secondRow32);
	unsigned multOpe = mult(firstRow32, secondRow32);

	cout << endl << "Soma em 32 bits = \t" << somaOpe;
	cout << endl << "Multiplicação = \t" << multOpe << endl << endl;

	cout << "[" << setfill('0') << setw(3) << primeiro(firstRow32) + primeiro(secondRow32);
	cout << "," << setfill('0') << setw(3) << segundo(firstRow32) + segundo(secondRow32);
	cout << "," << setfill('0') << setw(3) << terceiro(firstRow32) + terceiro(secondRow32);
	cout << "," << setfill('0') << setw(3) << quarto(firstRow32) + quarto(secondRow32) << "] = Somas" << endl;

	cout << "[" << setfill('0') << setw(3) << primeiro(firstRow32) * primeiro(secondRow32);
	cout << "," << setfill('0') << setw(3) << segundo(firstRow32) * segundo(secondRow32);
	cout << "," << setfill('0') << setw(3) << terceiro(firstRow32) * terceiro(secondRow32);
	cout << "," << setfill('0') << setw(3) << quarto(firstRow32) * quarto(secondRow32) << "] = Multiplicação" << endl << endl;

	unsigned __int64 soma64Bits = codificar(unsigned __int64(somaOpe)); // unsigned long long int
	unsigned __int64 mult64Bits = codificar(unsigned __int64(multOpe));

	cout << "Soma cripto em 64 bits = " << soma64Bits << endl;
	cout << "Mult cripto em 64 bits = " << mult64Bits << endl << endl;

	unsigned __int64 somaCodificada = soma64Bits >> 32;
	unsigned __int64 somaDecodificada = decodificar(soma64Bits);

	cout << "Valor codificado = " << somaCodificada << endl;
	cout << "Soma decodificada = " << somaDecodificada << endl << endl;

	unsigned __int64 multCodificada = mult64Bits >> 32;
	unsigned __int64 multDecodificada = decodificar(mult64Bits);

	cout << "Valor codificado = " << multCodificada << endl;
	cout << "multiplicação decodificada = " << multDecodificada;
}
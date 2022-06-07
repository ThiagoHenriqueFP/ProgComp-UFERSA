#include <iostream>
#include <cmath>
#include <iomanip>
#include "biblioteca.h"

float apuraMultas(int returnAmount, Devolution& devolutions, Date& dateDevolution)
{	
	float totalEarned = 0;
	Devolution* auxD = &devolutions;
	for (int i = 0; i < returnAmount; i++)
		totalEarned += auxD[i].multa;
	return totalEarned;
}

void drawLoans(Devolution& devolution, Date& devolutionDay)
{
	std::cout << std::setw(10) << std::left << "Aluno" << ": ";
	std::cin >> devolution.matricula;
	std::cout << std::setw(10) << "Livro" << ": ";
	std::cin >> devolution.bookReference;
	std::cout << std::setw(10) << "emprestimo" << ": ";
	std::cin >> devolution.loanDate;
	devolution.returnDate = devolutionDay;
	int fee = devolutionDay - devolution.loanDate;
	while (fee <= 3)
	{
		devolution.multa = 0;
		std::cout << std::setw(10) << "Atraso" << ":" << 0;
		break;
	}

	while (fee > 3)
	{
		devolution.multa = fee * 0.8f - 2.4f;
		std::cout << std::setw(10) << "Atraso" << ": " << fee - 3;
		break;
	}
	std::cout << std::setw(10) << "\nMulta" << "R$ " << devolution.multa;
}

void dayResume(Devolution& devolution)
{
	std::cout << devolution.matricula << " " << devolution.bookReference << " " << devolution.loanDate << " -> R$" << devolution.multa;
}

void drawLine(char repeatedChar, int count)
{
	for (int i = 0; i < count; i++)
	{
		std::cout << repeatedChar;
	}
	std::cout << std::endl;
}

//Configurando o cout para exibir os meses por extenso
std::ostream& operator << (std::ostream& strm, Meses month)
{
	const char* monthCharVet[12] = { "janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outobro", "novembro", "dezembro" };
	strm << monthCharVet[int(month)];
	return strm;
}

//Configurando a exibição da data
std::ostream& operator << (std::ostream& strm, Date date) {
	strm << std::setw(2) << std::setfill('0') << std::right << date.day << " de ";
	strm << date.month << " de ";
	strm << date.year;
	return strm;
}

//Configurando o cin para ler o tipo Date
std::istream& operator >> (std::istream& strm, Date& date)
{
	char vet[11];
	strm >> vet;
	date.day = ((vet[0] - '0') * 10) + (vet[1] - '0');
	date.month = Meses((((vet[3] - '0') * 10) + (vet[4] - '0')) - 1);
	date.year = int(((vet[6] - '0') * 1000) + ((vet[7] - '0') * 100) + ((vet[8] - '0') * 10) + (vet[9] - '0'));
	return strm;
}

//Configurando a subtração de datas
int operator-(Date& lhs, Date& rhs)
{
	int yearsPassed = std::abs(lhs.year - rhs.year);
	int monthPassed = std::abs(int(lhs.month) - int(rhs.month));
	int daysPassed = std::abs(lhs.day - rhs.day);

	int totalLHSDays = 0;

	for (int i = 0; i <= monthPassed; i++)
	{
		while ((int(lhs.month) - i) % 2 == 0 && int(lhs.month) - i != 1)
		{
			totalLHSDays += 30;
			break;
		}

		while ((int(lhs.month) - i) % 2 == 1 && int(lhs.month) - i != 1)
		{
			totalLHSDays += 31;
			break;
		}

		while (int(lhs.month) - i == 1)
		{
			totalLHSDays += 28;
			break;
		}
	}

	int start = totalLHSDays + lhs.day;

	int totalRHSDays = 0;

		while ((int(rhs.month)) % 2 == 0 && int(rhs.month) != 1)
		{
			totalRHSDays += 30;
			break;
		}

		while ((int(rhs.month)) % 2 == 1 && int(rhs.month) != 1)
		{
			totalRHSDays += 31;
			break;
		}

		while (int(rhs.month) == 1)
		{
			totalRHSDays += 28;
			break;
		}

		int finish = totalRHSDays + rhs.day;


	int total = (365 * yearsPassed) + std::abs(start-finish);
	return total;
}
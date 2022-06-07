#include <iostream>
enum Meses { janeiro, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outobro, novembro, dezembro };

struct Date {
	int day;
	Meses month;
	int year;
};

struct Devolution {
	Date loanDate;
	Date returnDate;
	int matricula;
	char bookReference[5];
	float multa;
};


//Definição de funções
float apuraMultas(int, Devolution&, Date&);
void drawLoans(Devolution&, Date&);
void dayResume(Devolution&);
void drawLine(char, int);
std::ostream& operator << (std::ostream&, Meses);
std::ostream& operator << (std::ostream&, Date);
std::istream& operator >> (std::istream&, Date&);
int operator-(Date&, Date&);
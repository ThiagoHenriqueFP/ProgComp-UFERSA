#include <iostream>

using namespace std;

enum mes {JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ};
enum dias { SEG, TER, QUA, QUI, SEX, SAB, DOM};

int main()
{
 char meses[12][10] =
 {
  "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
  "Julho", "Agosto", "Setembro", "Outubro", "Novembro",
  "Dezembro"
 };
 for (mes ind = JAN; ind <= DEZ; ind = mes(ind + 1))
  cout << meses[ind] << endl;

  char diasSemana[7][10] = 
  {
    "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado", "Domingo"
  };

  for (dias ind = SEG; ind <= DOM; ind = dias(ind +1))
    cout << diasSemana[ind] << endl;
 return 0;
}
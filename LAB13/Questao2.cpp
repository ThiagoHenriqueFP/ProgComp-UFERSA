#include <iostream>

using namespace std;

union jogador
{
 char nome[25]; // nome do jogador
 int numero; // numero da camisa do jogador
};

struct gol
{
 jogador jog; // identificação do jogador
 int hora, min; // hora e minuto em que o gol foi marcado
};

int main()
{
  gol estatistica[3];

  cout << "Digite os dados dos 3 ultimos gols" << endl;
  for (size_t i = 0; i < 3; i++)
  {
  cout << "Gol: ";
  cin >> estatistica[i].jog.nome;
  cout << " ";
  cin >> estatistica[i].hora;
  cout << ":";
  cin >> estatistica[i].min;
  cout << endl;
  }
  
}
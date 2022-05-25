#include <iostream>

using  namespace std;

enum trave {LEsq, LDir, CantoEsq, CantoDir, Centro};
union jogador
{
 char nome[25];
 int numero;
};
struct gol
{
 jogador jog; // identificação do jogador
 float x,y,z; // posição da bola nas coordenadas
 trave local; // onde a bola entrou
 float velo; // velocidade da bola
 float acel; // aceleração da bola
};
gol estatistica[10]; // estatísticas para até 10 gols

//i) Vetor de gol
//j) elemento do vetor de gol, ou um gol
//k) jogador da segunda posição do vetor de gol
//l) Invalido
//m) Novo vetor de estatistica
//n) Float
//o) posição 0 do novo vetor estatistica
//p) Float
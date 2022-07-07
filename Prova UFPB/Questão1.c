#include <stdlib.h>
#include <stdio.h>

int main(){
  int rockwell = 50, carbono = 7, tracao = 80000;
  float q1, q2, q3; //Questao 1, 2 e 3
  int grau = 7;

  printf("Conteúdo de carbono? ");
  scanf("%f",&q1);
  printf("Dureza de Rockwell? ");
  scanf("%f",&q2);
  printf("Resistência de tração? ");
  scanf("%f",&q3);

  if(q1 < carbono)
    grau +=1;

  if(q2 >= rockwell)
    grau +=1;

  if(q3 >= tracao)
    grau +=1;

  printf("Esta amostra de aço possui um grau de = %d", grau);
}
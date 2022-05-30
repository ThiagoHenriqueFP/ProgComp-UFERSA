#include <iostream>

void verificar (int*, int*);

int main(){
  int vet [11] = { 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0 };
  verificar(vet, vet+11);
}

void verificar (int* start, int* end){
  int um = 0, zero = 0;
  for(int* i=start; i!=end; i++){
    if(*i == 1)
      ++um;
    else
      ++zero;
  }

  std::cout << "Ha " << um << " Numeros 1 e " << zero << " numeros 0" << std::endl;
}

/* Construa uma função que receba dois ponteiros indicando uma faixa de elementos
dentro de um vetor e um valor inteiro e retorne quantas vezes esse valor acontece
dentro da faixa. Para testar a função construa um programa que inicializa um vetor
para os elementos { 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0 } e mostra a quantidade de zeros e
uns que tem dentro do vetor. */
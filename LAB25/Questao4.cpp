#include <iostream>

int* joinVet(int *, int, int *, int);

int main(){
  int vet1[4] = { 1, 2, 3, 4 };
  int vet2[2] = { 1, 2};

  int * newVet;
  newVet = joinVet(vet1, 4, vet2, 2);

  for (int i = 0; i < 6; i++)
  {
    std::cout << newVet[i] << " ";
  }
  
}

int* joinVet(int * vet1, int vet1Length, int* vet2, int vet2Length){
  int * newVet = new int[vet1Length+vet2Length];
  for(int i=0; i<vet1Length; i++)
    newVet[i] = vet1[i];

  for(int i = vet1Length; i<vet1Length + vet2Length; i++)
    newVet[i] = vet2[i-vet1Length];

    return newVet;
}

/* Construa uma função que receba dois vetores de inteiros, e crie um vetor dinâmico
com o conteúdo dos dois vetores. A função deve retornar o endereço do vetor
resultante, que deve ser exibido na tela pelo programa principal. */
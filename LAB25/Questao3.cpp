#include <iostream>

int locate(const int *, int);
void openSpace(int, int, int*);


int main(){
  int newArr[10] {};
  int num[10] = {2, 3, 1, 8, 5, 6, 9, 4, 8, 7};
  /* for(int i=0; i<10; i++)
    std::cin >> num[i]; */

  for(int i=0; i<10; i++){
    int pos = locate(num, num[i]);
    //openSpace(num[i], pos, newArr);
  }

  for(int i=0; i<10; i++){
    std::cout << newArr[i] << " ";
  }

}

int locate(const int * num, int value){
  int i;
  for(i=0; i<10; i++){
    if(!(num[i] >= value && num[i+1] <= value))
      break;
  }

  return i;
}

void openSpace(int value, int pos, int* newArr){
  int aux = newArr[pos];
  newArr[pos] = value;

  for(int i = 0; i< 10; i++){
    int tmp = newArr[i];
    newArr[i] = aux;
    aux = tmp;
  }
}

/* Escreva um programa que leia 10 valores do usuário e os insira em um vetor de
forma que os elementos fiquem ordenados. Para isso, antes de cada inserção, use
uma função Locate para localizar e retornar a posição correta do elemento dentro
do vetor. Em seguida use outra função, OpenSpace, que receba uma posição e abra
espaço no vetor nessa posição, “empurrando” os demais elementos para a próxima
posição. Caso a operação de abrir espaço não seja possível, porque o vetor está
cheio, a função deve retornar falso. Use estas funções no programa principal para
inserir os elementos e depois exibir os elementos ordenados. */
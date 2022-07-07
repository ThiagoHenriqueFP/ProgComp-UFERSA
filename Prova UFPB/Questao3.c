#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2, soma = 0,num[10], count =0;
  printf("Digite dois numeros:\n");
  scanf("%d", &num1);
  scanf("%d", &num2);

  while (num1 / 2 != 1) {
    if (num1 % 2 == 1) {
      soma += num2;
      num[count++] = num2;
    }

    num1 /= 2;
    num2 *= 2;

    printf("%d\t%d\n", num1, num2);
  }

  num1 /= 2;
  num2 *= 2;
  if (num1 % 2 == 1) {
      soma += num2;
      num[count++] = num2;
  }
  printf("%d\t%d\n", num1, num2);
  printf("Soma: %d(", soma);
  for(int i = 0; i < count; i++)
    if(i%2==0) 
      printf("%d+", num[i]);
    else
      printf("%d", num[i]);

    printf(")");
}
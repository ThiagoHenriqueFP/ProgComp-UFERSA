#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int tipoRadio, quantidadePecas, pecasTipo1 = 0, pecasTipo2 = 0, totalPecas = 0;
  do {
    printf("Tipo de Rádio\t\tQuantidade de Peças\n");
    scanf("%d",&tipoRadio);
    switch(tipoRadio) {
      case 1:
        scanf("%d", &quantidadePecas);
        totalPecas += quantidadePecas;
        pecasTipo1 += quantidadePecas;
        break;
      case 2:
        scanf("%d", &quantidadePecas);
        totalPecas += quantidadePecas;
        pecasTipo2 += quantidadePecas;
        break;
      case 0:
        printf("Saindo do programa...\n");
        break;
      default:
        printf("Digite o número 1 ou 2\n");
        break;
    }
  }while(tipoRadio!=0);

  printf("Total de peças standard %d\n", pecasTipo1);
  printf("Total de peças luxo %d\n", pecasTipo2);
  printf("Total de peças vendidas %d", totalPecas);
}
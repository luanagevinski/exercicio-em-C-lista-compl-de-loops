#include<stdio.h>
int main(){
int quantidade, opcao;
float valor, total;
char continuar;

total = 0;

 do{
  printf("1 - ABACAXI -> R$ 5.00 un.\n");
  printf("2 - MAÇÃ -> R$ 1.00 un.\n");
  printf("3 - PERA -> R$ 4.00 un.\n");

  printf("Digite a opção desejada: \n");
  scanf("%d", &opcao);
  printf("Digite a quantidade de frutas: \n");
  scanf("%d", &quantidade);

  valor = 0;
  if(opcao == 1){
    valor = quantidade * 5.00;
  }else if(opcao == 2){
    valor = quantidade * 1.00;
  }else if(opcao == 3){
    valor = quantidade * 4.00;
  }else{
    printf("Opção inválida!\n");
  }

  total += valor;
  printf("\nDeseja fazer outra compra? (S/N): ");
    scanf(" %c", &continuar);
}


 while (continuar == 'S' || continuar == 's');

    printf("O valor total da compra é: R$ %.2f\n", total);

    return 0;
}
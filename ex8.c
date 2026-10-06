#include<stdio.h>
int main(){
int mes, ano;
char continuar;

    do {
        printf("Digite o mês do ano para saber a quantidade de dias: ");
        scanf("%d", &mes);
        printf("Digite o ano: ");
        scanf("%d", &ano);

        if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
            if(mes == 2){
                printf("O mês %d do ano %d tem 29 dias.\n", mes, ano);
            }else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
                printf("O mês %d do ano %d tem 30 dias.\n", mes, ano);
            }else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
                printf("O mês %d do ano %d tem 31 dias.\n", mes, ano);
            }else{
                printf("Mês inválido. Digite um valor entre 1 e 12.\n");
            }
        }
        else{
            if(mes == 2){
                printf("O mês %d do ano %d tem 28 dias.\n", mes, ano);
            }else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
                printf("O mês %d do ano %d tem 30 dias.\n", mes, ano);
            }else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
                printf("O mês %d do ano %d tem 31 dias.\n", mes, ano);
            }else{
                printf("Mês inválido. Digite um valor entre 1 e 12.\n");
            }
        }
        printf("Deseja continuar? 'S' para sim, 'N' para não: ");
    scanf(" %c", &continuar);
    }
    while(continuar == 'S' || continuar == 's');
    
return 0;
}
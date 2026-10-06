#include<stdio.h>
int main(){
    int divisor;

    printf("Digite um número para saber seus divisores: ");
    scanf("%d", &divisor);

    for(int i = 1; i <= divisor; i++){
        if(divisor % i == 0){
            printf("%d é divisor de %d\n", i, divisor);
        }
    }
    return 0;
}
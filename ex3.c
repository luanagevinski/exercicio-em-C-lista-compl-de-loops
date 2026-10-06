#include <stdio.h>

int main(){

    int idade;
    char opniao;

    int qtdOtimo = 0;
    int qtdBom = 0;
    int qtdRegular = 0;
    int qtdRuim = 0;
    int qtdPessimo = 0;

    int somaIdadeRuim = 0;

    int maiorIdadeOtimo = 0;
    int maiorIdadeRuim = 0;
    int maiorIdadePessimo = 0;

    for (int i = 0; i < 100; i++)
    {
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        printf("A - Ótimo\n");
        printf("B - Bom\n");
        printf("C - Regular\n");
        printf("D - Ruim\n");
        printf("E - Péssimo\n");

        printf("Digite sua avaliação: ");
        scanf(" %c", &opniao);

        if(opniao == 'A' || opniao == 'a'){

            qtdOtimo++;

            if(idade > maiorIdadeOtimo){
                maiorIdadeOtimo = idade;
            }

        }else if(opniao == 'B' || opniao == 'b'){

            qtdBom++;

        }else if(opniao == 'C' || opniao == 'c'){

            qtdRegular++;

        }else if(opniao == 'D' || opniao == 'd'){

            qtdRuim++;
            somaIdadeRuim += idade;

            if(idade > maiorIdadeRuim){
                maiorIdadeRuim = idade;
            }

        }else if(opniao == 'E' || opniao == 'e'){

            qtdPessimo++;

            if(idade > maiorIdadePessimo){
                maiorIdadePessimo = idade;
            }
        }
    }

    // RESULTADOS

    float mediaRuim = 0;

    if(qtdRuim > 0){
        mediaRuim = (float)somaIdadeRuim / qtdRuim;
    }

    float percentualPessimo = (qtdPessimo * 100.0) / 100.0;

    float percentualBom = (qtdBom * 100.0) / 100.0;
    float percentualRegular = (qtdRegular * 100.0) / 100.0;

    float diferencaPercentual = percentualBom - percentualRegular;

    if(diferencaPercentual < 0){
        diferencaPercentual = -diferencaPercentual;
    }

    int diferencaIdade = maiorIdadeOtimo - maiorIdadeRuim;

    if(diferencaIdade < 0){
        diferencaIdade = -diferencaIdade;
    }

    printf("\n===== RESULTADOS =====\n");

    printf("Quantidade de respostas OTIMO: %d\n", qtdOtimo);

    printf("Diferenca percentual entre BOM e REGULAR: %.2f%%\n",
           diferencaPercentual);

    printf("Media de idade das pessoas que responderam RUIM: %.2f\n",
           mediaRuim);

    printf("Percentual de respostas PESSIMO: %.2f%%\n",
           percentualPessimo);

    printf("Maior idade que respondeu PESSIMO: %d\n",
           maiorIdadePessimo);

    printf("Diferenca de idade entre a maior idade de OTIMO e RUIM: %d\n",
           diferencaIdade);

    return 0;
}
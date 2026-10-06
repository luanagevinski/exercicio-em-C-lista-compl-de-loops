#include<stdio.h>

int main(){

    char elevador, periodo;

    int elevadorA = 0;
    int elevadorB = 0;
    int elevadorC = 0;

    int matutino = 0;
    int vespertino = 0;
    int noturno = 0;

    int AM = 0;
    int AV = 0;
    int AN = 0;

    int BM = 0;
    int BV = 0;
    int BN = 0;

    int CM = 0;
    int CV = 0;
    int CN = 0;

    // Entrada dos 50 moradores
    for(int i = 0; i < 50; i++){

        printf("\nQual elevador você utiliza com mais frequência? ");
        printf("'A', 'B' ou 'C': ");
        scanf(" %c", &elevador);

        printf("Qual período você utiliza o elevador com mais frequência? ");
        printf("'M' (matutino), 'V' (vespertino) ou 'N' (noturno): ");
        scanf(" %c", &periodo);


        // Contagem dos elevadores e dos períodos
        if(elevador == 'A' || elevador == 'a'){

            elevadorA++;

            if(periodo == 'M' || periodo == 'm'){
                AM++;
            }else if(periodo == 'V' || periodo == 'v'){
                AV++;
            }else if(periodo == 'N' || periodo == 'n'){
                AN++;
            }

        }else if(elevador == 'B' || elevador == 'b'){

            elevadorB++;

            if(periodo == 'M' || periodo == 'm'){
                BM++;
            }else if(periodo == 'V' || periodo == 'v'){
                BV++;
            }else if(periodo == 'N' || periodo == 'n'){
                BN++;
            }

        }else if(elevador == 'C' || elevador == 'c'){

            elevadorC++;

            if(periodo == 'M' || periodo == 'm'){
                CM++;
            }else if(periodo == 'V' || periodo == 'v'){
                CV++;
            }else if(periodo == 'N' || periodo == 'n'){
                CN++;
            }
        }


        // Contagem total de cada período
        if(periodo == 'M' || periodo == 'm'){
            matutino++;
        }else if(periodo == 'V' || periodo == 'v'){
            vespertino++;
        }else if(periodo == 'N' || periodo == 'n'){
            noturno++;
        }
    }


    // Total de pessoas em cada elevador
    int totalA = AM + AV + AN;
    int totalB = BM + BV + BN;
    int totalC = CM + CV + CN;


    // 1. Período mais usado e a qual elevador pertence
    int maior = AM;

    if(AV > maior){
        maior = AV;
    }

    if(AN > maior){
        maior = AN;
    }

    if(BM > maior){
        maior = BM;
    }

    if(BV > maior){
        maior = BV;
    }

    if(BN > maior){
        maior = BN;
    }

    if(CM > maior){
        maior = CM;
    }

    if(CV > maior){
        maior = CV;
    }

    if(CN > maior){
        maior = CN;
    }


    if(maior == AM){
        printf("\nO período mais usado é o matutino do elevador A.\n");

    }else if(maior == AV){
        printf("\nO período mais usado é o vespertino do elevador A.\n");

    }else if(maior == AN){
        printf("\nO período mais usado é o noturno do elevador A.\n");

    }else if(maior == BM){
        printf("\nO período mais usado é o matutino do elevador B.\n");

    }else if(maior == BV){
        printf("\nO período mais usado é o vespertino do elevador B.\n");

    }else if(maior == BN){
        printf("\nO período mais usado é o noturno do elevador B.\n");

    }else if(maior == CM){
        printf("\nO período mais usado é o matutino do elevador C.\n");

    }else if(maior == CV){
        printf("\nO período mais usado é o vespertino do elevador C.\n");

    }else if(maior == CN){
        printf("\nO período mais usado é o noturno do elevador C.\n");
    }


    // 2. Elevador mais frequentado e período de maior fluxo
    if(totalA > totalB && totalA > totalC){

        if(AM > AV && AM > AN){
            printf("O elevador A é o mais frequentado e o maior fluxo ocorre no período matutino.\n");

        }else if(AV > AM && AV > AN){
            printf("O elevador A é o mais frequentado e o maior fluxo ocorre no período vespertino.\n");

        }else{
            printf("O elevador A é o mais frequentado e o maior fluxo ocorre no período noturno.\n");
        }

    }else if(totalB > totalA && totalB > totalC){

        if(BM > BV && BM > BN){
            printf("O elevador B é o mais frequentado e o maior fluxo ocorre no período matutino.\n");

        }else if(BV > BM && BV > BN){
            printf("O elevador B é o mais frequentado e o maior fluxo ocorre no período vespertino.\n");

        }else{
            printf("O elevador B é o mais frequentado e o maior fluxo ocorre no período noturno.\n");
        }

    }else{

        if(CM > CV && CM > CN){
            printf("O elevador C é o mais frequentado e o maior fluxo ocorre no período matutino.\n");

        }else if(CV > CM && CV > CN){
            printf("O elevador C é o mais frequentado e o maior fluxo ocorre no período vespertino.\n");

        }else{
            printf("O elevador C é o mais frequentado e o maior fluxo ocorre no período noturno.\n");
        }
    }


    // 3. Diferença percentual entre o maior e o menor horário

    int maiorHorario = matutino;
    int menorHorario = matutino;

    if(vespertino > maiorHorario){
        maiorHorario = vespertino;
    }

    if(noturno > maiorHorario){
        maiorHorario = noturno;
    }

    if(vespertino < menorHorario){
        menorHorario = vespertino;
    }

    if(noturno < menorHorario){
        menorHorario = noturno;
    }

    float diferencaPercentual =
        (maiorHorario - menorHorario) * 100.0 / 50;

    printf("A diferença percentual entre o horário mais usado e o menos usado é: %.2f%%\n",
           diferencaPercentual);


    // 4. Elevador de média utilização

    int elevadorMedio;

    if((totalA > totalB && totalA < totalC) ||
       (totalA < totalB && totalA > totalC)){

        elevadorMedio = totalA;

    }else if((totalB > totalA && totalB < totalC) ||
             (totalB < totalA && totalB > totalC)){

        elevadorMedio = totalB;

    }else{

        elevadorMedio = totalC;
    }

    float percentualMedio =
        (elevadorMedio * 100.0) / 50;

    printf("A porcentagem do elevador de média utilização é: %.2f%%\n",
           percentualMedio);


    return 0;
}
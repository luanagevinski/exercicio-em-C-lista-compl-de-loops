 #include<stdio.h>
 int main(){
    char nome[50];
    char sexo;
    int homens = 0, mulheres = 0;   
    float altura, peso;
    float alturaHomens = 0, alturaMulheres = 0;
    float pesoHomens = 0, pesoMulheres = 0;
    float pesoMedioHomens = 0, pesoMedioMulheres = 0;
     float mediaHomens = 0;
     float mediaMulheres = 0;
     float media = 0;
     float alturaTotal = 0;
     float  pesoTotal = 0;
     float mediaAlturaGrupo = 0;
     float pesoMedioGrupo = 0;

    

    for(int i = 0; i <= 10; i++){
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", nome);

        printf("Digite o sexo da pessoa %d ('M' para masculino, 'F' para feminino): ", i + 1);
        scanf(" %c", &sexo);

        printf("Digite a altura da pessoa %d (em cm): ", i + 1);
        scanf("%f", &altura);

        printf("Digite o peso da pessoa %d (em kg): ", i + 1);
        scanf("%f", &peso);

        alturaTotal += altura;
        pesoTotal += peso;

        if(sexo == 'M' || sexo == 'm'){
            homens++;
            alturaHomens += altura;
            pesoHomens += peso;

        }else if(sexo == 'F' || sexo == 'f'){
            mulheres++;
            alturaMulheres += altura;
            pesoMulheres += peso;
        }
       
    }

    if(homens > 0){
        mediaHomens = alturaHomens / homens;
        pesoMedioHomens = pesoHomens / homens;
    }
    if(mulheres > 0){
        mediaMulheres = alturaMulheres / mulheres;
        pesoMedioMulheres = pesoMulheres / mulheres;
    }
  
    mediaAlturaGrupo = alturaTotal / 10;
    pesoMedioGrupo = pesoTotal / 10;

    printf("\nResultados:\n");
    printf("Número de homens: %d\n", homens);

    printf("Número de mulheres: %d\n", mulheres);

    printf("Altura média dos homens: %.2f cm\n", mediaHomens);

    printf("Altura média das mulheres: %.2f cm\n", mediaMulheres);

    printf("Altura média do grupo: %.2f cm\n", mediaAlturaGrupo);

    printf("Peso médio dos homens: %.2f kg\n", pesoMedioHomens);

    printf("Peso médio das mulheres: %.2f kg\n", pesoMedioMulheres);

    printf("Peso médio do grupo: %.2f kg\n", pesoMedioGrupo);

   
 }
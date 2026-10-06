#include <stdio.h>

int main() {

    char sexo;
    char olhos;
    char cabelos;
    int idade;
    float salario;

    int total = 0;
    int quantidade = 0;
    float porcentagem;

    printf("Digite a idade (-1 para encerrar): ");
    scanf("%d", &idade);

    while(idade != -1) {

        while(idade < 10 || idade > 100) {
            printf("Idade inválida! Digite uma idade entre 10 e 100: ");
            scanf("%d", &idade);

            if(idade == -1) {
                break;
            }
        }

        if(idade == -1) {
            break;
        }

        total++;

        printf("Digite o sexo ('m' MASCULINO ou 'f' FEMININO): ");
        scanf(" %c", &sexo);

        while(sexo != 'm' && sexo != 'f') {
            printf("Sexo inválido! Digite 'm' para masculino ou 'f' para feminino: ");
            scanf(" %c", &sexo);
        }

        printf("Digite a cor dos olhos ('a' AZUL ou 'v' VERDE ou 'c' CASTANHO ou 'p' PRETO): ");
        scanf(" %c", &olhos);

        while(olhos != 'a' && olhos != 'v' &&
              olhos != 'c' && olhos != 'p') {

            printf("Cor dos olhos inválida! Digite 'a' para azul, 'v' para verde, 'c' para castanho ou 'p' para preto: ");
            scanf(" %c", &olhos);
        }

        printf("Digite a cor dos cabelos ('l' LOIRO ou 'c' CASTANHO ou 'p' PRETO ou 'r' RUIVO): ");
        scanf(" %c", &cabelos);

        while(cabelos != 'l' && cabelos != 'c' &&
              cabelos != 'p' && cabelos != 'r') {

            printf("Cor dos cabelos inválida! Digite l, c, p ou r: ");
            scanf(" %c", &cabelos);
        }

        printf("Digite o salário: ");
        scanf("%f", &salario);

        while(salario < 0) {
            printf("Salário inválido! Digite um valor maior ou igual a zero: ");
            scanf("%f", &salario);
        }

        if(sexo == 'f' &&
           idade >= 18 && idade <= 35 &&
           olhos == 'c' &&
           cabelos == 'c') {

            quantidade++;
        }

        printf("\nDigite a idade do próximo habitante (-1 para encerrar): ");
        scanf("%d", &idade);
    }

    if(total > 0) {
        porcentagem = (quantidade * 100.0) / total;

        printf("\nTotal de habitantes: %d\n", total);
        printf("Quantidade que atende às condições: %d\n", quantidade);
        printf("Porcentagem: %.2f%%\n", porcentagem);
    } else {
        printf("\nNenhum habitante foi cadastrado.\n");
    }

    return 0;
}
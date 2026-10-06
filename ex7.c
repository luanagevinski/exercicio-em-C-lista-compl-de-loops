#include <stdio.h>
#include <ctype.h>

#define MIN 50
#define MAX 300

int main(void) {
    char nomes[MAX][50];
    int idades[MAX];
    char sexos[MAX];
    int votos[MAX];
    int contagem[5] = {0};
    const char *jogadoras[5] = {
        "Sam Kerr - Australia",
        "Alex Morgan - Estados Unidos",
        "Dzsenifer Marozsan - Alemanha",
        "Amandine Henry - Franca",
        "Marta Vieira - Brasil"
    };
    int n = 0, i, j;
    char continuar = 'S';

    do {
        printf("\n--- Entrevistado %d ---\n", n + 1);

        printf("Nome: ");
        scanf(" %49[^\n]", nomes[n]);

        do {
            printf("Idade (maior que 12): ");
            scanf("%d", &idades[n]);
            if (idades[n] <= 12)
                printf("Idade invalida!\n");
        } while (idades[n] <= 12);

        do {
            printf("Sexo (M/F): ");
            scanf(" %c", &sexos[n]);
            sexos[n] = toupper(sexos[n]);
            if (sexos[n] != 'M' && sexos[n] != 'F')
                printf("Sexo invalido!\n");
        } while (sexos[n] != 'M' && sexos[n] != 'F');

        for (i = 0; i < 5; i++)
            printf("%d - %s\n", i + 1, jogadoras[i]);
        do {
            printf("Voto (1 a 5): ");
            scanf("%d", &votos[n]);
            if (votos[n] < 1 || votos[n] > 5)
                printf("Voto invalido!\n");
        } while (votos[n] < 1 || votos[n] > 5);

        contagem[votos[n] - 1]++;
        n++;

        if (n < MIN) {
            printf("Faltam %d entrevistados para o minimo.\n", MIN - n);
            continuar = 'S';
        } else if (n == MAX) {
            printf("Limite de %d entrevistados atingido.\n", MAX);
            continuar = 'N';
        } else {
            do {
                printf("Deseja entrevistar outra pessoa? (S/N): ");
                scanf(" %c", &continuar);
                continuar = toupper(continuar);
            } while (continuar != 'S' && continuar != 'N');
        }
    } while (continuar == 'S');

    printf("\n===== VOTOS POR JOGADORA =====\n");
    for (i = 0; i < 5; i++)
        printf("%s: %d voto(s)\n", jogadoras[i], contagem[i]);

    int maior = contagem[0];
    for (i = 1; i < 5; i++)
        if (contagem[i] > maior)
            maior = contagem[i];

    printf("\n===== MAIS VOTADA(S) =====\n");
    for (i = 0; i < 5; i++)
        if (contagem[i] == maior)
            printf("%s (%d votos)\n", jogadoras[i], maior);

    char sexo[2] = {'F', 'M'};
    const char *nomeSexo[2] = {"FEMININO", "MASCULINO"};

    printf("\n===== PARTICIPANTES =====\n");
    for (i = 0; i < 2; i++) {
        printf("\n-- %s - Maiores de idade --\n", nomeSexo[i]);
        for (j = 0; j < n; j++)
            if (sexos[j] == sexo[i] && idades[j] >= 18)
                printf("%s, %d anos, %c\n", nomes[j], idades[j], sexos[j]);

        printf("\n-- %s - Menores de idade --\n", nomeSexo[i]);
        for (j = 0; j < n; j++)
            if (sexos[j] == sexo[i] && idades[j] < 18)
                printf("%s, %d anos, %c\n", nomes[j], idades[j], sexos[j]);
    }

  
    printf("\n===== MAIORES DE IDADE QUE VOTARAM NA MARTA =====\n");
    for (j = 0; j < n; j++)
        if (votos[j] == 5 && idades[j] >= 18)
            printf("%s\n", nomes[j]);

    int mulheres = 0;
    for (j = 0; j < n; j++)
        if (sexos[j] == 'F')
            mulheres++;
    printf("\nMulheres que participaram: %d\n", mulheres);

    return 0;
}
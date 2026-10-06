#include <stdio.h>

int main() {
    int n;
    int a = 0;
    int b = 1;
    int proximo;

    printf("Digite a ordem do termo: ");
    scanf("%d", &n);

    if(n == 0) {
        printf("O termo é: 0\n");
    } else {
        for(int i = 1; i < n; i++) {
            proximo = a + b;
            a = b;
            b = proximo;
        }

        printf("O termo de ordem %d é: %d\n", n, b);
    }

    return 0;
}
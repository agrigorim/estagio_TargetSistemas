#include <stdio.h>

int main () {

    int f1 = 0, f2 = 1, prox = 0, k;

    printf("Digite o numero: ");
    scanf("%d", &k);

    while (prox <= k) {
        if (prox == k) {
            printf("O numero %d pertence a sequencia de Fibonacci\n", k);
            return 0;
        }
        prox = f1 + f2;
        f1 = f2;
        f2 = prox;
    }
    printf("O numero %d nao pertence a sequencia de Fibonacci\n", k);
    return 0;
}
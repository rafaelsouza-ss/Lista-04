#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[6] = {1, 0, 5, -2, -5, 7};[cite: 1]
    int soma;

    // (b) Soma entre as posições A[0], A[1] e A[5]
    soma = A[0] + A[1] + A[5];[cite: 1]
    printf("Soma de A[0] + A[1] + A[5] = %d\n", soma);

    // (c) Modifica a posição 4 atribuindo o valor 100
    A[4] = 100;[cite: 1]

    // (d) Mostra na tela cada valor do vetor, um em cada linha
    printf("Valores do vetor A:\n");
    for(int i = 0; i < 6; i++) {
        printf("%d\n", A[i]);[cite: 1]
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[10];
    int maior, pos = 0;

    printf("Digite 10 numeros inteiros:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
        if(i == 0 || vet[i] > maior) {
            maior = vet[i];
            pos = i;
        }
    }

    printf("\nVetor: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vet[i]);
    }
    printf("\nMaior elemento: %d\n", maior);
    printf("Posicao do maior elemento: %d\n", pos);

    return 0;
}
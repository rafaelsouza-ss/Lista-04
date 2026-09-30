#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[10];
    int maior, menor;

    printf("Digite 10 valores:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
        if(i == 0) {
            maior = vet[0];
            menor = vet[0];
        } else {
            if(vet[i] > maior) maior = vet[i];
            if(vet[i] < menor) menor = vet[i];
        }
    }

    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}
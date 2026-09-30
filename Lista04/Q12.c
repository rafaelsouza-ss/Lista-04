#include <stdio.h>
#include <stdlib.h>

int main() {
    float vet[5], soma = 0, maior, menor;

    printf("Digite 5 valores:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%f", &vet[i]);
        soma += vet[i];
        if(i == 0) {
            maior = vet[0];
            menor = vet[0];
        } else {
            if(vet[i] > maior) maior = vet[i];
            if(vet[i] < menor) menor = vet[i];
        }
    }

    printf("\nValores lidos: ");
    for(int i = 0; i < 5; i++) {
        printf("%.2f ", vet[i]);
    }

    printf("\nMaior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Media: %.2f\n", soma / 5.0);

    return 0;
}
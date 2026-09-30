#include <stdio.h>
#include <stdlib.h>

int main() {
    float vet[5];
    int pos_maior = 0, pos_menor = 0;
    float maior, menor;

    printf("Digite 5 valores:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%f", &vet[i]);
        if(i == 0) {
            maior = vet[i];
            menor = vet[i];
            pos_maior = 0;
            pos_menor = 0;
        } else {
            if(vet[i] > maior) {
                maior = vet[i];
                pos_maior = i;
            }
            if(vet[i] < menor) {
                menor = vet[i];
                pos_menor = i;
            }
        }
    }

    printf("Posicao do maior valor (%.2f): %d\n", maior, pos_maior);
    printf("Posicao do menor valor (%.2f): %d\n", menor, pos_menor);

    return 0;
}
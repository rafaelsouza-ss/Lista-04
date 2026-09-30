#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[8];
    int x, y;

    printf("Digite 8 valores inteiros para o vetor:\n");
    for(int i = 0; i < 8; i++) {
        scanf("%d", &vet[i]);
    }

    printf("Digite duas posicoes (X e Y) entre 0 e 7:\n");
    scanf("%d %d", &x, &y);

    if(x >= 0 && x < 8 && y >= 0 && y < 8) {
        int soma = vet[x] + vet[y];
        printf("Soma dos valores nas posicoes %d e %d (%d + %d) = %d\n", x, y, vet[x], vet[y], soma);
    } else {
        printf("Posicoes invalidas!\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[10];
    int pares = 0;

    printf("Digite 10 valores inteiros:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
        if(vet[i] % 2 == 0) {
            pares++;
        }
    }

    printf("O vetor possui %d valores pares.\n", pares);

    return 0;
}
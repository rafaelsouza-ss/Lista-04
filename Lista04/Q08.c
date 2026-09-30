#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[6];

    printf("Digite 6 valores inteiros:\n");
    for(int i = 0; i < 6; i++) {
        scanf("%d", &vet[i]);
    }

    printf("\nValores na ordem inversa:\n");
    for(int i = 5; i >= 0; i--) {
        printf("%d\n", vet[i]);
    }

    return 0;
}
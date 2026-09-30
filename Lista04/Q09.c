#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[6];
    int i = 0;

    printf("Digite 6 valores inteiros PARES:\n");
    while(i < 6) {
        int val;
        scanf("%d", &val);
        if(val % 2 == 0) {
            vet[i] = val;
            i++;
        } else {
            printf("Valor impar! Digite um numero par:\n");
        }
    }

    printf("\nValores pares na ordem inversa:\n");
    for(int j = 5; j >= 0; j--) {
        printf("%d\n", vet[j]);
    }

    return 0;
}
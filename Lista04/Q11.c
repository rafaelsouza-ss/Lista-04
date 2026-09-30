#include <stdio.h>
#include <stdlib.h>

int main() {
    float vet[10];
    int qtd_negativos = 0;
    float soma_positivos = 0;

    printf("Digite 10 numeros reais:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%f", &vet[i]);
        if(vet[i] < 0) {
            qtd_negativos++;
        } else if(vet[i] > 0) {
            soma_positivos += vet[i];
        }
    }

    printf("Quantidade de numeros negativos: %d\n", qtd_negativos);
    printf("Soma dos numeros positivos: %.2f\n", soma_positivos);

    return 0;
}
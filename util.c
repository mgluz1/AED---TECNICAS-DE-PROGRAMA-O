#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "util.h"

void limpa_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void pausa() {
    printf("Pressione ENTER para continuar...");
    limpa_buffer();
}

int numero_aleatorio(int min, int max) {
    srand(time(NULL));
    return rand() % (max - min + 1) + min;
}

void ordena_vetor(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho-1; i++)
        for (int j = i+1; j < tamanho; j++)
            if (vetor[i] > vetor[j]) {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
}

void imprime_vetor(const int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}

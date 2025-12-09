#include <stdio.h>
#include "matematica.h"
#include "strings.h"
#include "util.h"

int main() {
    printf("Fatorial de 5: %d\n", fatorial(5));
    printf("Primo 7? %d\n", eh_primo(7));
    printf("MMC 12 e 18: %d\n", mmc(12, 18));

    char texto[] = "Hello";
    inverte_string(texto);
    printf("Invertida: %s\n", texto);

    int v[5] = {5, 2, 9, 1, 7};
    ordena_vetor(v, 5);
    imprime_vetor(v, 5);

    return 0;
}

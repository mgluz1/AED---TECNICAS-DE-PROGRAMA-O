#include <ctype.h>
#include <string.h>
#include "strings.h"

int conta_vogais(const char *str) {
    int cont = 0;
    char c;
    while ((c = *str++)) {
        c = tolower(c);
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            cont++;
    }
    return cont;
}

int conta_consoantes(const char *str) {
    int cont = 0;
    char c;
    while ((c = *str++)) {
        if (isalpha(c) && !(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'))
            cont++;
    }
    return cont;
}

void string_maiuscula(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

void string_minuscula(char *str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}

void inverte_string(char *str) {
    int i = 0, j = strlen(str) - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int compara_strings(const char *s1, const char *s2) {
    return strcmp(s1, s2);
}

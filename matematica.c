#include "matematica.h"

int fatorial(int n) {
    if(N == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int eh_primo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int mdc(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

double media(double a, double b) {
    return (a + b) / 2.0;
}

double potencia(double base, int expoente) {
    double resultado = 1.0;
    for (int i = 0; i < expoente; i++)
        resultado *= base;
    return resultado;
}

double raiz_quadrada(double n) {
    double x = n, y = 1.0;
    while ((x - y) > 0.000001 || (y - x) > 0.000001) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

#include <stdio.h>
#include <math.h>

int main() {
    long n;
    double dbln;
    double sum = 0.0;
    double term;

    printf("\n--- Завдання 1. Варіант 22 ---\n");

    for (n = 0; n < 10; n++) {
        dbln = (double)n;

        // a_n = (-1)^n * (1 - (n^3 + 1) / (n^3 + 5))
        term = pow(-1.0, dbln) * (1.0 - (dbln*dbln*dbln + 1.0) / (dbln*dbln*dbln + 5.0));

        sum += term;
    }

    printf("Сума 10 членів ряду = %10.7lf\n", sum);

    return 0;
}

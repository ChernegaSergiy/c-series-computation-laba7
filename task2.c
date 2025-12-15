#include <stdio.h>
#include <math.h>

int main() {
    long n = 0;
    double dbln;
    double sum = 0.0;
    double term;
    const double eps = 0.00001; 

    printf("\n--- Завдання 2. Варіант 22 ---\n");

    do {
        dbln = (double)n;

        // a_n = (-1)^n * (1 - (n^3 + 1) / (n^3 + 5))
        term = pow(-1.0, dbln) * (1.0 - (dbln*dbln*dbln + 1.0) / (dbln*dbln*dbln + 5.0));

        if (fabs(term) >= eps) {
            sum += term;
        }
        n++;
    } while (fabs(term) >= eps);

    printf("Обчислення суми ряду з точністю до %.5lf.\n", eps);
    printf("Обчислена сума з точністю = %10.7lf\n", sum);

    return 0;
}

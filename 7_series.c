#include <stdio.h>

double harmonic_sum(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    double result = harmonic_sum(n);
    printf("Sum of the series up to %d terms: %.6lf\n", n, result);

    return 0;
}

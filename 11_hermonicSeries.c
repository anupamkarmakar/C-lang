#include <stdio.h>

// Function to calculate factorial
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, term = 3;
    double sum = -1.0; // First term is -1
    int sign = 1; // Alternating sign

    // Take user input
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Loop to calculate the sum of the series
    for (int i = 1; i < n; i++) {
        sum += sign * (1.0 / factorial(term)); // Add/subtract the factorial term
        sign *= -1; // Change sign (+ to - or - to +)
        term += 2;  // Move to next odd number (3, 5, 7, ...)
    }

    // Print the result
    printf("Sum of the series up to %d terms is: %.6f\n", n, sum);

    return 0;
}


#include <stdio.h>

int main() {
    int x, y;
    long long result = 1; // Use long long to handle large values

    printf("Enter the base (X): ");
    scanf("%d", &x);
    printf("Enter the exponent (Y): ");
    scanf("%d", &y);

    if (y < 0) {
        printf("This program only supports non-negative exponents.\n");
        return 0;
    }

    // Loop to multiply x, y times
    for (int i = 0; i < y; i++) {
        result *= x;
    }

    printf("%d^%d = %lld\n", x, y, result);
    
    return 0;
}

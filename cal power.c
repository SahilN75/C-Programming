#include <stdio.h>

// Function prototype
int power(int base, int exponent);

int main() {
    int base, exponent, result;

    // Prompt the user for base and exponent
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate power using the user-defined function
    result = power(base, exponent);

    // Display the result
    printf("%d raised to the power of %d is %d\n", base, exponent, result);

    return 0;
}

// Function definition to calculate power
int power(int base, int exponent) {
    int result = 1;

    // Calculate base raised to the power of exponent
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}
